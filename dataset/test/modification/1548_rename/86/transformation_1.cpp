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

const int og_uim[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int vhp[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int xyw_xh = 1e9 + 7;
const int yjz = 1e9;
const int fu = 998244353;
const int ar = 0x3f3f3f3f;
const int kls_uh = 0xc0c0c0c0;

const pair<int, int> y = {0, -1};

/* Functions */

inline int cj(int i_vrc)
{
    return i_vrc << 1;
}
inline int r(int rg)
{
    return (rg << 1) | 1;
}
inline int b(int xo)
{
    return xo & -xo;
}
inline int qrb_gx(int lzd)
{
    return 1 << lzd;
}
inline int k(int p)
{
    return p >> 1;
}
inline int ovy(int xps_qu)
{
    return xps_qu << 1;
}
inline int cgp(int m_od, int t_nx)
{
    return (m_od >> t_nx) & 1;
}
inline int x_cci(int o_rnd, int myk_z)
{
    return o_rnd | (1 << myk_z);
}
inline int jd(int m_f)
{
    return m_f & 1;
}
inline int cw_nr(int fb)
{
    return fb >= 0 ? (fb == 0 ? 0 : 1) : -1;
}

template <typename T> inline void qread(T &t_x)
{
    t_x = 0;
    bool bey = 1;
    char xt = getchar();
    while (xt < '0' || xt > '9')
    {
        if (xt == '-')
            bey = 0;
        xt = getchar();
    }
    while (xt >= '0' && xt <= '9')
    {
        t_x = (t_x << 1) + (t_x << 3) + xt - '0';
        xt = getchar();
    }
    if (bey)
        return t_x;
    return ~(t_x - 1);
}

/* Qucick abbrs */
#define fi first
#define se second
#define mp make_pair

} // namespace DBH
using namespace DBH;
//! ----------------------------- WARNING: FOLLOWING YOUR CODE -----------------------------

ll io;
int qeg_op;

ll m_vi[3000005];
ll x[3000005];
ll v_wau[3000005];
ll jrw[3000005];

ll cub(ll r_omo, ll t_ihx, ll kgy_m)
{
    ll cs = 1;
    for (; t_ihx; t_ihx >>= 1, r_omo = (r_omo * r_omo) % kgy_m)
    {
        if (t_ihx & 1)
            cs = (cs * r_omo) % kgy_m;
    }
    return cs;
}

ll ej(ll ini, ll nfg_ou)
{
    if (ini < nfg_ou)
        return 0;
    return (((m_vi[ini] * x[nfg_ou]) % xyw_xh) * x[ini - nfg_ou]) % xyw_xh;
}

void i()
{
    ll t = cub(3, xyw_xh - 2, xyw_xh);
    m_vi[0] = 1;
    for (int zjp_j = 1; zjp_j < 3000005; zjp_j++)
    {
        m_vi[zjp_j] = (m_vi[zjp_j - 1] * zjp_j) % xyw_xh;
    }

    x[3000004] = cub(m_vi[3000004], xyw_xh - 2, xyw_xh);

    for (int c = 3000003; c >= 0; c--)
    {
        x[c] = (x[c + 1] * (c + 1)) % xyw_xh;
    }
    scanf("%lld %d", &io, &qeg_op);

    for (int k_ik = 0; k_ik <= 3 * io + 3; k_ik++)
    {
        v_wau[k_ik] = ej(3 * io + 3, k_ik);
    }
    v_wau[0] -= 1;
    v_wau[1] -= 3;
    v_wau[2] -= 3;
    v_wau[3] -= 1;
    for (int v = 3 * io; v >= 0; v--)
    {
        jrw[v] = v_wau[v + 3];
        v_wau[v + 2] -= (jrw[v] * 3) % xyw_xh;
        v_wau[v + 2] %= xyw_xh;
        v_wau[v + 1] -= (jrw[v] * 3) % xyw_xh;
        v_wau[v + 1] %= xyw_xh;
    }

    while (qeg_op--)
    {
        int t;
        scanf("%d", &t);
        printf("%lld\n", (jrw[t] % xyw_xh + xyw_xh) % xyw_xh);
    }
}

int main()
{
    FR;
    i();
    return 0;
}