#include "bits\stdc++.h"
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define ee cout<<endl;
#define T int t; cin>>t; while(t--)
#define pb push_back
#define int long long
#define ll long long
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld",x);
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FF for(int i=0 ;i<n ;i++){int x; cin>>x; v.pb(x);}

using namespace std ;
int32_t main()
{

      T
    {
        bool q=0;
        
        int a,b,c,cnt=0, ans=0;
        cin>>a>>b>>c;
 
        ans=a+b+c;
        cnt=ans/9;
        if(a>=cnt  &&  b>=cnt  &&  c>=cnt )
            q=1;
        if((ans)%9==0 && q)
            yes
        else
            no
    }
}