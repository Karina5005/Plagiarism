#include<bits/stdc++.h>
using namespace std;
const int pp_so=3e6+5,y_ijv=1e9+7;
int q_h[pp_so],ar[pp_so],jg_p[pp_so],f[pp_so];
void hg(int &glp,int vzk){
	glp+=vzk;if(glp>=y_ijv) glp-=y_ijv;
}
int rg_kmn(int ah_jj,int rf){
	int mg=1;
	while(rf){
		if(rf&1) mg=1ll*mg*ah_jj%y_ijv;
		ah_jj=1ll*ah_jj*ah_jj%y_ijv; rf>>=1;
	}
	return mg;
}
int jb(int h_nn,int p_z){
	if(h_nn<p_z||p_z<0||h_nn<0) return 0;
	return 1ll*q_h[h_nn]*ar[p_z]%y_ijv*ar[h_nn-p_z]%y_ijv;
}
void unn(int hi_mow){
	int s=3*(hi_mow+1);
	q_h[0]=1;
	for(int bb=1;bb<=s;++bb)
		q_h[bb]=1ll*q_h[bb-1]*bb%y_ijv;
	ar[s]=rg_kmn(q_h[s],y_ijv-2);
	for(int gp_bfv=s-1;gp_bfv>=0;--gp_bfv)
		ar[gp_bfv]=1ll*ar[gp_bfv+1]*(gp_bfv+1)%y_ijv;
	for(int dg_h=0;dg_h<=s;++dg_h)
		jg_p[dg_h]=jb(s,dg_h);
	hg(jg_p[0],y_ijv-1),hg(jg_p[1],y_ijv-3),hg(jg_p[2],y_ijv-3),hg(jg_p[3],y_ijv-1);
	for(int qr_sl=s;qr_sl>=3;--qr_sl){
		f[qr_sl-3]=jg_p[qr_sl],jg_p[qr_sl]-=f[qr_sl-3];
		hg(jg_p[qr_sl-1],y_ijv-3ll*f[qr_sl-3]%y_ijv);
		hg(jg_p[qr_sl-2],y_ijv-3ll*f[qr_sl-3]%y_ijv);
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int w,rob_fs;
	cin>>w>>rob_fs;
	unn(w);
	while(rob_fs--){
		int d_zs;cin>>d_zs;
		cout<<f[d_zs]<<"\n";
	}
}