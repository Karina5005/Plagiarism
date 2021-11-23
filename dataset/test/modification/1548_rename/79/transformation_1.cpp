#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define inf 0x3f3f3f3f
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define nep(i, r, l) for (int i = r; i >= l; i--)
void u_khs(int &m) { scanf("%d", &m); }
void b_ji(int &d, int &vg) { scanf("%d%d", &d, &vg); }
void mw_p(int &p, int &hic, int &rw_nr) { scanf("%d%d%d", &p, &hic, &rw_nr); }
void mq_dv(ll &exl) { scanf("%lld", &exl); }
void apb_bj(ll &s_sm, ll &rt) { scanf("%lld%lld", &s_sm, &rt); }
void p_wmr(ll &eq_w, ll &sp, ll &rmc_y) { scanf("%lld%lld%lld", &eq_w, &sp, &rmc_y); }
void sa_yb(char *et_bp) { scanf("%s", et_bp); }
void jg_etw(char *v, char *hcw) { scanf("%s%s", v, hcw); }
void yqu_h(char *lu, char *ymk_tij, char *jj) { scanf("%s%s%s", lu, ymk_tij, jj); }
void isg_nyi(int cgb_jsn) { printf("%d\n", cgb_jsn); }
void iw(ll x) { printf("%lld\n", x); }
void ob(int re, int g) { printf("%d %d\n", re, g); }
void ln(ll f, ll wwh) { printf("%lld %lld\n", f, wwh); }
void wm_r(int v, int dxr, int sh_dqp) { printf("%d %d %d\n", v, dxr, sh_dqp); }
void ckc(ll u_fen, ll o_rr, ll od) { printf("%lld %lld %lld\n", u_fen, o_rr, od); }
void k_jw(ll bal_al,ll uwd,ll gs_zzh){assert(x>=l&&x<=r);}
using namespace std;
const int zi=6e3+5,p_vxa=1e9+7;
int gfb_hzw,bf[zi],s_r[zi],di[zi][zi];
int i[zi][4][4][4];
void q(int m)
{
  u_khs(gfb_hzw);
  rep(i,1,n) b_ji(bf[i],s_r[i]);
  rep(i,1,n)
    rep(j,i+1,n) di[i][j]=di[j][i]=__gcd(abs(bf[i]-bf[j]),abs(s_r[i]-s_r[j]))%4;
  rep(i,1,n)
    rep(j,1,n)
    if(i!=j)
    i[i][bf[j]%4][s_r[j]%4][di[i][j]]++;
  ll j_hel[2];
  j_hel[0]=j_hel[1]=0;
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
            int q=2;
            if(x1==x2&&y1==y2) q=0;
            if((b1+b2+q)%4==(((x1-bf[i])*(y2-s_r[i])-(x2-bf[i])*(y1-s_r[i]))%4+4)%4)
            {
              if(!(x1==x2&&y1==y2&&b1==b2)) j_hel[b1%2]+=i[i][x1][y1][b1]*i[i][x2][y2][b2];
              else j_hel[b1%2]+=i[i][x1][y1][b1]*(i[i][x1][y1][b1]-1);
            }
          }
    }
    iw(j_hel[0]/6+j_hel[1]/2);
}
int main() 
{
  // freopen("1.in", "r",stdin);
  // freopen("2.out", "w", stdout);
  srand(time(0));
  int hgy_beg=1,p=0;
  // scanf("%d",&t);
  while(hgy_beg--)
  {
    q(++p);
  }
}
/*
befor submit code check:
freopen
size of N
mod
debug output
*/