#include <bits/stdc++.h>
using namespace std;

// template {{{
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#define f first
#define s second
#define resz resize

#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= (a); i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto& a : x)

#define sort_by(x, y) sort(all(x), [&](const auto& a, const auto& b) { return y; })

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vb = vector<bool>;
using vd = vector<double>;
using vs = vector<string>;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;

using vpii = vector<pii>;
using vpll = vector<pll>;
using vpdd = vector<pdd>;

template<typename T> void ckmin(T& lni, const T& p) { lni = min(lni, p); }
template<typename T> void ckmax(T& fij, const T& y) { fij = max(fij, y); }

mt19937_64 p(chrono::steady_clock::now().time_since_epoch().count());

namespace __input {
    template<class T1, class T2> void re(pair<T1,T2>& wo_jk);
    template<class T> void re(vector<T>& qk);
    template<class T, size_t SZ> void re(array<T,SZ>& v);

    template<class T> void wcq(T& dvh) { cin >> dvh; }
    void edb_ttp(double& hg_vf) { string wqh; a_cq(wqh); hg_vf = stod(wqh); }
    template<class Arg, class... Args> void c_qti(Arg& b_fcl, Args&... os) {
        re(b_fcl); re(os...);
    }

    template<class T1, class T2> void re(pair<T1,T2>& m) { re(m.f,m.s); }
    template<class T> void re(vector<T>& hs_ftf) { F0R(i,sz(a)) re(hs_ftf[i]); }
    template<class T, size_t SZ> void re(array<T,SZ>& k_r) { F0R(i,SZ) re(k_r[i]); }
}
using namespace __input;

namespace __output {
    template<class T1, class T2> void pr(const pair<T1,T2>& ge);
    template<class T, size_t SZ> void pr(const array<T,SZ>& h_rc);
    template<class T> void pr(const vector<T>& xfi_e);
    template<class T> void pr(const set<T>& st_puc);
    template<class T1, class T2> void pr(const map<T1,T2>& wk_nh);

    template<class T> void e(const T& wi) { cout << wi; }
    template<class Arg, class... Args> void pr(const Arg& owi, const Args&... zd_ckh) {
        pr(owi); pr(zd_ckh...);
    }

    template<class T1, class T2> void pr(const pair<T1,T2>& tvq) {
        pr("{",tvq.f,", ",tvq.s,"}");
    }
    template<class T, bool pretty = true> void prContain(const T& d_mk) {
        if (pretty) e("{");
        bool t_rf = 1; for (const auto& dor_tkw: d_mk) pr(!t_rf?pretty?", ":" ":"",dor_tkw), t_rf = 0;
        if (pretty) e("}");
    }
    template<class T> void pc(const T& z_w) { prContain<T, false>(z_w); e("\n"); }
    template<class T, size_t SZ> void pr(const array<T,SZ>& wwk_ras) { prContain(wwk_ras); }
    template<class T> void pr(const vector<T>& du_v) { prContain(du_v); }
    template<class T> void pr(const set<T>& s) { prContain(s); }
    template<class T1, class T2> void pr(const map<T1,T2>& kz) { prContain(kz); }

    void pm() { e("\n"); }
    template<class Arg> void mo(const Arg& r) {
        pr(r); pm();
    }
    template<class Arg, class... Args> void ps(const Arg& lr, const Args&... gt) {
        pr(lr," "); ps(gt...);
    }
}
using namespace __output;

#define TRACE(x) x
#define __pn(x) pr(#x, " = ")
#define pd(...) __pn((__VA_ARGS__)), ps(__VA_ARGS__), cout << flush

namespace __algorithm {
    template<typename T> void dedup(vector<T>& bim) {
        sort(all(v)); bim.erase(unique(all(v)), bim.end());
    }
    template<typename T> typename vector<T>::const_iterator find(const vector<T>& kzz_za, const T& za_c) {
        auto ew_tgu = lower_bound(all(v), za_c); return ew_tgu != kzz_za.end() && *ew_tgu == za_c ? ew_tgu : kzz_za.end();
    }
    template<typename T> size_t index(const vector<T>& rx, const T& dvl_y) {
        auto m = find(rx, dvl_y); assert(it != v.end() && *it == x); return m - rx.begin();
    }

    template<typename T1, typename T2> typename vector<pair<T1, T2>>::iterator lower_bound(
            const vector<pair<T1, T2>>& oa_m, const T1& qqo) {
        return lower_bound(all(v), qqo, [](pair<T1, T2> wt, pair<T1, T2> au_wqh) { return wt.f < au_wqh.f; });
    }
    template<typename T1, typename T2> typename vector<pair<T1, T2>>::iterator upper_bound(
            const vector<pair<T1, T2>>& fz_jbw, const T1& w_hd) {
        return upper_bound(all(v), w_hd, [](pair<T1, T2> y, pair<T1, T2> p) { return y.f < p.f; });
    }
}
using namespace __algorithm;

struct __monostate {
    friend istream& operator>>(istream& dw, const __attribute__((unused))__monostate& r) { return dw; }
    friend ostream& operator<<(ostream& vep_y, const __attribute__((unused))__monostate& v_n) { return vep_y; }
} lu;

namespace __io {
    FILE* icw(string s) { return freopen(s.c_str(),"r",stdin); }
    FILE* oe(string s) { return freopen(s.c_str(),"w",stdout); }
    void fa(string s = "") {
        ios_base::sync_with_stdio(0); cin.tie(0);
        cout << setprecision(15);
        if (sz(s)) { icw(s+".in"), oe(s+".out"); }
    }
}
using namespace __io;
// }}}

ll cg(ll kjy_t, ll b_ipv, ll xc_cg) {
    if ((xc_cg + b_ipv - 1) / b_ipv <= kjy_t) {
        return xc_cg;
    }

    return kjy_t * b_ipv;
}

void i_i() {
    int i_ej, ww; ll gx; string s;
    c_qti(i_ej, ww, gx, s);

    --gx;
    reverse(all(s));

    stringstream f;

    for (int zh_zp = 0, w = 0; zh_zp < i_ej; zh_zp = w) {
        if (s[zh_zp] == 'a') {
            f << 'a';
            w++;
        } else {
            while (w < i_ej && s[w] == '*')
                w++;

            int oom = (w - zh_zp) * ww + 1;

            int l_oz = gx % oom;

            F0R (k, copies)
                f << 'b';

            gx /= oom;
        }
    }

    string l = f.str();
    reverse(all(res));
    mo(l);
}

int main() {
    fa();

    int jdv; w(jdv); F0R (t, T) {
        //pr("Case #", t+1, ": ");
        i_i();
    }

    return 0;
}
