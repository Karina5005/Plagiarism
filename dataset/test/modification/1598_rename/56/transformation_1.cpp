#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;  
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


mt19937 tdx_v(chrono::steady_clock::now().time_since_epoch().count());
int pi_d(int mav_iz, int z){
  uniform_int_distribution<int> lo_ym(mav_iz, z); return lo_ym(tdx_v);
}

#define int long long
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define ull unsigned long long
#define rep(i, begin, end) for (__typeof(begin) i = (begin); i <= (end); ++i)
#define repr(i, begin, end) for (__typeof(end) i = (begin); i >= (end); --i)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl "\n"
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define fl(a,x) memset(a, x, sizeof(a));
#define mt make_tuple
#define mxe max_element
#define mne min_element
#define present(c, x) (c.find(x) != c.end())
#define get(a, begin, end) rep(i, (begin), (end)) cin >> (a)[i];
#define show(a, begin, end) rep(i, (begin), (end)) cout << (a)[i] << " "; cout << nl;
#define ld long double 
#define vec vector

typedef pair<int,int> pii;

#define err(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); error(true, _it, args); }
 
void j(bool hc_q, istream_iterator<string> rul_bd) {}
template<typename T, typename... Args>
void error( bool be_b, istream_iterator<string> zo, T mr, Args... zfl) {
    cout << "[ " << *zo << " = " << mr << " ] ";
    error(false, ++zo, zfl...);
    if(be_b) cout << '\n';
}

const int sx = 1e9 + 7;
const int c = 998244353;
const int vdj = 1e18;
const int t = 1e6 + 5;
const int gj_b[8] = {1, 0, -1, 0, 1, 1, -1, -1}, am_gn[8] = {0, 1, 0, -1, -1, 1, -1, 1};
///////////////////////////////////////////////////////////////////////////////////


void zgs_ngn() {
    int n; cin >> n;
    vec<pii> v(1);
    map<int, int> fnc_h[2];
    rep(i, 1, n) {
        int x, y; cin >> x >> y;
        v.pb({x, y});
        fnc_h[0][x]++;
        fnc_h[1][y]++;
    }

    int rem = 0;
    rep(i, 1, n) {
        rem += (fnc_h[0][v[i].ff] - 1) * (fnc_h[1][v[i].ss] - 1);
    }

    cout << n * (n - 1) * (n - 2) / 6 - rem << nl;
}

signed main() {
    fast;
    int t; cin >> t; 
    while(t--)
    zgs_ngn();
    // cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}