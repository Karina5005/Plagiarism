#include <bits/stdc++.h>
using namespace std;

//* USING NAMESPACE TO COLLAPSE THE DBH
namespace DBH
{

/* DEBUG Macros */

#ifdef LLT_DBG

void dbg_out()
{
    cerr << endl;
}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}

#define dbg(...) cerr << "(" << __func__ << ":" << __LINE__ << "):", dbg_out(__VA_ARGS__)
#define FR freopen("in.txt", "r", stdin)
#define FW freopen("out.txt", "w", stdout)

#define TIME_START clock_t time_start = clock()
#define TIME_END clock_t time_end = clock()
#define GET_TIME ((double)(time_end - time_start) / CLOCKS_PER_SEC)

#else
#define dbg(...)
#define FR
#define FW
#define TIME_START
#define TIME_END
#define GET_TIME 0
#endif

/* Loop Macros */

#define rep(a, b, c) for (int a = b; a <= c; a++)
#define reb(a, b, c) for (int a = b; a < c; a++)
#define per(a, b, c) for (int a = b; a >= c; a--)
#define ber(a, b, c) for (int a = b; a > c; a--)

/* Typedef */

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* Constants */

const int DIR4[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int DIR8[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int MOD197 = 1e9 + 7;
const int MOD19 = 1e9;
const int MOD353 = 998244353;
const int INF = 0x3f3f3f3f;
const int NINF = 0xc0c0c0c0;

const pair<int, int> NILP = {0, -1};

/* Functions */

inline int LT(int x)
{
    return x << 1;
}
inline int RT(int x)
{
    return (x << 1) | 1;
}
inline int LB(int x)
{
    return x & -x;
}
inline int MSK(int x)
{
    return 1 << x;
}
inline int HF(int x)
{
    return x >> 1;
}
inline int DB(int x)
{
    return x << 1;
}
inline int GT(int x, int i)
{
    return (x >> i) & 1;
}
inline int ST(int x, int i)
{
    return x | (1 << i);
}
inline int ODD(int x)
{
    return x & 1;
}
inline int SGN(int x)
{
    return x >= 0 ? (x == 0 ? 0 : 1) : -1;
}

template <typename T> inline void qread(T &X)
{
    X = 0;
    bool flag = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            flag = 0;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        X = (X << 1) + (X << 3) + ch - '0';
        ch = getchar();
    }
    if (flag)
        return X;
    return ~(X - 1);
}

/* Qucick abbrs */
#define fi first
#define se second
#define mp make_pair

} // namespace DBH
using namespace DBH;
//! ----------------------------- WARNING: FOLLOWING YOUR CODE -----------------------------

ll n;
int q;

ll dp[3000005][3];
ll fac[3000005];
ll fac_inv[3000005];

ll fpow(ll a, ll b, ll m)
{
    ll ans = 1;
    for (; b; b >>= 1, a = (a * a) % m)
    {
        if (b & 1)
            ans = (ans * a) % m;
    }
    return ans;
}

ll COMB(ll n, ll m)
{
    if (n < m)
        return 0;
    return (((fac[n] * fac_inv[m]) % MOD197) * fac_inv[n - m]) % MOD197;
}

void solve()
{
    ll threev = fpow(3, MOD197 - 2, MOD197);
    fac[0] = 1;
    for (int i = 1; i < 3000005; i++)
    {
        fac[i] = (fac[i - 1] * i) % MOD197;
    }

    fac_inv[3000004] = fpow(fac[3000004], MOD197 - 2, MOD197);

    for (int i = 3000003; i >= 0; i--)
    {
        fac_inv[i] = (fac_inv[i + 1] * (i + 1)) % MOD197;
    }
    scanf("%lld %d", &n, &q);
    dp[0][0] = n;
    dp[0][1] = n;
    dp[0][2] = n;
    for (int x = 1; x <= 3 * n; x++)
    {
        ll M = (COMB(3 * n + 3, x + 1) - COMB(1, x) - COMB(2, x)) % MOD197;
        dp[x][0] += -(threev * dp[x - 1][1]) % MOD197;
        dp[x][0] %= MOD197;
        dp[x][0] += -(threev * 2 * dp[x - 1][0]) % MOD197;
        dp[x][0] %= MOD197;
        dp[x][0] += (threev * M) % MOD197;
        dp[x][0] %= MOD197;

        dp[x][1] += -(threev * dp[x - 1][1]) % MOD197;
        dp[x][1] %= MOD197;
        dp[x][1] += (threev * dp[x - 1][0]) % MOD197;
        dp[x][1] %= MOD197;
        dp[x][1] += (threev * M) % MOD197;
        dp[x][1] %= MOD197;

        dp[x][2] += (threev * 2 * dp[x - 1][1]) % MOD197;
        dp[x][2] %= MOD197;
        dp[x][2] += (threev * dp[x - 1][0]) % MOD197;
        dp[x][2] %= MOD197;
        dp[x][2] += (threev * M) % MOD197;
        dp[x][2] %= MOD197;
    }

    while (q--)
    {
        int x;
        scanf("%d", &x);
        printf("%lld\n", (dp[x][0] % MOD197 + MOD197) % MOD197);
    }
}

int main()
{
    FR;
    solve();
    return 0;
}