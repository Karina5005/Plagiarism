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

const int xd[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int vq[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int q_cr = 1e9 + 7;
const int uvq_qv = 1e9;
const int ww_zzi = 998244353;
const int wt_pq = 0x3f3f3f3f;
const int lse_nh = 0xc0c0c0c0;

const pair<int, int> tbc = {0, -1};

/* Functions */

inline int etm_jw(int j)
{
    return j << 1;
}
inline int rd(int rfr_ldz)
{
    return (rfr_ldz << 1) | 1;
}
inline int dse_uf(int xe_aky)
{
    return xe_aky & -xe_aky;
}
inline int oy_sh(int c_j)
{
    return 1 << c_j;
}
inline int r(int iqd)
{
    return iqd >> 1;
}
inline int qnv_l(int i)
{
    return i << 1;
}
inline int f(int qaa, int zh_v)
{
    return (qaa >> zh_v) & 1;
}
inline int j(int jh_v, int d)
{
    return jh_v | (1 << d);
}
inline int jhy(int frt)
{
    return frt & 1;
}
inline int nl(int sv_gkz)
{
    return sv_gkz >= 0 ? (sv_gkz == 0 ? 0 : 1) : -1;
}

template <typename T> inline void qread(T &t)
{
    t = 0;
    bool s = 1;
    char u_qfn = getchar();
    while (u_qfn < '0' || u_qfn > '9')
    {
        if (u_qfn == '-')
            s = 0;
        u_qfn = getchar();
    }
    while (u_qfn >= '0' && u_qfn <= '9')
    {
        t = (t << 1) + (t << 3) + u_qfn - '0';
        u_qfn = getchar();
    }
    if (s)
        return t;
    return ~(t - 1);
}

/* Qucick abbrs */
#define fi first
#define se second
#define mp make_pair

} // namespace DBH
using namespace DBH;
//! ----------------------------- WARNING: FOLLOWING YOUR CODE -----------------------------

ll gz;
int c_joy;

ll h_mzb[3000005][3];
ll eca_loe[3000005];
ll c_hu[3000005];

ll q(ll db, ll u, ll l_d)
{
    ll xwu_p = 1;
    for (; u; u >>= 1, db = (db * db) % l_d)
    {
        if (u & 1)
            xwu_p = (xwu_p * db) % l_d;
    }
    return xwu_p;
}

ll pnw_dob(ll t_x, ll r_mcf)
{
    if (t_x < r_mcf)
        return 0;
    return (((eca_loe[t_x] * c_hu[r_mcf]) % q_cr) * c_hu[t_x - r_mcf]) % q_cr;
}

void bh()
{
    ll nzg = q(3, q_cr - 2, q_cr);
    eca_loe[0] = 1;
    for (int u = 1; u < 3000005; u++)
    {
        eca_loe[u] = (eca_loe[u - 1] * u) % q_cr;
    }

    c_hu[3000004] = q(eca_loe[3000004], q_cr - 2, q_cr);

    for (int kno = 3000003; kno >= 0; kno--)
    {
        c_hu[kno] = (c_hu[kno + 1] * (kno + 1)) % q_cr;
    }
    scanf("%lld %d", &gz, &c_joy);
    h_mzb[0][0] = gz;
    h_mzb[0][1] = gz;
    h_mzb[0][2] = gz;
    for (int syz = 1; syz <= 3 * gz; syz++)
    {
        ll fdl = (pnw_dob(3 * gz + 3, syz + 1) - pnw_dob(1, syz) - pnw_dob(2, syz)) % q_cr;
        h_mzb[syz][0] += -(nzg * h_mzb[syz - 1][1]) % q_cr;
        h_mzb[syz][0] %= q_cr;
        h_mzb[syz][0] += -(nzg * 2 * h_mzb[syz - 1][0]) % q_cr;
        h_mzb[syz][0] %= q_cr;
        h_mzb[syz][0] += (nzg * fdl) % q_cr;
        h_mzb[syz][0] %= q_cr;

        h_mzb[syz][1] += -(nzg * h_mzb[syz - 1][1]) % q_cr;
        h_mzb[syz][1] %= q_cr;
        h_mzb[syz][1] += (nzg * h_mzb[syz - 1][0]) % q_cr;
        h_mzb[syz][1] %= q_cr;
        h_mzb[syz][1] += (nzg * fdl) % q_cr;
        h_mzb[syz][1] %= q_cr;

        h_mzb[syz][2] += (nzg * 2 * h_mzb[syz - 1][1]) % q_cr;
        h_mzb[syz][2] %= q_cr;
        h_mzb[syz][2] += (nzg * h_mzb[syz - 1][0]) % q_cr;
        h_mzb[syz][2] %= q_cr;
        h_mzb[syz][2] += (nzg * fdl) % q_cr;
        h_mzb[syz][2] %= q_cr;
    }

    while (c_joy--)
    {
        int xa;
        scanf("%d", &xa);
        printf("%lld\n", (h_mzb[xa][0] % q_cr + q_cr) % q_cr);
    }
}

int main()
{
    FR;
    bh();
    return 0;
}