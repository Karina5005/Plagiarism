#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    for ( ; t--; ) 
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll ck = 0;
    {
    int i=0;
    for ( ; i<n; ) 
{
    cin >> v[i];
    i++; 
    
    }}
    ll x = accumulate(v.begin(),v.end(),ck);
    double sum = (2.0*x)/(n*1.0);
    if(ceil(sum)!=floor(sum))
    {
        cout << 0 << endl;
        continue;
    }
    map<ll,ll> m;
    {
    int i=0;
    for ( ; i<n; ) 
{
        m[v[i]]++;
    	i++; 
    
    }}
    ll ans = 0;
    {
    int i=0;
    for ( ; i<n; ) 
{
        ans += m[sum - v[i]];
        if(sum-v[i]==v[i])
        {
            ans--;
        }
    	i++; 
    
    }}
    cout << ans/2 << endl;
    m.clear();
    }
    return 0;
}
