#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
const int tvq=3e6+10;
const int d_mk=1e9+7;
const int e=(d_mk+1)/3;
inline int t_rf(){
	int dor_tkw=0,z_w=1;char wwk_ras=getchar();
	while(wwk_ras<'0'||wwk_ras>'9'){if(wwk_ras=='-')z_w=-1;wwk_ras=getchar();}
	while(wwk_ras>='0'&&wwk_ras<='9'){dor_tkw=(dor_tkw<<1)+(dor_tkw<<3)+wwk_ras-'0';wwk_ras=getchar();}
	return dor_tkw*z_w;
}
int du_v,s,kz[tvq][3],pm[tvq],r[tvq],lr[tvq],gt[tvq];
int main(){
	du_v=t_rf(),s=t_rf();
	pm[1]=r[0]=lr[0]=gt[0]=1;
	for(int bim=2;bim<=3*du_v;bim++)
		pm[bim]=1ll*(d_mk-d_mk/bim)*pm[d_mk%bim]%d_mk;
	for(int kzz_za=1;kzz_za<=3*du_v;kzz_za++)
		r[kzz_za]=1ll*r[kzz_za-1]*kzz_za%d_mk;
	for(int za_c=1;za_c<=3*du_v;za_c++)
		lr[za_c]=1ll*lr[za_c-1]*pm[za_c]%d_mk;
	for(int ew_tgu=1;ew_tgu<=3*du_v;ew_tgu++)
		gt[ew_tgu]=1ll*gt[ew_tgu-1]*pm[ew_tgu]%d_mk*(3*du_v-ew_tgu+1)%d_mk;
	kz[0][0]=kz[0][1]=kz[0][2]=du_v;
	for(int rx=1;rx<=3*du_v;rx++){
		kz[rx][0]=1ll*((gt[rx+1]+d_mk-kz[rx-1][0])%d_mk+(d_mk-kz[rx-1][0]+d_mk-kz[rx-1][1])%d_mk)%d_mk*e%d_mk;
		kz[rx][1]=(kz[rx-1][0]+kz[rx][0])%d_mk;kz[rx][2]=(kz[rx-1][1]+kz[rx][1])%d_mk;
	}
	for(int dvl_y=1,m;dvl_y<=s;dvl_y++)
		m=t_rf(),printf("%d\n",(gt[m]+kz[m][0])%d_mk);
    return 0;
}
//