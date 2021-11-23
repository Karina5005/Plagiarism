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
ll arr[200005];
ll diff[200005];

ll gd[200005][18];
ll LOG[200005];

ll query(int l, int r)
{
    int e = LOG[r - l + 1];
    return __gcd(gd[l][e], gd[r - (1 << e) + 1][e]);
}
void solve()
{
    int n;
    cin >> n;
    rep(i, 1, n) cin >> arr[i];
    rep(i, 1, n) diff[i] = abs(arr[i] - arr[i - 1]);
    rep(i, 1, n) gd[i][0] = diff[i];
    for (int e = 1; e < 18; e++)
        for (int i = 1; i + (1 << e) - 1 <= n; i++)
        {
            gd[i][e] = __gcd(gd[i][e - 1], gd[i + (1 << (e - 1))][e - 1]);
        }

    int l = 1, r = 1;
    int ans = 1;
    while (r <= n)
    {
        while (l < r && query(l + 1, r) == 1)
            l++;
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans << endl;
}

int main()
{
    FR;
    for (int i = 2; i < 200005; i++)
        LOG[i] = LOG[i >> 1] + 1;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}