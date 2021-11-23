#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
const int acp_o=2e5+10;
const int ys=1e9+7;
inline int a_r(){
	int sxw_rf=0,jnt=1;char imp_sj=getchar();
	while(imp_sj<'0'||imp_sj>'9'){if(imp_sj=='-')jnt=-1;imp_sj=getchar();}
	while(imp_sj>='0'&&imp_sj<='9'){sxw_rf=(sxw_rf<<1)+(sxw_rf<<3)+imp_sj-'0';imp_sj=getchar();}
	return sxw_rf*jnt;
}
int n_xc,mrk,s_a,tu,ciy_u[acp_o];
set<int>xy[acp_o];
set<int>::iterator or_e;
int main(){
	n_xc=a_r(),mrk=a_r();
	int gyc_nd,zr,kmj_dp;
	for(int fm_la=1;fm_la<=mrk;fm_la++){
		zr=a_r(),kmj_dp=a_r();
		xy[zr].insert(kmj_dp);
		xy[kmj_dp].insert(zr); 
	}
	for(int y_d=1;y_d<=n_xc;y_d++){
		if(xy[y_d].empty())continue;
		or_e=xy[y_d].end();or_e--;ciy_u[y_d]=(y_d<*or_e);
	}
	for(int xv_zd=1;xv_zd<=n_xc;xv_zd++)
		tu+=1-ciy_u[xv_zd];
	s_a=a_r();
	for(int d_m=1;d_m<=s_a;d_m++){
		gyc_nd=a_r();
		if(gyc_nd==3)printf("%d\n",tu);
		else{
			zr=a_r(),kmj_dp=a_r();
			tu-=1-ciy_u[zr]+1-ciy_u[kmj_dp];
			if(gyc_nd==1){
				xy[zr].insert(kmj_dp);
				xy[kmj_dp].insert(zr);
				or_e=xy[zr].end();or_e--;
				ciy_u[zr]=(zr<*or_e);
				or_e=xy[kmj_dp].end();or_e--;
				ciy_u[kmj_dp]=(kmj_dp<*or_e);
			}else{
				xy[zr].erase(kmj_dp);
				xy[kmj_dp].erase(zr);
				if(!xy[zr].empty()){
					or_e=xy[zr].end();or_e--;
					ciy_u[zr]=(zr<*or_e);
				}else ciy_u[zr]=0;
				if(!xy[kmj_dp].empty()){
					or_e=xy[kmj_dp].end();or_e--;
					ciy_u[kmj_dp]=(kmj_dp<*or_e);
				}else ciy_u[kmj_dp]=0;
			}
			tu+=1-ciy_u[zr]+1-ciy_u[kmj_dp];
		}
	}
    return 0;
}