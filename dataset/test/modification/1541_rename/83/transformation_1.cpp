#include "bits/stdc++.h"
using namespace std;


#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b - 1; i >= a; i--)
#define adv_loop(k, container) for (auto k = container.begin(); k != container.end(); k++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define all(v) v.begin(), v.end()
#define print(x) cout << x << endl
#define nl "\n"
typedef long long ll;
ll rw_nr = 1000000007;

int mq_dv(int exl, int apb_bj){ if (apb_bj == 0)return exl; else return mq_dv(apb_bj, exl % apb_bj);}
long long s_sm(ll rt, ll p_wmr) { return (rt / mq_dv(rt, p_wmr)) * p_wmr; }
bool eq_w(int sp){double rmc_y = sqrt(sp);if (rmc_y - floor(rmc_y) == 0){return 1;}return 0;}
int sa_yb(int et_bp){int jg_etw = 0;while (et_bp){et_bp /= 10;jg_etw++;}return jg_etw;}
bool v(ll hcw){if (hcw > 0){ll yqu_h(round(cbrt(hcw)));return hcw == yqu_h * yqu_h * yqu_h;}return 0LL;}
string lu(int ymk_tij, string jj){string isg_nyi = jj;for (int cgb_jsn = 1; cgb_jsn < ymk_tij; cgb_jsn++)jj += isg_nyi;return jj;}
void iw(char &x){if (x == '0')x = '1';else x = '0';}
string ob(char re){string g(1, re);return g;}
template <typename t>
bool areSame(vector<t> ln,int f)
{unordered_map<t,t> wwh;for(int wm_r=0;wm_r<f;wm_r++) wwh[ln[wm_r]]++;if(wwh.size()==1)return true;else return false;}
template <typename t>
t factorial(t v)
{
    t dxr = 1, sh_dqp;
    for (sh_dqp = 2; sh_dqp <= v; sh_dqp++)
        dxr *= sh_dqp;
    return dxr;
}
bool ckc(string u_fen){
    bool o_rr = true;
    int od = 0;
    int k_jw = u_fen.size() - 1;
    while (k_jw > od)
    {
        if (u_fen[od++] != u_fen[k_jw--])
        {
            o_rr = false;
            break;
        }
    }
    return o_rr;
}

bool bal_al(int uwd) {
  if (uwd == 1) {
    return false;
  }
  for (int gs_zzh = 2; gs_zzh*gs_zzh <= uwd; gs_zzh++) {
    if (uwd % gs_zzh == 0) return false;
  }
  return true;
}
string zi(string p_vxa) {
    loop (i, 0, s.size()) {
        if (p_vxa[i] == '0') p_vxa[i] = '1';
        else p_vxa[i] = '0';
    }
    return p_vxa;
}
template <typename t>
void print_vec(vector<t> gfb_hzw) {
    loop (i, 0, v.size()) cout << gfb_hzw[i] << " ";
    cout << nl;
}
// vector<ll> pot;
// void create_pot() {
//     pot.push_back(1);
//     ll j = 1;
//     loop (i, 1, 32) {
//         pot.push_back(j*2);
//         j *= 2;
//     }
// }
ll bf(ll s_r) {
    ll di = 1, i, q = 10;
    while (s_r) {
        i = s_r % q;
        if (i) di = s_sm(di, i);
        s_r /= q;
    }
    return di;
}
int m(int j_hel)
{
  if (j_hel % 4 == 0) return j_hel;
  if (j_hel % 4 == 1) return 1;
  if (j_hel % 4 == 2) return j_hel + 1;
  return 0;
}
void q(string& hgy_beg, int p , int kpk_xz){
   reverse(hgy_beg.begin()+p, hgy_beg.begin()+kpk_xz+1);
}
int wm_k(int ll) {
    if (ll % 2) return 1;
    else return 2;
}
int fys_ag(vector<int> sh, int i) {
    int zzp_mrx = sh[0], ni = 0;
    loop (i, 1, size) {
        if (sh[i] > zzp_mrx) {
            zzp_mrx = sh[i];
            ni = i;
        }
    }
    return ni;
}
ll g (ll x, int wlk) {
    ll au = 1, gp = 0;
    int x;
    while (x) {
        x = x % 10;
        gp += (x * au);
        au *= wlk;
        x /= 10;
    }  
    return gp;
}
/*-------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------*/
void fb_t()
{
    int kx_tp;
    cin >> kx_tp;
    vector<ll> giw_no(kx_tp);
    loop (i, 0, n) cin >> giw_no[i];
    if (kx_tp <= 2) {
        cout << 0 << nl;
        return;
    }
    sort(all(a));
    vector<ll> u_htz(kx_tp-1);
    u_htz[0] = giw_no[0];
    loop (i, 1, n-1) {
        u_htz[i] = u_htz[i-1] + giw_no[i];
    }

    ll zga = 0;
    ll r = 0;
    loop (i, 1, n) {
        zga += (giw_no[i]*(r)-u_htz[r] + giw_no[r]);
        r++;
    }

    cout << -zga << nl;
} 

int main(int mzw, char const *xzn[])  
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int yt_dr = 1; 
    cin >> yt_dr; 
    while (yt_dr--) fb_t(); 
    return 0;
}



















