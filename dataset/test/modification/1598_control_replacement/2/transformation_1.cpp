#include <iomanip>
#include <iostream>
// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;;

    ll a[n], s = 0;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        cin >> a[i];
        s += a[i];
    	i++; 
    
    }}
    if ((s<<1) % n) { cout << 0 << endl; return; }
    ll k = (s<<1) / n, ans = 0;
    map<ll, ll> ctr;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        if(ctr[k-a[i]]) ans += ctr[k-a[i]];
        ctr[a[i]]++;
    	i++; 
    
    }}   
    cout << ans << endl;
}

int main()
{ 
    int T;
    cin >> T;
    for ( ; T--; ) 
solve();
    return 0;
}