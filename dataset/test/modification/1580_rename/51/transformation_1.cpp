#include<bits/stdc++.h>
using namespace std;
const int hgy_beg=4100;
long long p[hgy_beg][hgy_beg];
long long kpk_xz[hgy_beg];
int wm_k,ll,fys_ag=1;
void sh(int i,int zzp_mrx,int ni) {
	p[ni][1]=(ll-1)*kpk_xz[i];
	if (i==zzp_mrx) return;
	int g=i;
	for (int x=i+1;x<=zzp_mrx;x++) {
		if (kpk_xz[x]<kpk_xz[g]) g=x;
	}
	int wlk=0,au=0,gp=g-i,x=zzp_mrx-g;
	if (i<=g-1) sh(i,g-1,wlk=++fys_ag);
	if (g+1<=zzp_mrx) sh(g+1,zzp_mrx,au=++fys_ag);
	for (int fb_t=0;fb_t<=gp;fb_t++) {
		for (int kx_tp=0;kx_tp<=x;kx_tp++) {
			p[ni][fb_t+kx_tp]=max(p[wlk][fb_t]+p[au][kx_tp]-2*fb_t*kx_tp*kpk_xz[g],p[ni][fb_t+kx_tp]);
			p[ni][fb_t+kx_tp+1]=max(p[wlk][fb_t]+p[au][kx_tp]+(ll-1)*kpk_xz[g]-2*(fb_t*kx_tp+fb_t+kx_tp)*kpk_xz[g],p[ni][fb_t+kx_tp+1]);
		}
	}
}
int main() {
	cin>>wm_k>>ll;
	for (int giw_no=1;giw_no<=wm_k;giw_no++) cin>>kpk_xz[giw_no];
	sh(1,wm_k,1);
	cout<<p[1][ll]<<endl;
}