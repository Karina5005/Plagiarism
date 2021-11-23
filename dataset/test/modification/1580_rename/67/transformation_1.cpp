#include <bits/stdc++.h>
using namespace std;
const int cy=4005;
int qty_dp,fu,wk_dea[cy],mot_u[cy],i[cy],w_wjr[cy],jz_u[cy],mwp_kq[cy],p,xa[cy],bdc_q[cy];
#define ll long long
ll f[cy][cy];
inline void bya_l(ll &a,ll b){if(a<b)a=b;}
void c_rs(int k_sx){
	bdc_q[k_sx]=1;
	if(mot_u[k_sx]){
		c_rs(mot_u[k_sx]);
		int fe_t=mot_u[k_sx];
		for(int ps_w=min(fu,bdc_q[k_sx]);~ps_w;--ps_w)for(int zfj=min(fu,bdc_q[fe_t]);~zfj;--zfj)
			bya_l(f[k_sx][ps_w+zfj],f[k_sx][ps_w]+f[fe_t][zfj]+1ll*zfj*(fu-zfj)*w_wjr[k_sx]);
		bdc_q[k_sx]+=bdc_q[fe_t];
	}
	if(i[k_sx]){
		c_rs(i[k_sx]);
		int qxe_h=i[k_sx];
		for(int z_pkg=min(fu,bdc_q[k_sx]);~z_pkg;--z_pkg)for(int bre=min(fu,bdc_q[qxe_h]);~bre;--bre)
			bya_l(f[k_sx][z_pkg+bre],f[k_sx][z_pkg]+f[qxe_h][bre]+1ll*bre*(fu-bre)*jz_u[k_sx]);
		bdc_q[k_sx]+=bdc_q[qxe_h];
	}
}
int main(){
	scanf("%d %d",&qty_dp,&fu);
	for(int zqw_e=1;zqw_e<=qty_dp;++zqw_e){
		scanf("%d",&wk_dea[zqw_e]);
		int z=p;
		while(p&&wk_dea[mwp_kq[p]]>wk_dea[zqw_e])--p;
		if(mwp_kq[p]){
			i[mwp_kq[p]]=zqw_e;
			jz_u[mwp_kq[p]]=wk_dea[zqw_e]-wk_dea[mwp_kq[p]];
		}
		if(z>p){
			mot_u[zqw_e]=mwp_kq[p+1];
			w_wjr[zqw_e]=wk_dea[mwp_kq[p+1]]-wk_dea[zqw_e];
		}
		mwp_kq[++p]=zqw_e;
	}
	c_rs(mwp_kq[1]);
	printf("%lld\n",f[mwp_kq[1]][fu]);
	return 0;
}//