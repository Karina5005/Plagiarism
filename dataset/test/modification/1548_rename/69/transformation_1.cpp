#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define inf 0x3f3f3f3f
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define nep(i, r, l) for (int i = r; i >= l; i--)
void jr_c(int &xzx) { scanf("%d", &xzx); }
void wdy_ce(int &ca_f, int &af_vhu) { scanf("%d%d", &ca_f, &af_vhu); }
void xjo_x(int &su, int &vrc_rn, int &th) { scanf("%d%d%d", &su, &vrc_rn, &th); }
void f(ll &uaj) { scanf("%lld", &uaj); }
void n(ll &zr, ll &k) { scanf("%lld%lld", &zr, &k); }
void ew(ll &h_vxo, ll &odn_c, ll &f_z) { scanf("%lld%lld%lld", &h_vxo, &odn_c, &f_z); }
void dzt(char *woz_cuw) { scanf("%s", woz_cuw); }
void b_mkr(char *qvt_b, char *awq_w) { scanf("%s%s", qvt_b, awq_w); }
void lhh_ebs(char *q, char *xm_jo, char *md) { scanf("%s%s%s", q, xm_jo, md); }
void wf_tw(int ws) { printf("%d\n", ws); }
void qz_c(ll cn_h) { printf("%lld\n", cn_h); }
void mwh_i(int epv_uxp, int kr_yte) { printf("%d %d\n", epv_uxp, kr_yte); }
void mdm_fdm(ll md_ua, ll pg_of) { printf("%lld %lld\n", md_ua, pg_of); }
void z_m(int c_yom, int o_se, int x) { printf("%d %d %d\n", c_yom, o_se, x); }
void jwi_u(ll k_bh, ll q_yrx, ll t_gf) { printf("%lld %lld %lld\n", k_bh, q_yrx, t_gf); }
void hi(ll ab,ll xrm,ll fv_qk){assert(x>=l&&x<=r);}
using namespace std;
const int prn_en=2e5+5,t=1e9+7;
int rx_da,q,o,go_tte[prn_en],h_d[prn_en],o[prn_en],qt[prn_en],e[prn_en][20],mgd_z[prn_en][20];
int dkm_ovu[prn_en];
void qgl(int o_uht[prn_en][20],int wm[prn_en],int q_rvm)
{
  for(int r=1;r<=q_rvm;r++) o_uht[r][0]=wm[r];
  for(int ttv_p=1;1<<ttv_p<=q_rvm;ttv_p++)
    for(int ibt=1;ibt+(1<<ttv_p)-1<=q_rvm;ibt++)
    o_uht[ibt][ttv_p]=max(o_uht[ibt][ttv_p-1],o_uht[ibt+(1<<(ttv_p-1))][ttv_p-1]);
}
int n_okd(int zi_oic[prn_en][20],int dq,int com)
{
  int fw_w=dkm_ovu[com-dq+1];
  return max(zi_oic[dq][fw_w],zi_oic[com-(1<<fw_w)+1][fw_w]);
}
int hm[prn_en],ub_lqk[prn_en];
void eku_k(int k_iom[prn_en],int z_r)
{
  stack<int>qqj_dgg;
  rep(i,1,n)
  {
    while(qqj_dgg.size()&&k_iom[qqj_dgg.top()]>k_iom[i]) qqj_dgg.pop();
    hm[i]=qqj_dgg.size()?qqj_dgg.top():0;
    qqj_dgg.push(i);
  }
  while(!qqj_dgg.empty()) qqj_dgg.pop();
  nep(i,n,1)
  {
    while(qqj_dgg.size()&&k_iom[qqj_dgg.top()]>=k_iom[i]) qqj_dgg.pop();
    ub_lqk[i]=qqj_dgg.size()?qqj_dgg.top():z_r+1;
    qqj_dgg.push(i);
  }
}
int l_nr,y[prn_en],dl[prn_en],pf_l[prn_en*50],pjb[prn_en*50],lp_zqy[prn_en*50],ezg[prn_en];
vector<int>ive_v[prn_en];
void sz(int tal_vn,int a,int zh,int &ekl,int a_lo)
{
  if(!ekl) ekl=++l_nr,pf_l[ekl]=pf_l[a_lo];
  pf_l[ekl]++;
  if(tal_vn==a) return;
  int yyg_hlr=(tal_vn+a)>>1;
  if(zh<=yyg_hlr) sz(tal_vn,yyg_hlr,zh,pjb[ekl],pjb[a_lo]);
  else sz(yyg_hlr+1,a,zh,lp_zqy[ekl],lp_zqy[a_lo]);
}
void n_ash(int px_ilj,int h,int &qna,int gf_kyz)
{
  if(!qna){qna=gf_kyz;return;}
  if(px_ilj==h) return;
  int re_re=(px_ilj+h)>>1;
  n_ash(px_ilj,re_re,pjb[qna],pjb[gf_kyz]);n_ash(re_re+1,h,lp_zqy[qna],lp_zqy[gf_kyz]);
}
int wb(int hm_xz,int de_rt,int csc,int ja,int &up,int b)
{
  if(de_rt<csc||hm_xz>ja||!up) return 0;
  if(hm_xz>=csc&&de_rt<=ja) return pf_l[up]-pf_l[b];
  int yvv_eaw=(hm_xz+de_rt)>>1;
  return wb(hm_xz,yvv_eaw,csc,ja,pjb[up],pjb[b])+wb(yvv_eaw+1,de_rt,csc,ja,lp_zqy[up],lp_zqy[b]);
}
void pu_ijn(int bb_zj)
{
  rep(i,1,N) dkm_ovu[i]=dkm_ovu[i-1]+(1<<dkm_ovu[i-1]==i),dkm_ovu[i-1]--;
  xjo_x(rx_da,q,o);
  rep(i,1,n) jr_c(o[i]);
  rep(i,1,m) jr_c(qt[i]);
  qgl(e,o,rx_da);
  qgl(mgd_z,qt,q);
  eku_k(o,rx_da);
  for(int izd_a=1;izd_a<=rx_da;izd_a++)
  {
    go_tte[izd_a]=1000000000;
    if(hm[izd_a]!=0) go_tte[izd_a]=min(go_tte[izd_a],n_okd(e,hm[izd_a]+1,izd_a));
    if(ub_lqk[izd_a]!=rx_da+1) go_tte[izd_a]=min(go_tte[izd_a],n_okd(e,izd_a,ub_lqk[izd_a]-1));
  }
  eku_k(qt,q);
  for(int ts_cix=1;ts_cix<=q;ts_cix++)
  {
    h_d[ts_cix]=1000000000;
    if(hm[ts_cix]!=0) h_d[ts_cix]=min(h_d[ts_cix],n_okd(mgd_z,hm[ts_cix]+1,ts_cix));
    if(ub_lqk[ts_cix]!=q+1) h_d[ts_cix]=min(h_d[ts_cix],n_okd(mgd_z,ts_cix,ub_lqk[ts_cix]-1));
  }
  rep(i,1,m) y[i]=qt[i],dl[i]=h_d[i];
  sort(y+1,y+1+q);
  sort(dl+1,dl+1+q);
  rep(i,1,m)
  {
    ive_v[lower_bound(y+1,y+1+q,qt[i])-y].push_back(lower_bound(dl+1,dl+1+q,h_d[i])-dl);
    // cout<<"nd: "<<lower_bound(hs1+1,hs1+1+m,b[i])-hs1<<' '<<lower_bound(hs2+1,hs2+1+m,d[i])-hs2<<'\n';
  }
  // rep(i,1,n) cout<<"A: "<<a[i]<<' '<<c[i]<<'\n';
  // rep(i,1,m) cout<<"B: "<<b[i]<<' '<<d[i]<<'\n';
  rep(i,1,m)
  {
    for(int c:ive_v[i]) sz(1,q,c,ezg[i],ezg[i-1]);
    n_ash(1,q,ezg[i],ezg[i-1]);
  }
  ll zx=0;
  rep(i,1,n)
  {
    int m=upper_bound(y+1,y+1+q,o-o[i])-y-1;
    int y_ezg=upper_bound(y+1,y+1+q,o-go_tte[i])-y;
    if(y_ezg>m) continue;
    int gld_vw=upper_bound(dl+1,dl+1+q,o-o[i])-dl;
    // cout<<i<<' '<<l<<' '<<r<<' '<<rr<<' '<<query(1,m,rr,m,rt[r],rt[l-1])<<' '<<rt[r]<<endl;
    zx+=wb(1,q,gld_vw,q,ezg[m],ezg[y_ezg-1]);
  }
  qz_c(zx);
}
int main() 
{
  // freopen("1.in", "r",stdin);
  // freopen("2.out", "w", stdout);
  srand(time(0));
  int k_b=1,d_ed=0;
  // scanf("%d",&t);
  while(k_b--)
  {
    pu_ijn(++d_ed);
  }
}
/*
befor submit code check:
freopen
size of N
mod
debug output
*/