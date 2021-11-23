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

const ll infll = numeric_limits <ll>::max() >> 1;
const ll inf = numeric_limits <ll>::max() >> 1;
const ll mod = 1e9 + 7;
const ll N = 3e6 + 5;
ll n, q, inv3, fac[N], inv[N], ans[N][3];

void input() {
    cin >> n >> q;
}

ll fpow(ll base, ll exponent = mod - 2) {
    ll result = 1;
    for (; exponent; exponent >>= 1) /* 'for' inside */
    {
        /* 'if' begin */
        if (exponent & 1) /* 'if' inside */
        {
            result = 1ll * result * base % mod;
        }
        base = 1ll * base * base % mod;
    }
    return result;
}

void calcFac() {
    fac[0] = 1;
    for (ll i = 1; i < N; ++i) /* 'for' inside */
    {
        fac[i] = 1ll * fac[i - 1] * i % mod;
    }
    inv[N - 1] = fpow(fac[N - 1]);
    for (ll i = N - 2; i >= 0; --i) /* 'for' inside */
    {
        inv[i] = 1ll * inv[i + 1] * (i + 1) % mod;
    }
}

ll choose(ll a, ll b) {
    /* 'if' begin */
    if (b > a || b < 0) /* 'if' inside */
    {
        return 0;
    }
    return 1ll * fac[a] * inv[b] % mod * inv[a - b] % mod;
}

ll gmod(ll x) {
    return ((x % mod) + mod) % mod;
}

void solve() {
    calcFac();
    inv3 = fpow(3);
    ans[0][0] = ans[0][1] = ans[0][2] = n + 1;
    for (ll i = 1; i <= 3 * n; ++i) /* 'for' inside */
    {
        ll s = choose(3 * n + 3, i + 1);
        ll p = ans[i - 1][0], q = ans[i - 1][1];
        ans[i][0] = gmod(1ll * gmod(s - 2ll * p - q) * inv3 % mod);
        ans[i][1] = gmod(ans[i][0] + p);
        ans[i][2] = gmod(ans[i][1] + q);
    }
    for (ll i = 0; i < q; ++i) /* 'for' inside */
    {
        ll x; cin >> x;
        cout << ans[x][0] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    input();
    solve();
}
