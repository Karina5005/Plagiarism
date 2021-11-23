#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define inf 0x3f3f3f3f
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define nep(i, r, l) for (int i = r; i >= l; i--)
void lev_fv(int &dim_niz) { scanf("%d", &dim_niz); }
void i_zg(int &rzk, int &kqn) { scanf("%d%d", &rzk, &kqn); }
void y(int &tq_rhz, int &ax_rg, int &zfg) { scanf("%d%d%d", &tq_rhz, &ax_rg, &zfg); }
void eg_vea(ll &st) { scanf("%lld", &st); }
void x_qdd(ll &xtc_jf, ll &kx) { scanf("%lld%lld", &xtc_jf, &kx); }
void hp_w(ll &k_o, ll &sry, ll &m_k) { scanf("%lld%lld%lld", &k_o, &sry, &m_k); }
void m_lx(char *v) { scanf("%s", v); }
void id(char *k, char *y_ub) { scanf("%s%s", k, y_ub); }
void d(char *bpb, char *q, char *g_xar) { scanf("%s%s%s", bpb, q, g_xar); }
void kj_l(int dt) { printf("%d\n", dt); }
void rgt(ll x_d) { printf("%lld\n", x_d); }
void ti(int b_oqa, int n_uso) { printf("%d %d\n", b_oqa, n_uso); }
void uk(ll wr, ll jg) { printf("%lld %lld\n", wr, jg); }
void zwn_r(int ps_scw, int zw_z, int oc_hu) { printf("%d %d %d\n", ps_scw, zw_z, oc_hu); }
void vt(ll liw, ll naq, ll l_e) { printf("%lld %lld %lld\n", liw, naq, l_e); }
void v_nrb(ll ibl_hn,ll de_ehq,ll xxl){assert(x>=l&&x<=r);}
using namespace std;
const int ws=6e3+5,eqj=1e9+7;
int l,rc_yt[ws],pb[ws],cz_c[ws][ws];
int e[ws][4][4][4];
void wo_jvr(int px_vm)
{
  lev_fv(l);
  rep(i,1,n) i_zg(rc_yt[i],pb[i]);
  rep(i,1,n)
    rep(j,i+1,n) cz_c[i][j]=cz_c[j][i]=__gcd(abs(rc_yt[i]-rc_yt[j]),abs(pb[i]-pb[j]))%4;
  rep(i,1,n)
    rep(j,1,n)
    if(i!=j)
    e[i][rc_yt[j]%4][pb[j]%4][cz_c[i][j]]++;
  ll bs[2];
  bs[0]=bs[1]=0;
  rep(i,1,n)
    {
      rep(x1,0,3)
          rep(x2,0,3)
          if(x1%2==x2%2)
        rep(y1,0,3)
          rep(y2,0,3)
          if(y1%2==y2%2)
        rep(b1,0,3)
          rep(b2,0,3)
          if(b1%2==b2%2)
          {
            int m_wr=2;
            if(x1==x2&&y1==y2) m_wr=0;
            if((b1+b2+m_wr)%2==0&&(b1+b2+m_wr)%4==(((x1-rc_yt[i])*(y2-pb[i])-(x2-rc_yt[i])*(y1-pb[i]))%4+4)%4)
            {
              if(!(x1==x2&&y1==y2&&b1==b2)) bs[b1%2]+=e[i][x1][y1][b1]*e[i][x2][y2][b2];
              else bs[b1%2]+=e[i][x1][y1][b1]*(e[i][x1][y1][b1]-1);
            }
          }
    }
    rgt(bs[0]/6+bs[1]/2);
}
int main() 
{
  // freopen("1.in", "r",stdin);
  // freopen("2.out", "w", stdout);
  srand(time(0));
  int y_e=1,kvb=0;
  // scanf("%d",&t);
  while(y_e--)
  {
    wo_jvr(++kvb);
  }
}
/*
befor submit code check:
freopen
size of N
mod
debug output
*/