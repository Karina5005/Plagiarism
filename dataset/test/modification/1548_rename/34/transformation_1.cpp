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
const double xj = 1e-8;
const int djk = 1e9 + 7;
const double z = 1e9 + 7.0;
const ll zb_cf = 2e18;
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
#define return(a) return flush(), a;

template<class TH> void _dbg(const char *ujq, TH nsf){ cerr<<ujq<<" = "<<nsf<<endl; }
template<class TH, class... TA> void _dbg(const char *dg_gy, TH zb_m, TA... rs_djg) {
    while(*dg_gy!=',')cerr<<*dg_gy++;
    cerr<<" = "<<zb_m<<','; _dbg(dg_gy+1, rs_djg...);
}
template<class T> ostream &operator<<(ostream& i_uqz, vector<T> k) {
    i_uqz << "["; for (auto wt_ny : k) i_uqz << wt_ny << ","; return i_uqz << "]";
}
template<class L, class R> ostream &operator<<(ostream &h, pair<L,R> la_fa) {
    return h << "(" << la_fa.x << "," << la_fa.y << ")";
}

#define LOCAL
#ifdef LOCAL
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

namespace FIO {
    inline char ni() {
        static char kty[100000], *tb_jd = kty, *e = kty;
        return tb_jd == e && (e = (tb_jd = kty) + fread(kty, 1, 100000, stdin), tb_jd == e) ? EOF : *tb_jd++;
    }
    template <class T> inline int cs_s(T &y) {
        char p = ni(), w_n = 1;
        for (; !(p >= '0' && p <= '9' || p == EOF); p = ni()) if (p == '-') w_n = -w_n;
        if (p == EOF) return 0;
        for (y = 0; p >= '0' && p <= '9'; y = y * 10 + p - '0', p = ni());
        y *= w_n;
        return 1;
    }
    inline int z_s(char *ed) {
        char l_m = ni();
        int pey = 0;
        for (; l_m <= ' ' && l_m != EOF; l_m = ni());
        if (l_m == EOF) return 0;
        for (; !(l_m <= ' '); ed[pey++] = l_m, l_m = ni());
        ed[pey] = 0;
        return 1;
    }
    template <typename Head, typename... Tail>
    inline int o_zcy(Head& oun, Tail&... xeq_eo) {
        int gc_l = read(oun);
        return gc_l + read(xeq_eo...);
    }
    inline void c(char rl_it) {
        static char t[100000], *yn_so = t, *h = t + 100000;
        if (!rl_it) fwrite(t, 1, yn_so - t, stdout), yn_so = t;
        else {
            *yn_so++ = rl_it;
            yn_so == h&&(fwrite(t, 1, 100000, stdout), yn_so = t);
        }
    }
    template <class T> inline void write(T lxr_t) {
        static char kxb[64];
        if (lxr_t == 0) c('0');
        else {
            if (lxr_t < 0) c('-'), lxr_t = -lxr_t;
            int fyu = 0;
            while (lxr_t) kxb[fyu++] = lxr_t % 10 + '0', lxr_t /= 10;
            for (int gs = fyu - 1; gs >= 0; gs --) c(kxb[gs]);
        }
    }
    inline void rzb(char kj) {
        c(kj);
    }
    inline void tqm(char *u_c) {
        for (int pta = 0; u_c[pta]; pta ++) c(u_c[pta]);
    }
    inline void pr_sm(const char *idz) {
        for (int xr_iq = 0; idz[xr_iq]; xr_iq ++) c(idz[xr_iq]);
    }
    template <typename Head, typename... Tail>
    inline void write(Head r, Tail... pkb) {
        write(r), write(pkb...);
    }
    inline void j_gwf() {
        c(0);
    }
}
using namespace FIO;

#define N 6010
pii s_fj[N];
int zy[4][4];

int ej[N], e_j[N], pav_i[N];

ll z_ud(int p, int dob_is){
    if(dob_is == 3) return 1ll * p * (p-1) * (p-2) / 6;
    if(dob_is == 2) return 1ll * p * (p - 1) / 2;
    if(dob_is == 1) return p;

}

int main(){
    int gs;
    cs_s(gs);
    fore(i, 1, n) {
        int tz, q;
        o_zcy(tz, q);
        s_fj[i] = pii(tz % 4, q % 4);
        zy[s_fj[i].fi][s_fj[i].se] ++;
    }
    ll w = 0;
    forl(i, 0, 4) forl(j, i, 4) forl(k, j, 4){
        int w = 0;
        pii hid_jw = pii((i >> 1) & 1, i & 1);
        pii dm_f = pii((j >> 1) & 1, j & 1);
        pii oi = pii((k >> 1) & 1, k & 1);
        hid_jw = pii(hid_jw.fi << 1, hid_jw.se << 1);
        dm_f = pii(dm_f.fi << 1, dm_f.se << 1);
        oi = pii(oi.fi << 1, oi.se << 1);
        w += __gcd(abs(hid_jw.fi - oi.fi), abs(hid_jw.se - oi.se));
        w += __gcd(abs(hid_jw.fi - dm_f.fi), abs(hid_jw.se - dm_f.se));
        w += __gcd(abs(dm_f.fi - oi.fi), abs(dm_f.se - oi.se));
        if(w % 4 == 2) continue;
        assert(cur % 4 == 0);
        int cf_lm = zy[hid_jw.fi][hid_jw.se];
        int twu_o = zy[dm_f.fi][dm_f.se];
        int md = zy[oi.fi][oi.se];
        if(i == j && j == k) w += z_ud(cf_lm, 3);
        else if(i == j) w += z_ud(cf_lm, 2) * md;
        else if(i == k) w += z_ud(cf_lm, 2) * twu_o;
        else if(j == k) w += z_ud(twu_o, 2) * cf_lm;
        else w = 1ll * cf_lm * twu_o * md;
    }
    cout << w << endl;
    return(0);
}
