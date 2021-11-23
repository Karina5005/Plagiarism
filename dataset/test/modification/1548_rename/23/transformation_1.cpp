#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
const int w_hd=3e6+10;
const int y=1e9+7;
const int p=(y+1)/3;
inline int dw(){
	int r=0,vep_y=1;char v_n=getchar();
	while(v_n<'0'||v_n>'9'){if(v_n=='-')vep_y=-1;v_n=getchar();}
	while(v_n>='0'&&v_n<='9'){r=(r<<1)+(r<<3)+v_n-'0';v_n=getchar();}
	return r*vep_y;
}
int lu,icw,v[w_hd][3],oe[w_hd],a[w_hd],fa[w_hd],hcm_guu[w_hd];
int main(){
	lu=dw(),icw=dw();
	oe[1]=a[0]=fa[0]=hcm_guu[0]=1;
	for(int cg=2;cg<=3*lu;cg++)
		oe[cg]=1ll*(y-y/cg)*oe[y%cg]%y;
	for(int kjy_t=1;kjy_t<=3*lu;kjy_t++)
		a[kjy_t]=1ll*a[kjy_t-1]*kjy_t%y;
	for(int b_ipv=1;b_ipv<=3*lu;b_ipv++)
		fa[b_ipv]=1ll*fa[b_ipv-1]*oe[b_ipv]%y;
	for(int xc_cg=1;xc_cg<=3*lu;xc_cg++)
		hcm_guu[xc_cg]=1ll*hcm_guu[xc_cg-1]*oe[xc_cg]%y*(3*lu-xc_cg+1)%y;
	v[0][0]=v[0][1]=v[0][2]=lu;
	for(int i_i=1;i_i<=3*lu;i_i++){
		v[i_i][0]=1ll*((hcm_guu[i_i+1]+y-v[i_i-1][0])%y+(y-v[i_i-1][0]+y-v[i_i-1][1])%y)%y*p%y;
		v[i_i][1]=(v[i_i-1][0]+v[i_i][0])%y;v[i_i][2]=(v[i_i-1][1]+v[i_i][1])%y;
	}
	for(int i_ej=1,ww;i_ej<=icw;i_ej++)
		ww=dw(),printf("%d\n",(hcm_guu[ww]+v[ww][0])%y);
    return 0;
}
