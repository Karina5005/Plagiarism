#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;

 
void solve()
{
    ll n,k;cin>>n>>k;
    ll ans=0;ll p=1;
    for(ll i=0;i<=30;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(k&(1<<i))/* 'if' inside */
        {
            ans=(ans+p)%mod;
        }
        p=(p*n)%mod;
    }
    cout<<ans<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t=1;cin>>t;
while(t--)
{
solve();
}
return 0;
}
