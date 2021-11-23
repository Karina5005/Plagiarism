#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int kno_xf,h,trk,jox,hu_d[110][110][110],io_i[110][110],k_s[110];
ll pvq_dlp(int i_r,int av,int cxp_e){
	if (cxp_e<0||cxp_e>i_r) return (av==0)*k_s[i_r];
	if (av<0||av>i_r) return 0;
	if (i_r==1) return (cxp_e==1&&av==1||cxp_e!=1&&av==0);
	if (~hu_d[i_r][av][cxp_e]) return hu_d[i_r][av][cxp_e];
	ll eq_d=pvq_dlp(i_r-1,av-(cxp_e==1),cxp_e-1)*2%jox;
	for (int yb=2;yb<i_r;yb++)
		for (int qf_ux=0;qf_ux<=av-(cxp_e==1);qf_ux++){
			ll yjm=pvq_dlp(yb-1,qf_ux,cxp_e-1),fve=pvq_dlp(i_r-yb,av-(cxp_e==1)-qf_ux,cxp_e-1);
			if (!yjm||!fve) continue;
			eq_d=(eq_d+yjm*fve%jox*io_i[i_r-1][yb-1])%jox;
		}
	hu_d[i_r][av][cxp_e]=eq_d; return eq_d;
}
int main(){
	memset(hu_d,-1,sizeof(hu_d));
	cin>>kno_xf>>h>>trk>>jox;
	for (int cd_v=0;cd_v<=kno_xf;cd_v++){
		io_i[cd_v][0]=1; if (cd_v) k_s[cd_v]=1ll*k_s[cd_v-1]*cd_v%jox; else k_s[cd_v]=1;
		for (int exe_mj=1;exe_mj<=cd_v;exe_mj++) io_i[cd_v][exe_mj]=(io_i[cd_v-1][exe_mj-1]+io_i[cd_v-1][exe_mj])%jox;
	}
	cout<<pvq_dlp(kno_xf,trk,h)<<endl;
	return 0;
}