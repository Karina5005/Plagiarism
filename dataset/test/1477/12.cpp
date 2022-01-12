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
    for (int i = 0; i < n; i++) cin >> a[i];
    ll g = 0;
    sort(all(a));
    for (int i = 1; i < n; i++) g = __gcd(a[i] - a[0], g);
    cout << ((k - a[0]) % g == 0 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);  
    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}