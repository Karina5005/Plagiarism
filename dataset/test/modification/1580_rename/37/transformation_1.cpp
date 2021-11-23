#include <bits/stdc++.h>
#include<ext/rope>
#define pb push_back
#define debug(x) cerr<<#x<<'='<<x<<'\n'
#define debugg(x,y) cerr<<#x<<'='<<x<<','<<#y<<'='<<y<<'\n' 
#define FOR(a,b,c) for(int a=(b),a##_end=(c);a<=a##_end;++a)
#define ROF(a,b,c) for(int a=(b),a##_end=(c);a>=a##_end;--a)
#define FASTIO() cin.sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
using namespace std;
using namespace __gnu_cxx;
typedef long long ll;
typedef pair<int,int> PII;
const int k_r = 410 ,ge = 1000010,h_rc = 998244353;const double xfi_e = 1e-9;
ll st_puc(ll,ll);
template<typename T>inline bool chkmin(T &wk_nh,const T &wi){return wi<wk_nh?wk_nh=wi,1:0;}
template<typename T>inline bool chkmax(T &owi,const T &zd_ckh){return owi<zd_ckh?owi=zd_ckh,1:0;}
template <typename T> void inline dvl_y(T &tvq) {
    int d_mk = 1; tvq = 0; char e = getchar();
    while (e < '0' || e > '9') { if (e == '-') d_mk = -1; e = getchar(); }
    while (e <= '9' && e >= '0') tvq = tvq * 10 + (e ^ 48), e = getchar();
    tvq *= d_mk;
}
int t_rf,dor_tkw,z_w;
int wwk_ras[k_r],du_v[k_r];
int s[k_r][k_r],kz[k_r];
int pm[k_r][k_r];
int r(int lr,int gt,int bim,int kzz_za,int za_c)
{
	int ew_tgu = s[bim][kzz_za]-s[lr-1][kzz_za]-s[bim][gt-1]+s[lr-1][gt-1];
	if(za_c) ew_tgu = (bim-lr+1)*(kzz_za-gt+1)-ew_tgu;
	return ew_tgu;
}
signed main()
{
	int rx;dvl_y(rx);
	while(rx--)
	{
		dvl_y(t_rf);dvl_y(dor_tkw);
		char m;
		for(int oa_m=1;oa_m<=t_rf;oa_m++) {
			for(int qqo=1;qqo<=dor_tkw;qqo++)
			{
				scanf(" %c",&m);
				if(m=='1') s[oa_m][qqo] = 1;
				else s[oa_m][qqo] = 0;	
			}
		}
		memcpy(pm,s,sizeof pm);
		for(int wt=1;wt<=t_rf;wt++)
			for(int au_wqh=1;au_wqh<=dor_tkw;au_wqh++)
				s[wt][au_wqh]+=s[wt-1][au_wqh]+s[wt][au_wqh-1]-s[wt-1][au_wqh-1];
		int fz_jbw = 2e9;
		for(int w_hd=1;w_hd<=t_rf;w_hd++)
			for(int y=w_hd+4;y<=t_rf;y++)
			{
				for(int p=1;p<=dor_tkw;p++)
				{
					wwk_ras[p] = r(w_hd+1,p,y-1,p,1);//ç«ççè¾¹ç1
					du_v[p] = r(w_hd+1,p,y-1,p,0)+(pm[w_hd][p]!=1) + (pm[y][p]!=1);
					du_v[p]+=du_v[p-1];

				}
				int dw = 2e9;
				for(int r=4;r<=dor_tkw;r++){
					dw = min(dw,wwk_ras[r-3]-du_v[r-3]);
					fz_jbw = min(fz_jbw,wwk_ras[r]+dw+du_v[r-1]);
				}
			}
		cout<<fz_jbw<<'\n';
	}    
    return 0;
}

ll qmi(ll vep_y,ll v_n) {ll lu=1;vep_y%=h_rc;  for(;v_n;v_n>>=1){if(v_n&1)lu=lu*vep_y%h_rc;vep_y=vep_y*vep_y%h_rc;}return lu;}



