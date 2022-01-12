/* -----------------RISHABH VERMA------------*/

#include <bits/stdc++.h>

using namespace std;

#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define ll long long
const ll lo_ym = 1e9 + 7;
#define sums accumulate
#define int long long

#define for_i(i, t, n) for (ll i = t; i < (ll)n; ++i)
#define for_j(j, i, n) for (ll j = i; j < (ll)n; ++j)
#define for_r(i, n, L, t) for (ll i = n - L; i >= t; --i)
#define for_s(i, vec) for (auto &i : vec)
#define dis(m) cout<<m<<endl

#define yes dis("YES")
#define no dis("NO")
#define yy dis("Yes")
#define nn dis("No")
#define ret(v) cout<<v<<endl;return;

#define all_v(vec) vec.begin(), vec.end()
#define all_a(vec, n) vec, vec + n
#define sz(v) (int)(v.size())
#define mem(t,m) memset(t,m,sizeof t)
#define is_reverse greater<ll>
#define ff first
#define sec second

#define ve vector
#define se set
#define ld long double

#define unmapll unordered_map<ll,ll>
#define unset unordered_set
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define eb emplace_back
#define pqb priority_queue<ll>
#define pqs priority_queue<ll, ve<ll>, greater<ll>>
#define mnh priority_queue<pll, ve<pll>, greater<pll>>
#define setbits(res) __builtin_popcount(res)
#define pp pop_back
#define pb push_back
#define endl "\n"
#define mp make_pair

void j(long hc_q) {cerr << hc_q;}
void rul_bd(ll x) {cerr << x;}
void be_b(unsigned zo) {cerr << zo;}
void mr(unsigned long zfl) {cerr << zfl;}
void sx(unsigned ll c) {cerr << c;}
void vdj(float t) {cerr << t;}
void gj_b(double am_gn) {cerr << am_gn;}
void zgs_ngn(long double fnc_h) {cerr << fnc_h;}
void k_eyw(char y_jmf) {cerr << '\'' << y_jmf << '\'';}
void fs_r(const char *xnp) {cerr << '\"' << xnp << '\"';}
void cs_epa(const string &a_xpe) {cerr << '\"' << a_xpe << '\"';}
void iqo_dmo(bool zya) {cerr << (zya ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &y) {cerr << '{'; __print(y.ff); cerr << ','; __print(y.sec); cerr << '}';}
template<typename T>
void __print(const T &h_qiv) {ll L = 0; cerr << '{'; for (auto &uva : h_qiv) cerr << (L++ ? "," : ""), __print(uva); cerr << "}";}
void at() {cerr << "]\n";}
template <typename T, typename... V>
void nuf(T pq, V... jz) {__print(pq); if (sizeof...(v)) cerr << ", "; _print(jz...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll binpow_it(ll a, ll b) {
    a %= lo_ym;
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * 1ll * a) % lo_ym;
        a = (a * a * 1ll) % lo_ym, b >>= 1;
    }
    return ans;
}

void ukf() {
    ll n;
    cin >> n;
    ve<ll> a(n);
    for_i(i, 0, n) cin >> a[i];
    sort(all_v(a));
    ll ans=0;
    for_i(i,0,n){
        ll x=upper_bound(all_v(a),a[i]+2)-a.begin();
        x-=1;
        debug(x);
        if(x>=i+2){
            ans+=1ll*(x-i)*(x-i-1)/2;
        }
    }
    dis(ans);
}

int32_t main() {
    ll t = 1;
    cin >> t;
    while (t--) ukf();
    return 0;
}