#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
// ll gcd(ll a, ll b)
// {
// if (b == 0)
// return a;
// return gcd(b, a % b);
// }
 
void solve()
{
    ll n,k;cin>>n>>k;
    ll ans=0;ll p=1;
    {
    ll i=0;
    for ( ; i<=30; ) 
{
        if(k&(1<<i)){
            ans=(ans+p)%mod;
        }
        p=(p*n)%mod;
    	i++; 
    
    }}
    cout<<ans<<endl;
}
int main()
{

cin.tie(0);cout.tie(0);
int t=1;cin>>t;
for ( ; t--; ) 
{
solve();
}
return 0;
}
