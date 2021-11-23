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

const int bb[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int emj[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int aj_wji = 1e9 + 7;
const int ev_e = 1e9;
const int gl = 998244353;
const int lw_x = 0x3f3f3f3f;
const int s_fj = 0xc0c0c0c0;

const pair<int, int> i = {0, -1};

/* Functions */

inline int u(int r)
{
    return r << 1;
}
inline int rq_q(int uip_hz)
{
    return (uip_hz << 1) | 1;
}
inline int euj_zfr(int rlz)
{
    return rlz & -rlz;
}
inline int kg_r(int r)
{
    return 1 << r;
}
inline int b_e(int i)
{
    return i >> 1;
}
inline int gqa_ik(int e)
{
    return e << 1;
}
inline int opt_uo(int z_yiv, int dh_xqm)
{
    return (z_yiv >> dh_xqm) & 1;
}
inline int si_yg(int tr_e, int m_b)
{
    return tr_e | (1 << m_b);
}
inline int mb_jr(int dtv)
{
    return dtv & 1;
}
inline int c(int d)
{
    return d >= 0 ? (d == 0 ? 0 : 1) : -1;
}

template <typename T> inline void qread(T &q)
{
    q = 0;
    bool b_pj = 1;
    char i = getchar();
    while (i < '0' || i > '9')
    {
        if (i == '-')
            b_pj = 0;
        i = getchar();
    }
    while (i >= '0' && i <= '9')
    {
        q = (q << 1) + (q << 3) + i - '0';
        i = getchar();
    }
    if (b_pj)
        return q;
    return ~(q - 1);
}

/* Qucick abbrs */
#define fi first
#define se second
#define mp make_pair

} // namespace DBH
using namespace DBH;
//! ----------------------------- WARNING: FOLLOWING YOUR CODE -----------------------------
ll tn[200005];
ll r[200005];

ll fx[200005][18];
ll nqy[200005];

ll n(int mzp, int yl_ql)
{
    int pad_chw = nqy[yl_ql - mzp + 1];
    return __gcd(fx[mzp][pad_chw], fx[yl_ql - (1 << pad_chw) + 1][pad_chw]);
}
void rx_s()
{
    int m;
    cin >> m;
    rep(i, 1, n) cin >> tn[i];
    rep(i, 1, n) r[i] = abs(tn[i] - tn[i - 1]);
    rep(i, 1, n) fx[i][0] = r[i];
    for (int lml = 1; lml < 18; lml++)
        for (int dnb_uri = 1; dnb_uri + (1 << lml) - 1 <= m; dnb_uri++)
        {
            fx[dnb_uri][lml] = __gcd(fx[dnb_uri][lml - 1], fx[dnb_uri + (1 << (lml - 1))][lml - 1]);
        }

    int j_py = 1, ppc_jx = 1;
    int nq = 1;
    while (ppc_jx <= m)
    {
        while (j_py < ppc_jx && n(j_py + 1, ppc_jx) == 1)
            j_py++;
        nq = max(nq, ppc_jx - j_py + 1);
        ppc_jx++;
    }
    cout << nq << endl;
}

int main()
{
    FR;
    for (int bot = 2; bot < 200005; bot++)
        nqy[bot] = nqy[bot >> 1] + 1;
    int mcg_cqk;
    cin >> mcg_cqk;
    while (mcg_cqk--)
    {
        rx_s();
    }
    return 0;
}