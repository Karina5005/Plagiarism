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

template<class T> bool umin(T& n_xi, const T& a_kx) { return a_kx < n_xi ? n_xi = a_kx, 1 : 0; }
template<class T> bool umax(T& t, const T& r_ah) { return t < r_ah ? t = r_ah, 1 : 0; }

template<class T> void ax(T& i) { cin >> i; }
template<class H, class T> void read(pair<H, T>& e_y) { cin >> e_y.f >> e_y.s; }
template<class A, size_t S> void read(array<A, S>& qap_qyc) { trav(a, x) read(a); }
template<class T> void read(vector<T>& vea) { trav(i, v) read(i); }
template<class H, class... T> void read(H& xh_wr, T&... ae) { read(xh_wr); read(ae...); }

template<class H, class T> ostream &operator<<(ostream &jba_k, pair<H, T> &i) { jba_k << i.fi << " " << i.se; return jba_k; }
template<class H, class T> ostream &operator<<(ostream &am, vector<pair<H, T>> &a) { string lvv; trav(i, v) am << lvv << i, lvv = "\n"; return am; }
template<class T, size_t S> ostream &operator<<(ostream &agc, array<T, S> &uep_xjt) { string j_j; trav(i, a) agc << j_j << i, j_j = " "; return agc; }
template<class T, size_t S> ostream &operator<<(ostream &o, vector<array<T, S>> &o) { string wji_wne; trav(i, v) o << wji_wne << i, wji_wne = "\n"; return o; }
template<class T> ostream &operator<<(ostream &gym, vector<T> &bhw_zb) { string z; trav(i, v) gym << z << i, z = " "; return gym; }
template<class T> ostream &operator<<(ostream &zja_ouj, vector<vector<T>> &gol) { string va; trav(i, v) zja_ouj << va << i, va = "\n"; return zja_ouj; }
template<class T> void d(T j) { cout << j; }
template<class H, class... T> void write(const H &t, const T &...hf_q) { write(t); write(hf_q...); }
void wye_en() { d('\n'); }
template<class H, class... T> void bp(const H &lqq, const T &...yp_chu) { write(lqq); if (sizeof...(t)) d(' '); print(yp_chu...); }

void b() { cerr << "]" << endl; }
template<class H, class... T> void DBG(H l, T... wn) { cerr << l; if(sizeof...(t)) cerr << ", "; DBG(wn...); }
#ifdef local
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

/* const ll mod = 1e9 + 7; */
/* const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1}; */

void ih() {
    int dcd;
    ax(dcd);

    vt<int> a(dcd);
    iota(all(a), 1);
    FOR(i, 1, n, 2) {
        swap(a[i - 1], a[i]);
    }
    if(dcd & 1)
        swap(a[dcd - 1], a[dcd - 2]);
    bp(a);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int lni=1;
    ax(lni);
    for (int p=1; p<=lni; ++p) {
        /* write("Case #", tc, ": "); */
        ih();
    }
}

