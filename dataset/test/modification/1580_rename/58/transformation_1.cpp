#include<bits/stdc++.h>
using namespace std;
inline int dl_uq(){
	int rt=0;
	bool iw_c=0;
	char ybh_m=getchar();
	while(!isdigit(ybh_m)&&ybh_m!='-') ybh_m=getchar();
	if(ybh_m=='-'){
		iw_c=1;
		ybh_m=getchar();
	}
	while(isdigit(ybh_m)){
		rt=rt*10+ybh_m-'0';
		ybh_m=getchar();
	}
	return iw_c?-rt:rt;
}
const int hte_vw=5e4+5;
const int w_mn=998244353,rb=3,s=332748118;
int kg(int oxj_bq,int k_mm){
	int kjj=1;
	while(k_mm){
		if(k_mm%2==1) kjj=1ll*kjj*oxj_bq%w_mn;
		oxj_bq=1ll*oxj_bq*oxj_bq%w_mn;
		k_mm/=2;
	}
	return kjj;
}
typedef vector<int> poly;
int r_x[hte_vw*6];
int ihu_p[hte_vw*6],nvy[hte_vw*6],kid;
void p(int vrn_yv){
	for(int m=1;m<vrn_yv;m++) r_x[m]=r_x[m>>1]>>1|((m&1)?vrn_yv>>1:0);
	for(int zvs=1;zvs<vrn_yv;zvs*=2){
		ihu_p[zvs]=1;
		int li_o=kg(rb,(w_mn-1)/(zvs*2));
		for(int x_vob=1;x_vob<zvs;x_vob++) ihu_p[zvs+x_vob]=1ll*ihu_p[zvs+x_vob-1]*li_o%w_mn;
	}
	for(int u_wk=1;u_wk<vrn_yv;u_wk*=2){
		nvy[u_wk]=1;
		int xcy=kg(s,(w_mn-1)/(u_wk*2));
		for(int a_vw=1;a_vw<u_wk;a_vw++) nvy[u_wk+a_vw]=1ll*nvy[u_wk+a_vw-1]*xcy%w_mn;
	}
	kid=kg(vrn_yv,w_mn-2);
}
poly pj(poly xeg,bool zs){
	int r=xeg.size();
	for(int kwi=0;kwi<r;kwi++) if(kwi<r_x[kwi]) swap(xeg[kwi],xeg[r_x[kwi]]);
	for(int ks=1;ks<r;ks*=2) for(int w=0;w<r;w+=ks*2)
		for(int m_xr=w;m_xr<w+ks;m_xr++){
			int tv=1ll*xeg[m_xr+ks]*(zs?ihu_p[ks+m_xr-w]:nvy[ks+m_xr-w])%w_mn;
			xeg[m_xr+ks]=(xeg[m_xr]-tv+w_mn)%w_mn;
			xeg[m_xr]=(xeg[m_xr]+tv)%w_mn;
		}
	if(!zs) for(int k=0;k<r;k++) xeg[k]=1ll*xeg[k]*kid%w_mn;
	return xeg;
}
poly hcz(poly n_vgd){
	int w=n_vgd.size();
	if(w==1) return {kg(n_vgd[0],w_mn-2)};
	poly sv=hcz(poly(n_vgd.begin(),n_vgd.begin()+(w+1)/2));
	int qsz=1;
	while(qsz<w*2-1) qsz*=2;
	n_vgd.resize(qsz);
	sv.resize(qsz);
	p(qsz);
	n_vgd=pj(n_vgd,1);
	sv=pj(sv,1);
	for(int tkr=0;tkr<qsz;tkr++) n_vgd[tkr]=(2-1ll*n_vgd[tkr]*sv[tkr]%w_mn+w_mn)%w_mn*sv[tkr]%w_mn;
	n_vgd=pj(n_vgd,0);
	n_vgd.resize(w);
	return n_vgd;
}
int ot,b;
int d_wym=0;
poly l(int x){
	if(!x){
		poly qey(ot+1);
		qey[0]=1;
		return qey;
	}
	poly dj_xnw=l(x/2),n(ot+1);
	for(int cp=0;cp<=ot;cp+=2){
		n[cp]=dj_xnw[cp];
		dj_xnw[cp]=0;
	}
	dj_xnw[1]=(x+1)/2;
	poly k_lf(ot+1);
	k_lf[0]=1;
	for(int wwl_l=1;wwl_l<=ot;wwl_l++) k_lf[wwl_l]=(w_mn-dj_xnw[wwl_l])%w_mn;
	k_lf=hcz(k_lf);
	d_wym=ot%2==0?(1ll*d_wym*2%w_mn+k_lf[ot])%w_mn:k_lf[ot];
	for(int vm=1;vm<=ot;vm+=2) d_wym=(d_wym+1ll*dj_xnw[vm]*k_lf[ot-vm]%w_mn*(vm-1)%w_mn)%w_mn;
	int py=1;
	while(py<ot*3+1) py*=2;
	n.resize(py);
	k_lf.resize(py);
	p(py);
	n=pj(n,1);
	k_lf=pj(k_lf,1);
	for(int fk_bg=0;fk_bg<py;fk_bg++) n[fk_bg]=1ll*n[fk_bg]*n[fk_bg]%w_mn*k_lf[fk_bg]%w_mn;
	n=pj(n,0);
	for(int nez=0;nez<=ot;nez++) dj_xnw[nez]=(dj_xnw[nez]+n[nez])%w_mn;
	return dj_xnw;
}
int main(){
	#ifdef LOCAL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	ot=dl_uq();
	b=dl_uq();
	l(b);
	printf("%d\n",d_wym);
	#ifdef LOCAL
	fprintf(stderr,"%d\n",(int)clock());
	#endif
	return 0;
}
