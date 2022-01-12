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
 
void yp_chu()
{
    ll n,k;cin>>n>>k;
    ll ans=0;ll p=1;
    for(ll i=0;i<=30;i++){
        if(k&(1<<i)){
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
int b=1;cin>>b;
while(b--)
{
yp_chu();
}
return 0;
}
