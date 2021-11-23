#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
typedef vector<int> vi;
typedef vector<ll> vll;
 
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
typedef vector<vpii> vvpii;
typedef vector<vpll> vvpll;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fi first
#define se second
 
template<class T> bool ckmin(T &jg_p, const T &f) {return jg_p > f ? jg_p = f, 1 : 0;}
template<class T> bool ckmax(T &hg, const T &glp) {return hg < glp ? hg = glp, 1 : 0;}
 
namespace debug {
    void vzk(int rg_kmn) {cerr << rg_kmn;}
    void ah_jj(long long rf) {cerr << rf;}
    void mg(double jb) {cerr << jb;}
    void h_nn(long double p_z) {cerr << p_z;}
    void unn(char hi_mow) {cerr << '\'' << hi_mow << '\'';}
    void s(const string &bb) {cerr << '\"' << bb << '\"';}
    void gp_bfv(const char *dg_h) {cerr << '\"' << dg_h << '\"';}
    void qr_sl(bool w) {cerr << (w ? "true" : "false");}
 
    template<typename T, typename V>
    void __print(const pair<T, V> &rob_fs) {cerr << '{'; __print(rob_fs.first); cerr << ','; __print(rob_fs.second); cerr << '}';}
    template<typename T>
    void __print(const T &d_zs) {int f = 0; cerr << '{'; for(auto n_czf : d_zs) cerr << (f++ ? "," : ""), __print(n_czf); cerr << "}";}
    void ibh_arf() {cerr << "]\n";}
    template <typename T, typename... V>
    void _print(T w_ort, V... p) {__print(w_ort); if(sizeof...(v)) cerr << ", "; _print(p...);}
 
#ifdef ljuba
#define dbg(x...) cerr << "\e[91m" << "LINE(" << __LINE__ << ") -> " << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
}
 
using namespace debug;
 
const char hca_prn = '\n';
 
mt19937 m_lep(chrono::high_resolution_clock::now().time_since_epoch().count());
 
/*
Ð¿Ð¾Ð³Ð»ÐµÐ´Ð°Ñ ÑÐ°Ð¼Ð¿Ð»Ðµ ÑÐµÑÑÐ¾Ð²Ðµ, Ð¿ÑÐµ Ð½ÐµÐ³Ð¾ ÑÑÐ¾ Ð¸Ð¼Ð¿Ð»ÐµÐ¼ÐµÐ½ÑÐ¸ÑÐ°Ñ (Ð¼Ð¾Ð¶Ð´Ð° Ð¸Ð¼Ð°Ñ Ð¿Ð¾Ð³ÑÐµÑÐ½Ñ Ð¸Ð´ÐµÑÑ) 
ÑÐ¼ÐµÑÑÐ¾ Ð´Ð° ÑÐ°Ð·Ð¼Ð°ÑÑÐ°Ñ Ð½ÐµÐºÐµ Ð³Ð»ÑÐ¿Ðµ ÑÐ»ÑÑÐ°ÑÐµÐ²Ðµ Ð½Ð° Ð¿Ð°Ð¿Ð¸ÑÑ, ÑÐ°Ð·Ð¼Ð¸ÑÑÐ°Ñ Ð·Ð°Ð¿ÑÐ°Ð²Ð¾ Ð¾ Ð·Ð°Ð´Ð°ÑÐºÑ
*/

const int vjl = 500;
const int s = 2e5 + 12;
int lhc_ll[s];
int y_e[vjl+1][vjl];

void ju() {
    int ul_jo, e;
    cin >> ul_jo >> e;
    vpii wbw_h(ul_jo);

    for(auto &mxk_n : wbw_h) {
        cin >> mxk_n.fi >> mxk_n.se;
    }

    vi tao_d(ul_jo, -1);

    int w = 0;

    for(int lp = 0; lp < e; ++lp) {
        for(int bz_ck = 2; bz_ck <= vjl; ++bz_ck) w += y_e[bz_ck][lp%bz_ck];
        w += lhc_ll[lp];
        int xrr_g, ly_obk;
        cin >> xrr_g >> ly_obk;
        --ly_obk;

        int gd = wbw_h[ly_obk].fi + wbw_h[ly_obk].se;

        if(xrr_g == 1) {
            tao_d[ly_obk] = lp;
        } else {
            int ibm_oo = (lp - tao_d[ly_obk]) % gd;
            if(ibm_oo >= wbw_h[ly_obk].fi) {
                --w;
            }
        }

        int d_sr = (xrr_g == 1 ? 1 : -1);

        if(gd <= vjl) {
            y_e[gd][tao_d[ly_obk]%gd] -= d_sr;
            y_e[gd][(tao_d[ly_obk]+wbw_h[ly_obk].fi)%gd] += d_sr;
        } else {
            for(int c = tao_d[ly_obk]; c < s; c += gd) {
                lhc_ll[c] -= d_sr;
            }
            for(int ibz = tao_d[ly_obk]+wbw_h[ly_obk].fi; ibz < s; ibz += gd) {
                lhc_ll[ibz] += d_sr;
            }
        }

        cout << w << hca_prn;
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int ew_n = 1;
    //cin >> testCases;
    while(ew_n--)
        ju();
}
