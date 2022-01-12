#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(s) (int)s.size()
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int mod = 1e9 + 7;
const int N = 1e6 + 7;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    {
    int i = 0;
    for ( ; i < n; ) 
{
    cin >> a[i];
    i++; 
    
    }}
    ll g = 0;
    sort(all(a));
    {
    int i = 1;
    for ( ; i < n; ) 
{
    g = __gcd(a[i] - a[0], g);
    i++; 
    
    }}
    cout << ((k - a[0]) % g == 0 ? "YES\n" : "NO\n");
}

int main() {
    
    cin.tie(0);  
    int tt;
    cin >> tt;
    for ( ; tt--; ) 
solve();
    return 0;
}