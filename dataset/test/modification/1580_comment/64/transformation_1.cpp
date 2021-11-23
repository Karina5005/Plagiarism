#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef long double lld;
const ll mod = 1e9+7;
const ll mod1 = 998244353;
const ll inf = 9e18+5;
const double pi = acosl(-1.0l);
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second
const long double eps = 1e-9;


const int mx= 4e3+4;
int pref[ mx ][ mx ];
int a[ mx ][ mx ];

ll prefsum(int x1 , int y1 , int x2 , int y2 ){

    ll ans = pref[x2][y2];
    ans -= (x1-1>=0)?pref[x1-1][y2]:0;
    ans -= (y1-1>=0)?pref[x2][y1-1]:0;
    ans += (y1-1>=0 && x1-1>=0 )?pref[x1-1][y1-1] : 0;
    return ans;
}

ll sz(int x1, int y1 , int x2 , int y2){
    return (x2-x1+1)*(y2-y1+1);
}

ll calculate(int x1, int y1 , int x2 , int y2){

    ll sum = 0 ;
    
    ll ans = sz(x1+1,y1 , x2-1 ,y1 )-prefsum(x1+1,y1 , x2-1 ,y1 );


    ans += sz(x1+1,y2,x2-1,y2)-prefsum(x1+1,y2 , x2-1 ,y2 );
    ans += sz(x1,y1+1,x1,y2-1)-prefsum(x1,y1+1,x1,y2-1);
    ans += sz(x2,y1+1,x2,y2-1)-prefsum(x2,y1+1,x2,y2-1);
    ans += prefsum(x1+1,y1+1,x2-1,y2-1);

    return ans;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
       ll A,B;
       cin>>A>>B;
       memset(pref , 0 , sizeof pref);

       for(int i = 0 ; i < A;i++)/* 'for' inside */
       {
            string s;
            cin>>s;
            for(int j = 0 ; j < B ; j++)/* 'for' inside */
            {
                a[i][j]  = s[j]-'0';
            }
       }

       for(int i = 0; i<A;i++)/* 'for' inside */
       {
        for(int j = 0;j<B;j++)/* 'for' inside */
        {
            pref[i][j] = ((i-1>=0)?pref[i-1][j]:0) + ((j-1>=0)?pref[i][j-1]:0)
             - ((i-1>=0&&j-1>=0)?pref[i-1][j-1]:0)
             + a[i][j];
        }
       }


        
    ll ans = 1e9;

    ll suff[B+1];
    ll indices[B+1];
       for(int i = 0 ; i < A;i++)/* 'for' inside */
       {
            for(int j = i+4;j< A ;j++)/* 'for' inside */
            {
                for(int k = B-1 ; k>=3;k--)/* 'for' inside */
                {
                    suff[k] = calculate(i , 0 , j , k);
                    /* 'if' begin */
                    if(k+1==B)/* 'if' inside */
                    {
                        indices[k] = k;
                    }
                    else{
                        /* 'if' begin */
                        if(suff[k+1] < suff[k])/* 'if' inside */
                        {
                            indices[k] = indices[k+1];
                            suff[k] = suff[k+1];
                        }
                        else{
                            indices[k] = k;
                        }
                    }
                }
                for(int k = 0; k<B;k++)/* 'for' inside */
                {
                    int next = k + 3;
                    /* 'if' begin */
                    if(next >= B)/* 'if' inside */
                    break;
                    int mycol = indices[next];

                    ans = min(ans , calculate(i , k , j , mycol) );
                }
            }
       }
       cout<<ans<<"\n";
    }
}
