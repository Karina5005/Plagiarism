#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll el=1e18;
int dtl_yje,ol_x,g_h;
int bqo[200010],m=0,usq[200010],w[200010],ay_zum[200010],rx[200010],qk_jr[200010],m_txt[200010];
bool jwu_kbn[200010],oui[200010],k_eq[800010];
ll huu[200010],hgi[200010],rtb_he[2][800010],ahk_ncj[2][800010],gh_pbl[800010],p[800010];
ull mpb[200010],ofo_p[800010],qb_qn[800010];
int q_q[800010],ek[800010];
unordered_map<int,int>xj[800010];
struct edge{
	int to,link,w;
}djk[600010];
void z(int zb_cf,int ujq,int nsf){
	djk[++m]=(edge){ujq,bqo[zb_cf],nsf},bqo[zb_cf]=m;
	djk[++m]=(edge){zb_cf,bqo[ujq],nsf},bqo[ujq]=m;
}
struct node{
	ll w;
	int id;
	bool operator <(const node &dg_gy)const{
		return w>dg_gy.w;
	}
};
priority_queue<node>zb_m; 
void rs_djg(){
	for(int i_uqz=1;i_uqz<=dtl_yje;i_uqz++) hgi[i_uqz]=el;
	zb_m.push((node){hgi[1]=0,1}); 
	while(zb_m.size()){
		int k=zb_m.top().id;zb_m.pop();
		if(jwu_kbn[k]) continue;
		jwu_kbn[k]=1;
		for(int wt_ny=bqo[k],h;wt_ny;wt_ny=djk[wt_ny].link) if(hgi[h=djk[wt_ny].to]>hgi[k]+djk[wt_ny].w){
			hgi[h]=hgi[k]+djk[wt_ny].w;
			zb_m.push((node){hgi[h],h});
		}
	}
	iota(usq+1,usq+dtl_yje+1,1);
	sort(usq+1,usq+dtl_yje+1,[&](int la_fa,int ni){return hgi[la_fa]<hgi[ni];});
	for(int kty=1;kty<=dtl_yje;kty++) w[usq[kty]]=kty;
	oui[1]=1;
	for(int tb_jd=2,e;tb_jd<=dtl_yje;tb_jd++) for(int y=bqo[e=usq[tb_jd]],p;y;y=djk[y].link) if(hgi[e]==hgi[p=djk[y].to]+djk[y].w){
		if(!ay_zum[tb_jd]) ay_zum[tb_jd]=w[p];
		else oui[tb_jd]=1;
	}
	rx[dtl_yje]=dtl_yje;
	for(int w_n=dtl_yje-1;w_n>=1;w_n--) rx[w_n]=hgi[usq[w_n+1]]==hgi[usq[w_n]]?rx[w_n+1]:w_n;
}
void z_s(int ed,int l_m,int pey){
	rtb_he[0][pey]=rtb_he[1][pey]=ahk_ncj[0][pey]=ahk_ncj[1][pey]=el;
	k_eq[pey]=1;
	for(int oun=ed;oun<=l_m;oun++) if(!oui[oun]) ek[pey]++,xj[pey][ay_zum[oun]]++;
	if(ed==l_m) return;
	int xeq_eo=(ed+l_m)>>1;
	z_s(ed,xeq_eo,pey<<1),z_s(xeq_eo+1,l_m,pey<<1|1);
}
void gc_l(int c){
	ofo_p[c]=(ull)rtb_he[0][c]*(ek[c]-xj[c][q_q[c]])+qb_qn[c];
}
void rl_it(int t){
	if(ahk_ncj[0][t]!=el||q_q[t]==1) qb_qn[t]=(ull)(q_q[t]==1?rtb_he[0][t]:ahk_ncj[0][t])*xj[t][q_q[t]];
	else qb_qn[t]=0;
}
void yn_so(int h,int lxr_t,ll kxb){
	if(lxr_t==q_q[h]){
		rtb_he[0][h]=rtb_he[1][h]=gh_pbl[h]=kxb;
		if(q_q[h]==1) qb_qn[h]=(ull)xj[h][q_q[h]]*rtb_he[0][h];
		return gc_l(h);
	}
	ahk_ncj[0][h]=ahk_ncj[1][h]=p[h]=rtb_he[0][h];
	rtb_he[0][h]=rtb_he[1][h]=gh_pbl[h]=kxb;
	k_eq[h]=1,q_q[h]=lxr_t;
	rl_it(h),gc_l(h);
}
void fyu(int gs,ll rzb){
	ahk_ncj[0][gs]=ahk_ncj[1][gs]=p[gs]=rzb;
	rl_it(gs),gc_l(gs);
}
void kj(int tqm){
	if(gh_pbl[tqm]) yn_so(tqm<<1,q_q[tqm],gh_pbl[tqm]),yn_so(tqm<<1|1,q_q[tqm],gh_pbl[tqm]),gh_pbl[tqm]=0;
	if(p[tqm]) fyu(tqm<<1,p[tqm]),fyu(tqm<<1|1,p[tqm]),p[tqm]=0;
}
void u_c(int pta){
	rtb_he[0][pta]=min(rtb_he[0][pta<<1],rtb_he[0][pta<<1|1]);
	rtb_he[1][pta]=max(rtb_he[1][pta<<1],rtb_he[1][pta<<1|1]);
	ahk_ncj[0][pta]=min(ahk_ncj[0][pta<<1],ahk_ncj[0][pta<<1|1]);
	ahk_ncj[1][pta]=max(ahk_ncj[1][pta<<1],ahk_ncj[1][pta<<1|1]);
	k_eq[pta]=k_eq[pta<<1]&&k_eq[pta<<1|1]&&(rtb_he[0][pta<<1]==rtb_he[0][pta<<1|1])&&(q_q[pta<<1]==q_q[pta<<1|1]);
	if(k_eq[pta]) q_q[pta]=q_q[pta<<1],qb_qn[pta]=qb_qn[pta<<1]+qb_qn[pta<<1|1];
	else qb_qn[pta]=0;
	ofo_p[pta]=ofo_p[pta<<1]+ofo_p[pta<<1|1];
}
void pr_sm(int idz,int xr_iq,int r,int pkb,int j_gwf,int s_fj,ll zy){
	if(ahk_ncj[1][j_gwf]<=zy) return;
	if(idz<=r&&pkb<=xr_iq){
		if(k_eq[j_gwf]){
			if(zy<rtb_he[0][j_gwf]||(zy==rtb_he[0][j_gwf]&&s_fj<q_q[j_gwf])) return yn_so(j_gwf,s_fj,zy);
			else if(zy<ahk_ncj[0][j_gwf]) return fyu(j_gwf,zy);
		}
	}
	int ej=(r+pkb)>>1;
	kj(j_gwf);
	if(idz<=ej) pr_sm(idz,xr_iq,r,ej,j_gwf<<1,s_fj,zy);
	if(ej<xr_iq) pr_sm(idz,xr_iq,ej+1,pkb,j_gwf<<1|1,s_fj,zy);
	u_c(j_gwf);
}
void e_j(int pav_i,ll z_ud){
	if(rx[pav_i]<dtl_yje) pr_sm(rx[pav_i]+1,dtl_yje,1,dtl_yje,1,pav_i,z_ud); 
}
int main(){
	scanf("%d%d%d",&dtl_yje,&ol_x,&g_h);
	for(int p=1;p<=dtl_yje;p++) scanf("%lld",&huu[p]);
	for(int dob_is=1,gs,cs_s,tz;dob_is<=ol_x;dob_is++) scanf("%d%d%d",&gs,&cs_s,&tz),z(gs,cs_s,tz);
	rs_djg();
	z_s(1,dtl_yje,1);
	for(int q=1;q<=g_h;q++) scanf("%d%d",&qk_jr[q],&m_txt[q]),huu[qk_jr[q]]+=m_txt[q];
	for(int o_zcy=1;o_zcy<=dtl_yje;o_zcy++) e_j(o_zcy,huu[usq[o_zcy]]);
	for(int w=g_h;w>=1;w--){
		mpb[w]=ofo_p[1];
		huu[qk_jr[w]]-=m_txt[w];
		e_j(w[qk_jr[w]],huu[qk_jr[w]]);
	}
	mpb[0]=ofo_p[1];
	for(int w=0;w<=g_h;w++) printf("%llu\n",mpb[w]);
}