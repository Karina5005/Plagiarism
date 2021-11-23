#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/priority_queue.hpp>

#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#pragma GCC target("avx2")

#define deb(x) cout << #x << " = " << x << "\n"
#define all(x) (x).begin(), (x).end()
#define len(x) (ll) x.size()
#define lsb(x) (x) & -(x)
#define l(x) (x << 1) + 1
#define r(x) (x << 1) + 2
#define v(x) (ll)(x - 'a')

#define xx first
#define yy second
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pii;
typedef pair <ld, ld> pld;
typedef pair <ll, ll> pll;

template <class T1, class T2 = less <T1>> using pb_heap = __gnu_pbds::priority_queue <T1, T2, binary_heap_tag>;
template <class T1, class T2 = null_type, class T3 = less <T1>> using pb_map = tree <T1, T2, T3, rb_tree_tag, tree_order_statistics_node_update>;
template <class T1, class T2 = null_type, class T3 = hash <T1>> using pb_umap = gp_hash_table <T1, T2, T3>;
template <class T1, class T2, class T3 = hash <T1>> using umap = unordered_map <T1, T2, T3>;
template <class T> using uset = unordered_set <T>;
template <class T> using vec = vector <T>;

const ll p = numeric_limits <ll>::max() >> 1;
const ll ht_p = numeric_limits <ll>::max() >> 1;
const ll yv_q = 1e9 + 7;
const ll c_nzn = 3e6 + 5;
ll qcf, si, aup_vyl, r[c_nzn], jgq_k[c_nzn], wc[c_nzn][3];

void unp_xy() {
    cin >> qcf >> si;
}

ll ms(ll ey_kts, ll bwv_ea = yv_q - 2) {
    ll om_jb = 1;
    for (; bwv_ea; bwv_ea >>= 1) {
        if (bwv_ea & 1) {
            om_jb = 1ll * om_jb * ey_kts % yv_q;
        }
        ey_kts = 1ll * ey_kts * ey_kts % yv_q;
    }
    return om_jb;
}

void gbd() {
    r[0] = 1;
    for (ll hpu_i = 1; hpu_i < c_nzn; ++hpu_i) {
        r[hpu_i] = 1ll * r[hpu_i - 1] * hpu_i % yv_q;
    }
    jgq_k[c_nzn - 1] = ms(r[c_nzn - 1]);
    for (ll gqr = c_nzn - 2; gqr >= 0; --gqr) {
        jgq_k[gqr] = 1ll * jgq_k[gqr + 1] * (gqr + 1) % yv_q;
    }
}

ll ko(ll b_zpm, ll qx_np) {
    if (qx_np > b_zpm || qx_np < 0) {
        return 0;
    }
    return 1ll * r[b_zpm] * jgq_k[qx_np] % yv_q * jgq_k[b_zpm - qx_np] % yv_q;
}

ll df(ll em_f) {
    return ((em_f % yv_q) + yv_q) % yv_q;
}

void wi_bq() {
    gbd();
    aup_vyl = ms(3);
    wc[0][0] = wc[0][1] = wc[0][2] = qcf + 1;
    for (ll tvb = 1; tvb <= 3 * qcf; ++tvb) {
        ll v = ko(3 * qcf + 3, tvb + 1);
        ll kn_cf = wc[tvb - 1][0], lai = wc[tvb - 1][1];
        wc[tvb][0] = df(1ll * df(v - 2ll * kn_cf - lai) * aup_vyl % yv_q);
        wc[tvb][1] = df(wc[tvb][0] + kn_cf);
        wc[tvb][2] = df(wc[tvb][1] + lai);
    }
    for (ll rm = 0; rm < si; ++rm) {
        ll hm; cin >> hm;
        cout << wc[hm][0] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    unp_xy();
    wi_bq();
}
