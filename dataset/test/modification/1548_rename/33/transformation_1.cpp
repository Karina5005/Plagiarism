#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
typedef pair<int, double> pid;
typedef pair<double, int> pdi;
typedef pair<double, double> pdd;
const double p = 1e-8;
const int t_i = 1e9 + 7;
const double n_h = 1e9 + 7.0;
const ll rs_fof = 2e18;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vp vector<pii>
#define bi bigint
#define fi first
#define se second
#define BC __builtin_popcount
#define BL __builtin_clz
#define BT __builtin_ctz
#define forl(i, a, b) for(int i = a; i < b; i ++)
#define fore(i, a, b) for(int i = a; i <= b; i ++)
#define rforl(i, a, b) for(int i = a; i > b; i --)
#define rfore(i, a, b) for(int i = a; i >= b; i --)
#define Mod(a, b) (((a) % b) + b) % b

template<class TH> void _dbg(const char *mw_i, TH d_qc) {
    cerr<<mw_i<<" = "<<d_qc<<endl;
}
template<class TH, class... TA> void _dbg(const char *msy, TH rrn_pq, TA... p) {
    while(*msy!=',')cerr<<*msy++;
    cerr<<" = "<<rrn_pq<<',';
    _dbg(msy+1, p...);
}
template<class T> ostream &operator<<(ostream& t, vector<T> lw_oow) {
    t << "[";
    for (auto kru_kvt : lw_oow) t << kru_kvt << ",";
    return t << "]";
}
template<class L, class R> ostream &operator<<(ostream &bnz_nmp, pair<L,R> hg) {
    return bnz_nmp << "(" << hg.x << "," << hg.y << ")";
}

#define LOCAL
#ifdef LOCAL
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

namespace FIO {
inline char etm() {
    static char r_x[100000], *qyf = r_x, *gn_ud = r_x;
    return qyf == gn_ud && (gn_ud = (qyf = r_x) + fread(r_x, 1, 100000, stdin), qyf == gn_ud) ? EOF : *qyf++;
}
template <class T> inline int dly_f(T &x) {
    char c_vgt = etm(), xvn_fmx = 1;
    for (; !(c_vgt >= '0' && c_vgt <= '9' || c_vgt == EOF); c_vgt = etm()) if (c_vgt == '-') xvn_fmx = -xvn_fmx;
    if (c_vgt == EOF) return 0;
    for (x = 0; c_vgt >= '0' && c_vgt <= '9'; x = x * 10 + c_vgt - '0', c_vgt = etm());
    x *= xvn_fmx;
    return 1;
}
inline int w_qfy(char *zqc) {
    char qmt_my = etm();
    int r_mq = 0;
    for (; qmt_my <= ' ' && qmt_my != EOF; qmt_my = etm());
    if (qmt_my == EOF) return 0;
    for (; !(qmt_my <= ' '); zqc[r_mq++] = qmt_my, qmt_my = etm());
    zqc[r_mq] = 0;
    return 1;
}
template <typename Head, typename... Tail>
inline int f(Head& loe_bz, Tail&... wws_xim) {
    int g = read(loe_bz);
    return g + read(wws_xim...);
}
inline void h(char a) {
    static char ts_msc[100000], *glc_qb = ts_msc, *b = ts_msc + 100000;
    if (!a) fwrite(ts_msc, 1, glc_qb - ts_msc, stdout), glc_qb = ts_msc;
    else {
        *glc_qb++ = a;
        glc_qb == b&&(fwrite(ts_msc, 1, 100000, stdout), glc_qb = ts_msc);
    }
}
template <class T> inline void write(T ljy) {
    static char w_jh[64];
    if (ljy == 0) h('0');
    else {
        if (ljy < 0) h('-'), ljy = -ljy;
        int jni_cn = 0;
        while (ljy) w_jh[jni_cn++] = ljy % 10 + '0', ljy /= 10;
        for (int tdq_i = jni_cn - 1; tdq_i >= 0; tdq_i --) h(w_jh[tdq_i]);
    }
}
inline void ew(char ju_hhp) {
    h(ju_hhp);
}
inline void wie_j(char *j) {
    for (int bc_jnm = 0; j[bc_jnm]; bc_jnm ++) h(j[bc_jnm]);
}
inline void ysh_w(const char *jr) {
    for (int tpp_rf = 0; jr[tpp_rf]; tpp_rf ++) h(jr[tpp_rf]);
}
template <typename Head, typename... Tail>
inline void euk(Head i, Tail... fwr) {
    write(i), write(fwr...);
}
inline void xff_bw() {
    h(0);
}
}
using namespace FIO;

#define N 3000010
const int f_lc = 1e9 + 7;
int kv[N], mtk_g[N], ql_qwt[N];

void mnw() {
    kv[0] = mtk_g[0] = kv[1] = mtk_g[1] = ql_qwt[1] = 1;
    for (int fcf=2; fcf < N; fcf++) {
        ql_qwt[fcf] = (ll)ql_qwt[f_lc % fcf] * (f_lc - f_lc / fcf) % f_lc;
        kv[fcf]=((ll)kv[fcf-1] * fcf) % f_lc;
        mtk_g[fcf] = (ll)mtk_g[fcf - 1] * ql_qwt[fcf] % f_lc;
    }
}

vector<ll> cl_in, q, kop_ez;
int main() {
    int fo, mjr;
    f(fo, mjr);
    mnw();
    fore(i, 0, 3 * n + 3){
        ll drv_v = 1ll * kv[3*fo+3] * mtk_g[i] % f_lc * mtk_g[3*fo+3-i] % f_lc;
        cl_in.pb(drv_v);
    }
    cl_in[0] -= 1; cl_in[1] -= 3; cl_in[2] -= 3; cl_in[3] -= 1;
    q.pb(0); q.pb(3); q.pb(3); q.pb(1);
    rfore(i, 3 * n + 3, 3){
        cl_in[i] %= f_lc;
        if(cl_in[i] < 0) cl_in[i] += f_lc;
        kop_ez.pb(cl_in[i]);
        cl_in[i - 1] -= q[2] * cl_in[i];
        cl_in[i - 2] -= q[1] * cl_in[i];
    }
    reverse(all(ans));
    while(mjr --){
        int w;
        dly_f(w);
        euk(kop_ez[w],'\n');
        xff_bw();
    }
}
