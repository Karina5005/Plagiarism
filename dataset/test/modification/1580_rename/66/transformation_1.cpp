#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll id=1e18;
int k,y_ub,d;
int bpb[200010],q=0,g_xar[200010],kj_l[200010],dt[200010],rgt[200010],x_d[200010],ti[200010];
bool b_oqa[200010],n_uso[200010],uk[800010];
ll wr[200010],jg[200010],zwn_r[2][800010],ps_scw[2][800010],zw_z[800010],oc_hu[800010];
ull vt[200010],liw[800010],naq[800010];
int l_e[800010],v_nrb[800010];
unordered_map<int,int>ibl_hn[800010];
struct edge{
	int to,link,w;
}de_ehq[600010];
void xxl(int ws,int eqj,int l){
	de_ehq[++q]=(edge){eqj,bpb[ws],l},bpb[ws]=q;
	de_ehq[++q]=(edge){ws,bpb[eqj],l},bpb[eqj]=q;
}
struct node{
	ll w;
	int id;
	bool operator <(const node &rc_yt)const{
		return w>rc_yt.w;
	}
};
priority_queue<node>pb; 
void cz_c(){
	for(int e=1;e<=k;e++) jg[e]=id;
	pb.push((node){jg[1]=0,1}); 
	while(pb.size()){
		int wo_jvr=pb.top().id;pb.pop();
		if(b_oqa[wo_jvr]) continue;
		b_oqa[wo_jvr]=1;
		for(int px_vm=bpb[wo_jvr],bs;px_vm;px_vm=de_ehq[px_vm].link) if(jg[bs=de_ehq[px_vm].to]>jg[wo_jvr]+de_ehq[px_vm].w){
			jg[bs]=jg[wo_jvr]+de_ehq[px_vm].w;
			pb.push((node){jg[bs],bs});
		}
	}
	iota(g_xar+1,g_xar+k+1,1);
	sort(g_xar+1,g_xar+k+1,[&](int m_wr,int y_e){return jg[m_wr]<jg[y_e];});
	for(int kvb=1;kvb<=k;kvb++) kj_l[g_xar[kvb]]=kvb;
	n_uso[1]=1;
	for(int y_ceg=2,mw_o;y_ceg<=k;y_ceg++) for(int c=bpb[mw_o=g_xar[y_ceg]],btz;c;c=de_ehq[c].link) if(jg[mw_o]==jg[btz=de_ehq[c].to]+de_ehq[c].w){
		if(!dt[y_ceg]) dt[y_ceg]=kj_l[btz];
		else n_uso[y_ceg]=1;
	}
	rgt[k]=k;
	for(int o_psl=k-1;o_psl>=1;o_psl--) rgt[o_psl]=jg[g_xar[o_psl+1]]==jg[g_xar[o_psl]]?rgt[o_psl+1]:o_psl;
}
void oaw(int dmz,int e,int xb_zdy){
	zwn_r[0][xb_zdy]=zwn_r[1][xb_zdy]=ps_scw[0][xb_zdy]=ps_scw[1][xb_zdy]=id;
	uk[xb_zdy]=1;
	for(int nh_tke=dmz;nh_tke<=e;nh_tke++) if(!n_uso[nh_tke]) v_nrb[xb_zdy]++,ibl_hn[xb_zdy][dt[nh_tke]]++;
	if(dmz==e) return;
	int fz_ipe=(dmz+e)>>1;
	oaw(dmz,fz_ipe,xb_zdy<<1),oaw(fz_ipe+1,e,xb_zdy<<1|1);
}
void egj(int ocv_lrj){
	liw[ocv_lrj]=(ull)zwn_r[0][ocv_lrj]*(v_nrb[ocv_lrj]-ibl_hn[ocv_lrj][l_e[ocv_lrj]])+naq[ocv_lrj];
}
void mpo_scj(int rh){
	if(ps_scw[0][rh]!=id||l_e[rh]==1) naq[rh]=(ull)(l_e[rh]==1?zwn_r[0][rh]:ps_scw[0][rh])*ibl_hn[rh][l_e[rh]];
	else naq[rh]=0;
}
void x_vja(int so_py,int vym_g,ll x){
	if(vym_g==l_e[so_py]){
		zwn_r[0][so_py]=zwn_r[1][so_py]=zw_z[so_py]=x;
		if(l_e[so_py]==1) naq[so_py]=(ull)ibl_hn[so_py][l_e[so_py]]*zwn_r[0][so_py];
		return egj(so_py);
	}
	ps_scw[0][so_py]=ps_scw[1][so_py]=oc_hu[so_py]=zwn_r[0][so_py];
	zwn_r[0][so_py]=zwn_r[1][so_py]=zw_z[so_py]=x;
	uk[so_py]=1,l_e[so_py]=vym_g;
	mpo_scj(so_py),egj(so_py);
}
void a(int hq_q,ll k_qn){
	ps_scw[0][hq_q]=ps_scw[1][hq_q]=oc_hu[hq_q]=k_qn;
	mpo_scj(hq_q),egj(hq_q);
}
void a_sdo(int tc){
	if(zw_z[tc]) x_vja(tc<<1,l_e[tc],zw_z[tc]),x_vja(tc<<1|1,l_e[tc],zw_z[tc]),zw_z[tc]=0;
	if(oc_hu[tc]) a(tc<<1,oc_hu[tc]),a(tc<<1|1,oc_hu[tc]),oc_hu[tc]=0;
}
void aho_idn(int ocz){
	zwn_r[0][ocz]=min(zwn_r[0][ocz<<1],zwn_r[0][ocz<<1|1]);
	zwn_r[1][ocz]=max(zwn_r[1][ocz<<1],zwn_r[1][ocz<<1|1]);
	ps_scw[0][ocz]=min(ps_scw[0][ocz<<1],ps_scw[0][ocz<<1|1]);
	ps_scw[1][ocz]=max(ps_scw[1][ocz<<1],ps_scw[1][ocz<<1|1]);
	uk[ocz]=uk[ocz<<1]&&uk[ocz<<1|1]&&(zwn_r[0][ocz<<1]==zwn_r[0][ocz<<1|1])&&(l_e[ocz<<1]==l_e[ocz<<1|1]);
	if(uk[ocz]) l_e[ocz]=l_e[ocz<<1],naq[ocz]=naq[ocz<<1]+naq[ocz<<1|1];
	else naq[ocz]=0;
	liw[ocz]=liw[ocz<<1]+liw[ocz<<1|1];
}
void hm(int kwq,int r_q,int mo,int sfv,int hjn_f,int ysx,ll bc_p){
	if(ps_scw[1][hjn_f]<=bc_p) return;
	if(kwq<=mo&&sfv<=r_q){
		if(uk[hjn_f]){
			if(bc_p<zwn_r[0][hjn_f]||(bc_p==zwn_r[0][hjn_f]&&ysx<l_e[hjn_f])) return x_vja(hjn_f,ysx,bc_p);
			else if(bc_p<ps_scw[0][hjn_f]) return a(hjn_f,bc_p);
		}
	}
	int q=(mo+sfv)>>1;
	a_sdo(hjn_f);
	if(kwq<=q) hm(kwq,r_q,mo,q,hjn_f<<1,ysx,bc_p);
	if(q<r_q) hm(kwq,r_q,q+1,sfv,hjn_f<<1|1,ysx,bc_p);
	aho_idn(hjn_f);
}
void g_b(int xwn,ll wp_r){
	if(rgt[xwn]<k) hm(rgt[xwn]+1,k,1,k,1,xwn,wp_r); 
}
int main(){
	scanf("%d%d%d",&k,&y_ub,&d);
	for(int qeh=1;qeh<=k;qeh++) scanf("%lld",&wr[qeh]);
	for(int vx=1,t_i,kqg,m;vx<=y_ub;vx++) scanf("%d%d%d",&t_i,&kqg,&m),xxl(t_i,kqg,m);
	cz_c();
	oaw(1,k,1);
	for(int iv=1;iv<=d;iv++) scanf("%d%d",&x_d[iv],&ti[iv]),wr[x_d[iv]]+=ti[iv];
	for(int srj=1;srj<=k;srj++) g_b(srj,wr[g_xar[srj]]);
	for(int x_ib=d;x_ib>=1;x_ib--){
		vt[x_ib]=liw[1];
		wr[x_d[x_ib]]-=ti[x_ib];
		g_b(kj_l[x_d[x_ib]],wr[x_d[x_ib]]);
	}
	vt[0]=liw[1];
	for(int hwq=0;hwq<=d;hwq++) printf("%llu\n",vt[hwq]);
}
