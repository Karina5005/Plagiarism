#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll m_jgv=1e18;
int xmm,by,z_joi;
int e_xrh[200010],s_j=0,ald[200010],jrg_y[200010],bwl_ev[200010],ylm[200010],z[200010],isf[200010];
bool hcc_zv[200010],pk_jk[200010],yem[800010];
ll w[200010],bi[200010],b[2][800010],dfn_aaa[2][800010],r_icw[800010],gv[800010];
ull q_t[200010],nn_poi[800010],man_heh[800010];
int wo[800010],b_hu[800010];
unordered_map<int,int>xxf_r[800010];
struct edge{
	int to,link,w;
}k_hkk[600010];
void fg(int mb_f,int xcm_uy,int bv_cb){
	k_hkk[++s_j]=(edge){xcm_uy,e_xrh[mb_f],bv_cb},e_xrh[mb_f]=s_j;
	k_hkk[++s_j]=(edge){mb_f,e_xrh[xcm_uy],bv_cb},e_xrh[xcm_uy]=s_j;
}
struct node{
	ll w;
	int id;
	bool operator <(const node &b_res)const{
		return w>b_res.w;
	}
};
priority_queue<node>qc_h; 
void to(){
	for(int m_qeg=1;m_qeg<=xmm;m_qeg++) bi[m_qeg]=m_jgv;
	qc_h.push((node){bi[1]=0,1}); 
	while(qc_h.size()){
		int r=qc_h.top().id;qc_h.pop();
		if(hcc_zv[r]) continue;
		hcc_zv[r]=1;
		for(int zpx_k=e_xrh[r],z;zpx_k;zpx_k=k_hkk[zpx_k].link) if(bi[z=k_hkk[zpx_k].to]>bi[r]+k_hkk[zpx_k].w){
			bi[z]=bi[r]+k_hkk[zpx_k].w;
			qc_h.push((node){bi[z],z});
		}
	}
	iota(ald+1,ald+xmm+1,1);
	sort(ald+1,ald+xmm+1,[&](int w,int i_cs){return bi[w]<bi[i_cs];});
	for(int rg=1;rg<=xmm;rg++) jrg_y[ald[rg]]=rg;
	pk_jk[1]=1;
	for(int k_x=2,pqa_dz;k_x<=xmm;k_x++) for(int czr=e_xrh[pqa_dz=ald[k_x]],vka;czr;czr=k_hkk[czr].link) if(bi[pqa_dz]==bi[vka=k_hkk[czr].to]+k_hkk[czr].w){
		if(!bwl_ev[k_x]) bwl_ev[k_x]=jrg_y[vka];
		else pk_jk[k_x]=1;
	}
	ylm[xmm]=xmm;
	for(int fr=xmm-1;fr>=1;fr--) ylm[fr]=bi[ald[fr+1]]==bi[ald[fr]]?ylm[fr+1]:fr;
}
void bl(int mjk,int y_xh,int d_ao){
	b[0][d_ao]=b[1][d_ao]=dfn_aaa[0][d_ao]=dfn_aaa[1][d_ao]=m_jgv;
	yem[d_ao]=1;
	for(int qx_k=mjk;qx_k<=y_xh;qx_k++) if(!pk_jk[qx_k]) b_hu[d_ao]++,xxf_r[d_ao][bwl_ev[qx_k]]++;
	if(mjk==y_xh) return;
	int g=(mjk+y_xh)>>1;
	bl(mjk,g,d_ao<<1),bl(g+1,y_xh,d_ao<<1|1);
}
void vn_n(int hmp_fhj){
	nn_poi[hmp_fhj]=(ull)b[0][hmp_fhj]*(b_hu[hmp_fhj]-xxf_r[hmp_fhj][wo[hmp_fhj]])+man_heh[hmp_fhj];
}
void sbh_pzy(int fas){
	if(dfn_aaa[0][fas]!=m_jgv||wo[fas]==1) man_heh[fas]=(ull)(wo[fas]==1?b[0][fas]:dfn_aaa[0][fas])*xxf_r[fas][wo[fas]];
	else man_heh[fas]=0;
}
void m_zz(int hm,int m_owk,ll tme_i){
	if(m_owk==wo[hm]){
		b[0][hm]=b[1][hm]=r_icw[hm]=tme_i;
		if(wo[hm]==1) man_heh[hm]=(ull)xxf_r[hm][wo[hm]]*b[0][hm];
		nn_poi[hm]=(ull)b[0][hm]*(b_hu[hm]-xxf_r[hm][wo[hm]])+man_heh[hm];
		return;
	}
	dfn_aaa[0][hm]=dfn_aaa[1][hm]=gv[hm]=b[0][hm];
	b[0][hm]=b[1][hm]=r_icw[hm]=tme_i;
	yem[hm]=1,wo[hm]=m_owk;
	sbh_pzy(hm),vn_n(hm);
}
void vpo(int f_jqe,ll kt_o){
	dfn_aaa[0][f_jqe]=dfn_aaa[1][f_jqe]=gv[f_jqe]=kt_o;
	sbh_pzy(f_jqe),vn_n(f_jqe);
}
void dkx(int zau){
	if(r_icw[zau]) m_zz(zau<<1,wo[zau],r_icw[zau]),m_zz(zau<<1|1,wo[zau],r_icw[zau]),r_icw[zau]=0;
	if(gv[zau]) vpo(zau<<1,gv[zau]),vpo(zau<<1|1,gv[zau]),gv[zau]=0;
}
void c_s(int g){
	b[0][g]=min(b[0][g<<1],b[0][g<<1|1]);
	b[1][g]=max(b[1][g<<1],b[1][g<<1|1]);
	dfn_aaa[0][g]=min(dfn_aaa[0][g<<1],dfn_aaa[0][g<<1|1]);
	dfn_aaa[1][g]=max(dfn_aaa[1][g<<1],dfn_aaa[1][g<<1|1]);
	yem[g]=yem[g<<1]&&yem[g<<1|1]&&(b[0][g<<1]==b[0][g<<1|1])&&(wo[g<<1]==wo[g<<1|1]);
	if(yem[g]) wo[g]=wo[g<<1],man_heh[g]=man_heh[g<<1]+man_heh[g<<1|1];
	else man_heh[g]=0;
	nn_poi[g]=nn_poi[g<<1]+nn_poi[g<<1|1];
}
void vel_wek(int w_np,int k_na,int wmn_i,int vix_wir,int ae_u,int z,ll i){
	if(dfn_aaa[1][ae_u]<=i) return;
	if(w_np<=wmn_i&&vix_wir<=k_na){
		if(yem[ae_u]){
			if(i<b[0][ae_u]||(i==b[0][ae_u]&&z<wo[ae_u])) return m_zz(ae_u,z,i);
			else if(i<dfn_aaa[0][ae_u]) return vpo(ae_u,i);
		}
	}
	int ivo=(wmn_i+vix_wir)>>1;
	dkx(ae_u);
	if(w_np<=ivo) vel_wek(w_np,k_na,wmn_i,ivo,ae_u<<1,z,i);
	if(ivo<k_na) vel_wek(w_np,k_na,ivo+1,vix_wir,ae_u<<1|1,z,i);
	c_s(ae_u);
}
void r(int nw,ll gz_im){
	if(ylm[nw]<xmm) vel_wek(ylm[nw]+1,xmm,1,xmm,1,nw,gz_im); 
}
int main(){
	scanf("%d%d%d",&xmm,&by,&z_joi);
	for(int lak_l=1;lak_l<=xmm;lak_l++) scanf("%lld",&w[lak_l]);
	for(int yb=1,ft_q,ue_u,mgd;yb<=by;yb++) scanf("%d%d%d",&ft_q,&ue_u,&mgd),fg(ft_q,ue_u,mgd);
	to();
	bl(1,xmm,1);
	for(int yik_a=1;yik_a<=z_joi;yik_a++) scanf("%d%d",&z[yik_a],&isf[yik_a]),w[z[yik_a]]+=isf[yik_a];
	for(int d_nc=1;d_nc<=xmm;d_nc++) r(d_nc,w[ald[d_nc]]);
	for(int qi=z_joi;qi>=1;qi--){
		q_t[qi]=nn_poi[1];
		w[z[qi]]-=isf[qi];
		r(jrg_y[z[qi]],w[z[qi]]);
	}
	q_t[0]=nn_poi[1];
	for(int wm_dmz=0;wm_dmz<=z_joi;wm_dmz++) printf("%llu\n",q_t[wm_dmz]);
}
