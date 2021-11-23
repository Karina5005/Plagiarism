#include <bits/stdc++.h>
/* #include <ext/pb_ds/assoc_container.hpp> */
/* #include <ext/pb_ds/tree_policy.hpp> */
using namespace std;
/* using namespace __gnu_pbds; */

#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define ins insert
#define pqueue priority_queue
#define ar array
#define vt vector

#define for_base(i, a, b, x) for (int i=((a)<(b))?(a):(a)-1; ((a)<(b))?i<(b):i>=(b); ((a)<(b))?i+=(x):i-=(x))
#define FOR1(a) for_base(i, 0, a, 1)
#define FOR2(i, a) for_base(i, 0, a, 1)
#define FOR3(i, a, b) for_base(i, a, b, 1)
#define FOR4(i, a, b, x) for_base(i, a, b, x)
#define FIFTH(a, b, c, d, e, ...) e
#define FOR(...) FIFTH(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define trav(a, x) for (auto& a: x)
#define FIT(i, x) for (auto i=(x).begin(); i!=(x).end(); ++i)
#define RIT(i, x) for (auto i=(x).rbegin(); i!=(x).rend(); ++i)
#define finish(...) return void(print(__VA_ARGS__))

typedef long long ll;
typedef long double ld;
typedef string str;

template<class T> using min_queue = pqueue<T, vector<T>, greater<T>>;
/* find_by_order(x) => returns an iterator to the element at a given position */
/* order_of_key(x) => returns the position of a given element */
/* template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; */

template<class T> bool umin(T& oe_vuz, const T& ajs_ko) { return ajs_ko < oe_vuz ? oe_vuz = ajs_ko, 1 : 0; }
template<class T> bool umax(T& oo_ijt, const T& c_a) { return oo_ijt < c_a ? oo_ijt = c_a, 1 : 0; }

template<class T> void vg(T& ox_sme) { cin >> ox_sme; }
template<class H, class T> void read(pair<H, T>& m) { cin >> m.f >> m.s; }
template<class A, size_t S> void read(array<A, S>& vbf_o) { trav(a, x) read(a); }
template<class T> void read(vector<T>& pnb) { trav(i, v) read(i); }
template<class H, class... T> void read(H& d_c, T&... zp) { read(d_c); read(zp...); }

template<class H, class T> ostream &operator<<(ostream &rjn_ap, pair<H, T> &w_w) { rjn_ap << w_w.fi << " " << w_w.se; return rjn_ap; }
template<class H, class T> ostream &operator<<(ostream &xik_l, vector<pair<H, T>> &exu_prp) { string s_mql; trav(i, v) xik_l << s_mql << i, s_mql = "\n"; return xik_l; }
template<class T, size_t S> ostream &operator<<(ostream &p_lxz, array<T, S> &az) { string ue; trav(i, a) p_lxz << ue << i, ue = " "; return p_lxz; }
template<class T, size_t S> ostream &operator<<(ostream &vbk, vector<array<T, S>> &opr_fd) { string yp; trav(i, v) vbk << yp << i, yp = "\n"; return vbk; }
template<class T> ostream &operator<<(ostream &d, vector<T> &vcd_joc) { string i; trav(i, v) d << i << i, i = " "; return d; }
template<class T> ostream &operator<<(ostream &xr, vector<vector<T>> &p_fzz) { string ofz; trav(i, v) xr << ofz << i, ofz = "\n"; return xr; }
template<class T> void vpy_pw(T s_f) { cout << s_f; }
template<class H, class... T> void write(const H &nef_gn, const T &...h_b) { write(nef_gn); write(h_b...); }
void x() { vpy_pw('\n'); }
template<class H, class... T> void mw_p(const H &fg, const T &...v_akv) { write(fg); if (sizeof...(t)) vpy_pw(' '); print(v_akv...); }

void jv() { cerr << "]" << endl; }
template<class H, class... T> void DBG(H u_khs, T... m) { cerr << u_khs; if(sizeof...(t)) cerr << ", "; DBG(m...); }
#ifdef local
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

/* const ll mod = 1e9 + 7; */
/* const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1}; */

void b_ji() {
    int d;
    vg(d);

    vt<int> a(d);
    iota(all(a), 1);
    FOR(i, 1, n, 2) {
        swap(a[i - 1], a[i]);
    }
    if(d & 1)
        swap(a[d - 1], a[d - 2]);
    mw_p(a);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int p=1;
    vg(p);
    for (int hic=1; hic<=p; ++hic) {
        /* write("Case #", tc, ": "); */
        b_ji();
    }
}

