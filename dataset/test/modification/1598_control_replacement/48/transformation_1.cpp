#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void solve()
{
    ll n, i, sum = 0, ans = 0;
    cin>>n;
    ll a[n];
    {
    i=0;
    for ( ; i<n; ) 
{
        cin>>a[i];
        sum += a[i];
    	i++; 
    
    }}
    double x = 1.0*sum/n;
    x*=2;
    if(ceil(1.0*x)!=floor(1.0*x))
    {
        cout<<0<<endl;
        return;
    }
    map<ll, ll> m;
    {
    i=0;
    for ( ; i<n; ) 
{
        ll temp = x - a[i];
        ans += m[temp];
        m[a[i]]++;
    	i++; 
    
    }}
    cout<<ans<<endl;
}
int main()
{
    
    cin.tie(0);
    ll t;
    cin>>t;
    for ( ; t--; ) 
{
        solve();
    }
    return 0;
}