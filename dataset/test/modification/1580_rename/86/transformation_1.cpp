#include <bits/stdc++.h>
using namespace std;
const int ckk=105,s=1e9;
int n_e,ksn,b,g;
int re_v[ckk][ckk],kzi[ckk][ckk][ckk];
inline int nv_j(int qo,int j_ndk){return (qo+j_ndk>=g)?qo+j_ndk-g:qo+j_ndk;}
int main(){
	scanf("%d %d %d %d",&n_e,&ksn,&b,&g);
	re_v[0][0]=1;
	for(int bw_g=1;bw_g<=n_e;++bw_g){
		re_v[bw_g][0]=1;
		for(int av_flw=1;av_flw<=bw_g;++av_flw)re_v[bw_g][av_flw]=nv_j(re_v[bw_g-1][av_flw-1],re_v[bw_g-1][av_flw]);
	}
	for(int w=1;w<=n_e;++w)
		kzi[1][w][w==ksn]=1;
	for(int iy_rx=1;iy_rx<=n_e+1;++iy_rx)
		kzi[0][iy_rx][0]=1;
	for(int wa=2;wa<=n_e;++wa)for(int qu=1;qu<=n_e;++qu)
		for(int zgt=0;zgt<=b&&zgt<=wa;++zgt)
			for(int ffp_rf=0;ffp_rf<wa;++ffp_rf)for(int zxf=0;zgt-zxf-(qu==ksn)>=0&&zxf<=ffp_rf;++zxf)
				if(kzi[ffp_rf][qu+1][zxf]&&kzi[wa-ffp_rf-1][qu+1][zgt-zxf-(qu==ksn)])kzi[wa][qu][zgt]=(kzi[wa][qu][zgt]+1ll*re_v[wa-1][ffp_rf]*kzi[ffp_rf][qu+1][zxf]%g*kzi[wa-ffp_rf-1][qu+1][zgt-zxf-(qu==ksn)])%g;
	printf("%d\n",kzi[n_e][1][b]);
	return 0;
}