#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define inf 0x3f3f3f3f
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define nep(i, r, l) for (int i = r; i >= l; i--)
void dh_sl(int &g_mqr) { scanf("%d", &g_mqr); }
void ddy(int &tb_y, int &rqx_q) { scanf("%d%d", &tb_y, &rqx_q); }
void y(int &hch, int &r_h, int &o_poq) { scanf("%d%d%d", &hch, &r_h, &o_poq); }
void urx_efd(ll &k) { scanf("%lld", &k); }
void i_q(ll &exq_m, ll &hfg_ibx) { scanf("%lld%lld", &exq_m, &hfg_ibx); }
void gj(ll &f_qxe, ll &a_gp, ll &lz_df) { scanf("%lld%lld%lld", &f_qxe, &a_gp, &lz_df); }
void hae_zp(char *ebx_ird) { scanf("%s", ebx_ird); }
void ii_gt(char *cnq, char *sv) { scanf("%s%s", cnq, sv); }
void t_cw(char *dxr_oe, char *mfw_f, char *hcn_vab) { scanf("%s%s%s", dxr_oe, mfw_f, hcn_vab); }
void v(int rnt_m) { printf("%d\n", rnt_m); }
void wm_hhj(ll j_jn) { printf("%lld\n", j_jn); }
void cz(int l, int xne) { printf("%d %d\n", l, xne); }
void m(ll lda, ll vll) { printf("%lld %lld\n", lda, vll); }
void qe(int w_ql, int ow_p, int e) { printf("%d %d %d\n", w_ql, ow_p, e); }
void wj_u(ll k, ll uv, ll nwp) { printf("%lld %lld %lld\n", k, uv, nwp); }
void tde(ll a,ll yjy,ll ky_h){assert(x>=l&&x<=r);}
using namespace std;
const int v_dbm=2e5+5,oxx_o=1e9+7;
int dh_kcl,xj,zhy,wt_x[v_dbm],pk[v_dbm],rrm_e[v_dbm],ry[v_dbm],zj_e[v_dbm][20],kuo[v_dbm][20];
int xnn_n[v_dbm];
void nrj(int mx_iaz[v_dbm][20],int e_uxd[v_dbm],int hdw)
{
  for(int xl_iw=1;xl_iw<=hdw;xl_iw++) mx_iaz[xl_iw][0]=e_uxd[xl_iw];
  for(int em=1;1<<em<=hdw;em++)
    for(int pih=1;pih+(1<<em)-1<=hdw;pih++)
    mx_iaz[pih][em]=max(mx_iaz[pih][em-1],mx_iaz[pih+(1<<(em-1))][em-1]);
}
int ytd(int d_k[v_dbm][20],int p,int cq_d)
{
  int qj=xnn_n[cq_d-p+1];
  return max(d_k[p][qj],d_k[cq_d-(1<<qj)+1][qj]);
}
int d_ean[v_dbm],juu[v_dbm];
void okn(int ftg[v_dbm],int plo_smk)
{
  stack<int>tb;
  rep(i,1,n)
  {
    while(tb.size()&&ftg[tb.top()]>ftg[i]) tb.pop();
    d_ean[i]=tb.size()?tb.top():0;
    tb.push(i);
  }
  while(!tb.empty()) tb.pop();
  nep(i,n,1)
  {
    while(tb.size()&&ftg[tb.top()]>=ftg[i]) tb.pop();
    juu[i]=tb.size()?tb.top():plo_smk+1;
    tb.push(i);
  }
}
int mv,uu[v_dbm],dm[v_dbm],ok[v_dbm*50],vsx_up[v_dbm*50],r_jvk[v_dbm*50],f[v_dbm];
vector<int>gsb[v_dbm];
void k(int fz,int t,int vth,int &f,int jup)
{
  if(!f) f=++mv,ok[f]=ok[jup];
  ok[f]++;
  if(fz==t) return;
  int nit_b=(fz+t)>>1;
  if(vth<=nit_b) k(fz,nit_b,vth,vsx_up[f],vsx_up[jup]);
  else k(nit_b+1,t,vth,r_jvk[f],r_jvk[jup]);
}
void nqp(int n_opc,int ihx_hp,int &gj_gm,int b)
{
  if(!gj_gm){gj_gm=b;return;}
  if(n_opc==ihx_hp) return;
  int f=(n_opc+ihx_hp)>>1;
  nqp(n_opc,f,vsx_up[gj_gm],vsx_up[b]);nqp(f+1,ihx_hp,r_jvk[gj_gm],r_jvk[b]);
}
int e(int j,int xbm,int fsv,int z,int &zel_y,int r)
{
  if(xbm<fsv||j>z||!zel_y) return 0;
  if(j>=fsv&&xbm<=z) return ok[zel_y]-ok[r];
  int m=(j+xbm)>>1;
  return e(j,m,fsv,z,vsx_up[zel_y],vsx_up[r])+e(m+1,xbm,fsv,z,r_jvk[zel_y],r_jvk[r]);
}
void wkw_omf(int oco)
{
  rep(i,1,N) xnn_n[i]=xnn_n[i-1]+(1<<xnn_n[i-1]==i),xnn_n[i-1]--;
  y(dh_kcl,xj,zhy);
  rep(i,1,n) dh_sl(rrm_e[i]);
  rep(i,1,m) dh_sl(ry[i]);
  nrj(zj_e,rrm_e,dh_kcl);
  nrj(kuo,ry,xj);
  okn(rrm_e,dh_kcl);
  for(int mr_t=1;mr_t<=dh_kcl;mr_t++)
  {
    wt_x[mr_t]=1000000000;
    if(d_ean[mr_t]!=0) wt_x[mr_t]=min(wt_x[mr_t],ytd(zj_e,d_ean[mr_t]+1,mr_t));
    if(juu[mr_t]!=dh_kcl+1) wt_x[mr_t]=min(wt_x[mr_t],ytd(zj_e,mr_t,juu[mr_t]-1));
  }
  okn(ry,xj);
  for(int qfr=1;qfr<=xj;qfr++)
  {
    pk[qfr]=1000000000;
    if(d_ean[qfr]!=0) pk[qfr]=min(pk[qfr],ytd(kuo,d_ean[qfr]+1,qfr));
    if(juu[qfr]!=xj+1) pk[qfr]=min(pk[qfr],ytd(kuo,qfr,juu[qfr]-1));
  }
  rep(i,1,m) uu[i]=ry[i],dm[i]=pk[i];
  sort(uu+1,uu+1+xj);
  sort(dm+1,dm+1+xj);
  rep(i,1,m)
    gsb[lower_bound(uu+1,uu+1+xj,ry[i])-uu].push_back(lower_bound(dm+1,dm+1+xj,pk[i])-dm);
  rep(i,1,m)
  {
    for(int ekx:gsb[i]) k(1,xj,ekx,f[i],f[i-1]);
    nqp(1,xj,f[i],f[i-1]);
  }
  ll bfq_g=0;
  rep(i,1,n)
  {
    int j_gh=upper_bound(uu+1,uu+1+xj,zhy-rrm_e[i])-uu-1;
    int dlb=upper_bound(uu+1,uu+1+xj,zhy-wt_x[i])-uu;
    if(dlb>j_gh) continue;
    int f_o=upper_bound(dm+1,dm+1+xj,zhy-rrm_e[i])-dm;
    bfq_g+=e(1,xj,f_o,xj,f[j_gh],f[dlb-1]);
  }
  wm_hhj(bfq_g);
}
int main() 
{
  // freopen("1.in", "r",stdin);
  // freopen("2.out", "w", stdout);
  srand(time(0));
  int f_pn=1,d_m=0;
  // scanf("%d",&t);
  while(f_pn--)
  {
    wkw_omf(++d_m);
  }
}
/*
befor submit code check:
freopen
size of N
mod
debug output
*/