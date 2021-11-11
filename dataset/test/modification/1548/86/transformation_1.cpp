#include <bits/stdc++.h>
using namespace std;


namespace DBH
{



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



#define rep(a, b, c) for (int a = b; a <= c; a++)
#define reb(a, b, c) for (int a = b; a < c; a++)
#define per(a, b, c) for (int a = b; a >= c; a--)
#define ber(a, b, c) for (int a = b; a > c; a--)



typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



const int DIR4[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int DIR8[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int MOD197 = 1e9 + 7;
const int MOD19 = 1e9;
const int MOD353 = 998244353;
const int INF = 0x3f3f3f3f;
const int NINF = 0xc0c0c0c0;

const pair<int, int> NILP = {0, -1};



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
        /* 'if' begin */
        if (ch == '-')
            /* 'if' inside */
            flag = 0;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        X = (X << 1) + (X << 3) + ch - '0';
        ch = getchar();
    }
    /* 'if' begin */
    if (flag)
        /* 'if' inside */
        return X;
    return ~(X - 1);
}


#define fi first
#define se second
#define mp make_pair

} 
using namespace DBH;


ll n;
int q;

ll fac[3000005];
ll fac_inv[3000005];
ll a[3000005];
ll b[3000005];

ll fpow(ll a, ll b, ll m)
{
    ll ans = 1;
    for (; b; b >>= 1, a = (a * a) % m)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
            ans = (ans * a) % m;
    }
    return ans;
}

ll COMB(ll n, ll m)
{
    /* 'if' begin */
    if (n < m)
        /* 'if' inside */
        return 0;
    return (((fac[n] * fac_inv[m]) % MOD197) * fac_inv[n - m]) % MOD197;
}

void solve()
{
    ll threev = fpow(3, MOD197 - 2, MOD197);
    fac[0] = 1;
    for (int i = 1; i < 3000005; i++)
    /* 'for' inside */
    {
        fac[i] = (fac[i - 1] * i) % MOD197;
    }

    fac_inv[3000004] = fpow(fac[3000004], MOD197 - 2, MOD197);

    for (int i = 3000003; i >= 0; i--)
    /* 'for' inside */
    {
        fac_inv[i] = (fac_inv[i + 1] * (i + 1)) % MOD197;
    }
    scanf("%lld %d", &n, &q);

    for (int i = 0; i <= 3 * n + 3; i++)
    /* 'for' inside */
    {
        a[i] = COMB(3 * n + 3, i);
    }
    a[0] -= 1;
    a[1] -= 3;
    a[2] -= 3;
    a[3] -= 1;
    for (int i = 3 * n; i >= 0; i--)
    /* 'for' inside */
    {
        b[i] = a[i + 3];
        a[i + 2] -= (b[i] * 3) % MOD197;
        a[i + 2] %= MOD197;
        a[i + 1] -= (b[i] * 3) % MOD197;
        a[i + 1] %= MOD197;
    }

    while (q--)
    {
        int x;
        scanf("%d", &x);
        printf("%lld\n", (b[x] % MOD197 + MOD197) % MOD197);
    }
}

int main()
{
    FR;
    solve();
    return 0;
}