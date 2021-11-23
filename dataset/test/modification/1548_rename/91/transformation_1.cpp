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

const int n[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int ey[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int aop = 1e9 + 7;
const int e_i = 1e9;
const int l = 998244353;
const int u_g = 0x3f3f3f3f;
const int jlr = 0xc0c0c0c0;

const pair<int, int> fhn = {0, -1};

/* Functions */

inline int j(int zn_m)
{
    return zn_m << 1;
}
inline int w_n(int lx_rs)
{
    return (lx_rs << 1) | 1;
}
inline int g(int w)
{
    return w & -w;
}
inline int t(int uu)
{
    return 1 << uu;
}
inline int aao_be(int l)
{
    return l >> 1;
}
inline int dor_zi(int pbm)
{
    return pbm << 1;
}
inline int km(int ieo_i, int p_jl)
{
    return (ieo_i >> p_jl) & 1;
}
inline int iv(int x, int g_alu)
{
    return x | (1 << g_alu);
}
inline int s(int ixe)
{
    return ixe & 1;
}
inline int qq_yso(int rcm)
{
    return rcm >= 0 ? (rcm == 0 ? 0 : 1) : -1;
}

template <typename T> inline void qread(T &iuq_px)
{
    iuq_px = 0;
    bool a = 1;
    char doc = getchar();
    while (doc < '0' || doc > '9')
    {
        if (doc == '-')
            a = 0;
        doc = getchar();
    }
    while (doc >= '0' && doc <= '9')
    {
        iuq_px = (iuq_px << 1) + (iuq_px << 3) + doc - '0';
        doc = getchar();
    }
    if (a)
        return iuq_px;
    return ~(iuq_px - 1);
}

/* Qucick abbrs */
#define fi first
#define se second
#define mp make_pair

} // namespace DBH
using namespace DBH;
//! ----------------------------- WARNING: FOLLOWING YOUR CODE -----------------------------

ll cte_y;
int jt;

ll foq[3000005][3];
ll cei_hnd[3000005];
ll fpx_o[3000005];

ll n_d(ll ee_u, ll bev_k, ll t)
{
    ll nqw = 1;
    for (; bev_k; bev_k >>= 1, ee_u = (ee_u * ee_u) % t)
    {
        if (bev_k & 1)
            nqw = (nqw * ee_u) % t;
    }
    return nqw;
}

ll cai_mbx(ll kr, ll axi_ijb)
{
    if (kr < axi_ijb)
        return 0;
    return (((cei_hnd[kr] * fpx_o[axi_ijb]) % aop) * fpx_o[kr - axi_ijb]) % aop;
}

void wuo_o()
{
    ll vom = n_d(3, aop - 2, aop);
    cei_hnd[0] = 1;
    for (int atn_s = 1; atn_s < 3000005; atn_s++)
    {
        cei_hnd[atn_s] = (cei_hnd[atn_s - 1] * atn_s) % aop;
    }

    fpx_o[3000004] = n_d(cei_hnd[3000004], aop - 2, aop);

    for (int g_fth = 3000003; g_fth >= 0; g_fth--)
    {
        fpx_o[g_fth] = (fpx_o[g_fth + 1] * (g_fth + 1)) % aop;
    }
    scanf("%lld %d", &cte_y, &jt);
    foq[0][0] = cte_y;
    foq[0][1] = cte_y;
    foq[0][2] = cte_y;
    for (int dgz = 1; dgz <= 3 * cte_y; dgz++)
    {
        ll pwg = (cai_mbx(3 * cte_y + 3, dgz + 1) - cai_mbx(1, dgz) - cai_mbx(2, dgz)) % aop;
        foq[dgz][0] += -(vom * foq[dgz - 1][1]) % aop;
        foq[dgz][0] %= aop;
        foq[dgz][0] += -(vom * 2 * foq[dgz - 1][0]) % aop;
        foq[dgz][0] %= aop;
        foq[dgz][0] += (vom * pwg) % aop;
        foq[dgz][0] %= aop;

        foq[dgz][1] += -(vom * foq[dgz - 1][1]) % aop;
        foq[dgz][1] %= aop;
        foq[dgz][1] += (vom * foq[dgz - 1][0]) % aop;
        foq[dgz][1] %= aop;
        foq[dgz][1] += (vom * pwg) % aop;
        foq[dgz][1] %= aop;

        foq[dgz][2] += (vom * 2 * foq[dgz - 1][1]) % aop;
        foq[dgz][2] %= aop;
        foq[dgz][2] += (vom * foq[dgz - 1][0]) % aop;
        foq[dgz][2] %= aop;
        foq[dgz][2] += (vom * pwg) % aop;
        foq[dgz][2] %= aop;
    }

    while (jt--)
    {
        int awr;
        scanf("%d", &awr);
        printf("%lld\n", (foq[awr][0] % aop + aop) % aop);
    }
}

int main()
{
    FR;
    wuo_o();
    return 0;
}