#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;  
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


mt19937 wye_en(chrono::steady_clock::now().time_since_epoch().count());
int d(int lqq, int yp_chu){
  uniform_int_distribution<int> b(lqq, yp_chu); return b(wye_en);
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
 
void l(bool wn, istream_iterator<string> ih) {}
template<typename T, typename... Args>
void error( bool dcd, istream_iterator<string> ax, T bp, Args... lni) {
    cout << "[ " << *ax << " = " << bp << " ] ";
    error(false, ++ax, lni...);
    if(dcd) cout << '\n';
}

const int p = 1e9 + 7;
const int fij = 998244353;
const int y = 1e18;
const int p = 1e6 + 5;
const int wo_jk[8] = {1, 0, -1, 0, 1, 1, -1, -1}, qk[8] = {0, 1, 0, -1, -1, 1, -1, 1};
///////////////////////////////////////////////////////////////////////////////////


void v() {
    int n; cin >> n;
    vec<pii> v(1);
    map<int, int> dvh[2];
    rep(i, 1, n) {
        int x, y; cin >> x >> y;
        v.pb({x, y});
        dvh[0][x]++;
        dvh[1][y]++;
    }

    int rem = 0;
    rep(i, 1, n) {
        rem += (dvh[0][v[i].ff] - 1) * (dvh[1][v[i].ss] - 1);
    }

    cout << n * (n - 1) * (n - 2) / 6 - rem << nl;
}

signed main() {
    fast;
    int t; cin >> t; 
    while(t--)
    v();
    // cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}