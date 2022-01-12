

#include <bits/stdc++.h>

using namespace std;

#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define ll long long
const ll M = 1e9 + 7;
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

void __print(long t) {cerr << t;}
void __print(ll x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned ll x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.ff); cerr << ','; __print(x.sec); cerr << '}';}
template<typename T>
void __print(const T &x) {ll L = 0; cerr << '{'; for (auto &i : x) cerr << (L++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); /* 'if' begin */
if (sizeof...(v)) /* 'if' inside */
cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll binpow_it(ll a, ll b) {
    a %= M;
    ll ans = 1;
    while (b) {
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
            ans = (ans * 1ll * a) % M;
        a = (a * a * 1ll) % M, b >>= 1;
    }
    return ans;
}

void solve() {
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
        /* 'if' begin */
        if(x>=i+2)/* 'if' inside */
        {
            ans+=1ll*(x-i)*(x-i-1)/2;
        }
    }
    dis(ans);
}

int32_t main() {
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}