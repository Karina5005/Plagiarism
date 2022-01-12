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

const int tj_ccb = 1e9 + 7;
const int y = 1e6 + 7;

void pub_be() {
    ll dx, khi_beh;
    cin >> dx >> khi_beh;
    vector<ll> ged(dx);
    for (int wj = 0; wj < dx; wj++) cin >> ged[wj];
    ll mbx = 0;
    sort(all(a));
    for (int f_ioa = 1; f_ioa < dx; f_ioa++) mbx = __gcd(ged[f_ioa] - ged[0], mbx);
    cout << ((khi_beh - ged[0]) % mbx == 0 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);  
    int nv_i;
    cin >> nv_i;
    while (nv_i--) pub_be();
    return 0;
}