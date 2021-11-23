#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fp(ll a, ll b){
    ll res=1;
    while(b){
        /* 'if' begin */
        if(b&1)
        /* 'if' inside */
        res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    start:
    while(t--){
        ll n; cin>>n;
        vector<vector<ll>> v(n, vector<ll>(5));
        for(int i=0;i<n;i++)/* 'for' inside */
        {
            for(int j=0;j<5;j++)/* 'for' inside */
            {
                cin>>v[i][j];
            }
        }
        for(int i=0;i<5;i++)/* 'for' inside */
        {
            for(int j=i+1;j<5;j++)/* 'for' inside */
            {
                int a = 0, b = 0, c = 0;
                for(int k=0;k<n;k++)/* 'for' inside */
                {
                    /* 'if' begin */
                    if(v[k][i] && v[k][j])/* 'if' inside */
                    {
                        c++;
                    }
                    else /* 'if' begin */
                    if(v[k][i])/* 'if' inside */
                    {
                        b++;
                    }
                    else /* 'if' begin */
                    if(v[k][j])/* 'if' inside */
                    {
                        a++;
                    }
                    else break;
                }
                /* 'if' begin */
                if(a + b + c != n)/* 'if' inside */
                {
                    continue;
                }
                else{
                    /* 'if' begin */
                    if(a <= n/2 and b <= n/2)/* 'if' inside */
                    {
                        cout<<"YES\n";
                        goto start;
                    }
                }
            }
        }
        cout<<"NO\n";
    }
	return 0;
}
