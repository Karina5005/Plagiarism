#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e2 - 2;
const ll sz = 2e5 + 10;
const ll mod = 1e9 + 7;
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    auto cmp = [&](ll i1, ll i2){
        return b[i1] < b[i2];
    };
    multiset<ll, decltype(cmp)> left(cmp);
    {
    int i = 0;
    for ( ; i < n; ) 
{
        cin >> a[i], --a[i];
        i++; 
        
        }}
    {
    int i = 0;
    for ( ; i < m; ) 
{
        cin >> b[i];
        i++; 
        
        }}
    for(ll num : a)
        left.insert(num);
    ll ans = 0;
    {
    int i = 0;
    for ( ; i < m; ) 
{
        if(!left.empty()){
            ans += b[i];
            left.erase(--left.end());
        }
        for ( ; left.find(i) != left.end(); ) 
{
            ans += b[i];
            left.erase(left.lower_bound(i));
        }
    	i++; 
    
    }}
    cout << ans << endl;
}
int main(){
    
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    for ( ; t--; ) 
solve();
    return 0;
}