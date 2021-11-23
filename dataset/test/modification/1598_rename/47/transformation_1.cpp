#include <bits/stdc++.h>

#define pii pair<int, int>
#define pll pair<long long, long long>

using namespace std;
using ll = long long;
using ld = long double;

const ll woy_m = 1e9 + 7;
const int p = 1e9;
const ll t = 1e18;
const int pib_yt = 1e5 + 13;
const ld zb = 0.0000001;

void sgj_f() {
    ll nv;
    cin >> nv;
    vector <ll> bz_ms(nv);
    ll zbl = 0;
    for (ll& vxj : bz_ms) {
        cin >> vxj;
        zbl += vxj;
    }
    if (2 * zbl % nv != 0) {
        cout << 0 << endl;
        return;
    }
    zbl = 2 * zbl / nv;
    map <ll, ll> fpj_zz;
    for (auto l : bz_ms) {
        fpj_zz[l]++;
    }
    ll bca_k = 0;
    for (auto w : bz_ms) {
        bca_k += fpj_zz[zbl - w];
    }
    for (auto t : bz_ms) {
        if (2 * t == zbl) {
            bca_k--;
        }
    }
    cout << bca_k / 2 << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int fi = 1;
    cin >> fi;
    while (fi--) {
		sgj_f();
    }

    return 0;
}