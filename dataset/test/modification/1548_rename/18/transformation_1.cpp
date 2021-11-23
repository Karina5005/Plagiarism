#include<bits/stdc++.h>
using namespace std;
const int hdf_z=200010;
int u_s[hdf_z],rfw,dwq_ap,fd,vhc_kw;
int main(){
	scanf("%d%d",&rfw,&dwq_ap);
	for(int i_kh=1;i_kh<=dwq_ap;i_kh++){
		int y,ty;
		scanf("%d%d",&y,&ty);
		u_s[min(y,ty)]++;
	}
	for(int m=1;m<=rfw;m++){
		if(u_s[m]==0)vhc_kw++;
	}
	scanf("%d",&fd);
	for(int n_gtr=1;n_gtr<=fd;n_gtr++){
		int tlc_dc,q,wx_xgr;
		scanf("%d",&tlc_dc);
		if(tlc_dc==1){
			scanf("%d%d",&q,&wx_xgr);
			u_s[min(q,wx_xgr)]++;
			if(u_s[min(q,wx_xgr)]==1)vhc_kw--;
		}
		else if(tlc_dc==2){
			scanf("%d%d",&q,&wx_xgr);
			u_s[min(q,wx_xgr)]--;
			if(u_s[min(q,wx_xgr)]==0)vhc_kw++;
		}
		else{
			printf("%d\n",vhc_kw);
		}
	}
}