//{{{ template
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <map>
#include <cassert>
#include <deque>
#include <cmath>
using namespace std;
inline int zqu(){
	char k_rza=getchar();int za=0,u=1;
	while(!isdigit(k_rza)){
		if(k_rza == '-') u = -1;
		k_rza = getchar();
	}
	while(isdigit(k_rza)){
		za = za * 10 + k_rza - '0';
		k_rza = getchar();
	}
	return za * u;
}
inline void bxm_an(int &kqu){kqu=zqu();}
inline void tz_nem(int &xdm_b,int &b){bxm_an(xdm_b),bxm_an(b);}
inline void o_b(int &dx,int &qz_xm,int &v_kl){bxm_an(dx),bxm_an(qz_xm),bxm_an(v_kl);}
inline void jgx(int &o_qfg,int &udp_wfs,int &ijs_xyt,int &wq_k){o_b(o_qfg,udp_wfs,ijs_xyt),bxm_an(wq_k);}
inline void n_s(int &dpo,int ra_m){dpo=max(dpo,ra_m);}
inline void fc_l(int &x_lkg,int zqc_k){x_lkg=min(x_lkg,zqc_k);}
#define Mem(arr,v) memset(arr,v,sizeof arr)
#define Copy(arr,goal) memcpy(arr,goal,sizeof goal)
#define For(i,a,b) for(int i=(int)(a);i<=(int)(b);++i) // }}}
// const int N = 1002000;
using namespace std;
const int k=105;
int cg[k][k][k],xqd_rop[k][k][k],see[k][k],l,h_pi;
int ss_d(int r_evy,int gxk,int gw_cv){
	if(r_evy+1<gw_cv*2 || r_evy<gw_cv) return 0;
	if(gxk>l && gw_cv>0) return 0;
	if(gxk==0 && gw_cv>1) return 0;
	if(r_evy==0) return (gw_cv==0);
	if(xqd_rop[r_evy][gxk][gw_cv]) return cg[r_evy][gxk][gw_cv];
	xqd_rop[r_evy][gxk][gw_cv]=1;
	int i_bnw=gw_cv;
	if(gxk==1) --i_bnw;
	for(int qw=0;qw<r_evy;++qw)
		for(int lgi_vqk=0;lgi_vqk<=i_bnw;++lgi_vqk)
			cg[r_evy][gxk][gw_cv]=(cg[r_evy][gxk][gw_cv]+1ll*see[r_evy-1][qw]*ss_d(qw,gxk-1,lgi_vqk)%h_pi*ss_d(r_evy-1-qw,gxk-1,i_bnw-lgi_vqk))%h_pi;
	return cg[r_evy][gxk][gw_cv];
}
signed main(){
#ifdef NICEGUODONG
	freopen("data.in","r",stdin);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int tj_vaq,j_anl;
	cin>>tj_vaq>>l>>j_anl>>h_pi;
	see[0][0]=1;
	for(int nfh=1;nfh<=tj_vaq;++nfh){
		see[nfh][0]=see[nfh][nfh]=1;
		for(int x_iuy=1;x_iuy<nfh;++x_iuy)
			see[nfh][x_iuy]=(see[nfh-1][x_iuy-1]+see[nfh-1][x_iuy])%h_pi;
	}
	cout<<ss_d(tj_vaq,l,j_anl)<<"\n";
}