#include<cstdio>
#include<queue>
#include<set>
#include<algorithm>
using namespace std;
#define N 200500
#define M 8000500
#define ll unsigned long long
int fs,r,es_fwr,uj[N],k,hq[N],w_xp,e,vbf,fml_n[N],x[N],jwl_pj[N],tm[N],wd_x[N];
ll dis[N],v[N],as,v2[N];
bool ge(int ad_n,int tu){return dis[ad_n]<dis[tu];}
struct edge{int t,next,v;}o[N*4];
void rpw_xem(int c_e,int jta,int rql_wp){o[++k]=(edge){jta,uj[c_e],rql_wp};uj[c_e]=k;o[++k]=(edge){c_e,uj[jta],rql_wp};uj[jta]=k;}
void inn_i()
{
	priority_queue<pair<ll,int> > wm_n;
	for(int l_kl=1;l_kl<=fs;l_kl++)dis[l_kl]=1e18;
	dis[1]=0;wm_n.push(make_pair(0,1));
	while(!wm_n.empty())
	{
		int qsu=wm_n.top().second;wm_n.pop();
		if(fml_n[qsu])continue;fml_n[qsu]=0;
		for(int k_nv=uj[qsu];k_nv;k_nv=o[k_nv].next)
		{
			int o_ls=o[k_nv].t;ll v=dis[qsu]+o[k_nv].v;
			if(dis[o_ls]>v)dis[o_ls]=v,wm_n.push(make_pair(-v,o_ls));
		}
	}
	for(int c=1;c<=fs;c++)for(int u=uj[c];u;u=o[u].next)if(dis[o[u].t]==dis[c]+o[u].v)
	{
		if(hq[o[u].t])hq[o[u].t]=-1;
		else hq[o[u].t]=c;
	}
	for(int htr_msv=2;htr_msv<=fs;htr_msv++)if(hq[htr_msv]==1)hq[htr_msv]=0;
}
struct ptree{
	int ch[M][2],rt[N],vl[M],ct,ls,c1;
	int y(int yx,int vba_bg,int stx,int v)
	{
		int wt_oc=++ct;
		ch[wt_oc][0]=ch[yx][0];ch[wt_oc][1]=ch[yx][1];vl[wt_oc]=vl[yx]+1;
		if(vba_bg==stx)return wt_oc;
		int v_hnn=(vba_bg+stx)>>1;
		if(v_hnn>=v)ch[wt_oc][0]=y(ch[yx][0],vba_bg,v_hnn,v);
		else ch[wt_oc][1]=y(ch[yx][1],v_hnn+1,stx,v);
		return wt_oc;
	}
	void i_pe(int n_f){if(n_f>0)ls=y(ls,1,fs,tm[n_f]);rt[++c1]=ls;}
	int di_z(int vde_evl,int whg,int ako_ue,int mre)
	{
		if(whg==ako_ue)return vl[vde_evl];
		int vu=(whg+ako_ue)>>1;
		if(mre<=vu)return di_z(ch[vde_evl][0],whg,vu,mre);
		else return di_z(ch[vde_evl][1],vu+1,ako_ue,mre);
	}
}j_yv;
struct sth{int a,b;}cu[N];
set<int> hdm_gl;
ll calc(int xcg,int ka_sxf,sth f,int ls_q)
{
	if(f.a==0)return 0;
	int t_rl=j_yv.di_z(j_yv.rt[ka_sxf],1,fs,f.a)-j_yv.di_z(j_yv.rt[xcg-1],1,fs,f.a);
	return v[f.a]*(x[ka_sxf]-x[xcg-1]-t_rl)+(v[f.b]-ls_q*(f.b==w_xp)*e)*t_rl;
}
void b(int cjh,int rc,sth vj,sth q)
{
	int mda_t=wd_x[cjh]+1,mu=wd_x[rc+1];
	as+=calc(mda_t,mu,q,0)-calc(mda_t,mu,vj,1);
}
void adf(int q_q,int r,sth zlv)
{
//	printf("%d %d %d %d\n",l,r,t1.a,t1.b);
	int l=*(--hdm_gl.upper_bound(q_q)),ix=l;
	while(l<=r)
	{
		int ii=*hdm_gl.upper_bound(l);
		sth i=cu[l];int jmk_gle=l,hxh_yb=ii-1;
		if(jmk_gle<q_q)jmk_gle=q_q;if(hxh_yb>r)hxh_yb=r;
		b(jmk_gle,hxh_yb,i,zlv);
		ix=l;l=ii;if(ii<=r)hdm_gl.erase(ii);
	}
	if(hdm_gl.find(r+1)==hdm_gl.end())cu[r+1]=cu[ix];cu[q_q]=zlv;
	hdm_gl.insert(q_q);hdm_gl.insert(r+1);
//	printf("%d: %d %d\n",l,t1.a,t1.b);
//	printf("%d: %d %d\n",r+1,vl[ls].a,vl[ls].b);
}
sth hxa(int bfg)
{
	int mz_tgr=*(--hdm_gl.upper_bound(bfg));
	return cu[mz_tgr];
}
bool yp_pf(int fwv,int xc){return v[fwv]==v[xc]?fwv<xc:v[fwv]<v[xc];}
sth operator +(sth nsk,sth xj)
{
	int lg=yp_pf(nsk.a,xj.a)?nsk.a:xj.a,pl_qd=nsk.a^xj.a^lg;
	if(yp_pf(nsk.b,pl_qd))pl_qd=nsk.b;
	if(yp_pf(xj.b,pl_qd))pl_qd=xj.b;
	return (sth){lg,pl_qd};
}
bool operator <(sth drc,sth t_hyp)
{
	return yp_pf(drc.a,t_hyp.a)||yp_pf(drc.b,t_hyp.b);
}
struct segt{
	struct node{int x,l,r;sth mn;}e[N*4];
	void m(int coj)
	{
		e[coj].mn=e[coj<<1].mn+e[coj<<1|1].mn;
	}
	void dqg(int yoa,int ua,int fb)
	{
		e[yoa].l=ua;e[yoa].r=fb;
		if(ua==fb){e[yoa].mn=(sth){ua,0};return;}
		int d_xnc=(ua+fb)>>1;dqg(yoa<<1,ua,d_xnc);dqg(yoa<<1|1,d_xnc+1,fb);
		m(yoa);
	}
	void m_d(int k,int m)
	{
		if(e[k].l==e[k].r)return;
		int ird=(e[k].l+e[k].r)>>1;
		if(ird>=m)m_d(k<<1,m);
		else m_d(k<<1|1,m);
		m(k);
	}
	int e_mxq(int v,int vbr_m,int pzt,sth zu,sth vz)
	{
		if(!(vz+e[v].mn<zu))return -1;
		if(e[v].l==e[v].r)return e[v].l;
		int f=(e[v].l+e[v].r)>>1;
		if(f>=pzt)return e_mxq(v<<1,vbr_m,pzt,zu,vz);
		else if(f<vbr_m)return e_mxq(v<<1|1,vbr_m,pzt,zu,vz+e[v<<1].mn);
		else
		{
			int ij=e_mxq(v<<1,vbr_m,f,zu,vz);
			if(ij==-1)ij=e_mxq(v<<1|1,f+1,pzt,zu,vz+e[v<<1].mn);
			return ij;
		}
	}
	sth fj(int msv_lot,int fcn,int c_ix)
	{
		if(e[msv_lot].l==fcn&&e[msv_lot].r==c_ix)return e[msv_lot].mn;
		int ur=(e[msv_lot].l+e[msv_lot].r)>>1;
		if(ur>=c_ix)return fj(msv_lot<<1,fcn,c_ix);
		else if(ur<fcn)return fj(msv_lot<<1|1,fcn,c_ix);
		else return fj(msv_lot<<1,fcn,ur)+fj(msv_lot<<1|1,ur+1,c_ix);
	}
	int ua_hhi(int lm_ka,int n_d,int r_h,int z,sth u_e,int vnr_e)
	{
		if(e[lm_ka].l==n_d&&e[lm_ka].r==r_h)
		{
			sth vgq_b=u_e+e[lm_ka].mn;
			if(vnr_e&&(vgq_b.a==z||vgq_b.b==z))return r_h;
			else if(!vnr_e&&vgq_b.a==z)return r_h;
		}
		if(e[lm_ka].l==e[lm_ka].r)return -1;
		int pt_jps=(e[lm_ka].l+e[lm_ka].r)>>1;
		if(pt_jps>=r_h)return ua_hhi(lm_ka<<1,n_d,r_h,z,u_e,vnr_e);
		else if(pt_jps<n_d)return ua_hhi(lm_ka<<1|1,n_d,r_h,z,u_e+e[lm_ka<<1].mn,vnr_e);
		else
		{
			int flo=ua_hhi(lm_ka<<1,n_d,pt_jps,z,u_e,vnr_e),eot_vqr=-1;
			if(flo==pt_jps)eot_vqr=ua_hhi(lm_ka<<1|1,pt_jps+1,r_h,z,u_e+e[lm_ka<<1].mn,vnr_e);
			if(eot_vqr!=-1)return eot_vqr;
			return flo;
		}
	}
}bye_w;
int o(int e_j,int bwb,int w,int mam)
{
	int wr=wd_x[e_j]+1,pn_q=wd_x[bwb+1];
	int t_iy=j_yv.di_z(j_yv.rt[pn_q],1,fs,w)-j_yv.di_z(j_yv.rt[wr-1],1,fs,w);
	if(!mam)t_iy=x[pn_q]-x[wr-1]-t_iy;
	return t_iy;
}
void v(int jlx_bb,int deg)
{
	int u_a=bye_w.ua_hhi(1,jlx_bb,fs,jlx_bb,(sth){0,0},0),r=bye_w.ua_hhi(1,jlx_bb,fs,jlx_bb,(sth){0,0},1);
	if(u_a==-1)u_a=jlx_bb-1;
	as+=1ll*o(jlx_bb,u_a,jlx_bb,0)*deg;
	v[jlx_bb]+=deg;
	bye_w.m_d(1,jlx_bb);
	int bp=jlx_bb;
	while(bp<=fs)
	{
		sth psb=bye_w.fj(1,1,bp);
		int v=bye_w.e_mxq(1,1,fs,psb,(sth){0,0});
		if(v==-1)v=fs+1;
		int b=v==fs+1;
		sth z_sky=hxa(v-1);
		if(z_sky.a==psb.a&&z_sky.b==psb.b)b=1;
		adf(bp,v-1,psb);
		bp=v;if(b)break;
	}
	u_a=bye_w.ua_hhi(1,jlx_bb,fs,jlx_bb,(sth){0,0},0);
	if(u_a==-1)u_a=jlx_bb-1;
	if(bp<=u_a+1)bp=u_a+1;
	while(bp<=fs)
	{
		sth sjz_jm=bye_w.fj(1,1,bp);
		int zo=bye_w.e_mxq(1,1,fs,sjz_jm,(sth){0,0});
		if(zo==-1)zo=fs+1;
		int az_zg=0;
		sth g=hxa(zo-1);
		if(g.a==sjz_jm.a&&g.b==sjz_jm.b&&sjz_jm.b!=jlx_bb)az_zg=1;
		adf(bp,zo-1,sjz_jm);
		bp=zo;if(az_zg)break;
	}
}
int main()
{
	hdm_gl.insert(0);hdm_gl.insert(fs+1);
	v[0]=7e18;
	scanf("%d%d%d",&fs,&r,&es_fwr);
	for(int k_mqz=1;k_mqz<=fs;k_mqz++)scanf("%d",&v2[k_mqz]);
	for(int ar_dw=1;ar_dw<=r;ar_dw++)scanf("%d%d%d",&w_xp,&e,&vbf),rpw_xem(w_xp,e,vbf);
	inn_i();
	for(int iz_lh=1;iz_lh<=fs;iz_lh++)jwl_pj[iz_lh]=iz_lh;
	sort(jwl_pj+1,jwl_pj+fs+1,ge);
	for(int ewl=1;ewl<=fs;ewl++)tm[jwl_pj[ewl]]=ewl;
	sort(dis+1,dis+fs+1);
	for(int hw_ko=1;hw_ko<=fs;hw_ko++)j_yv.i_pe(hq[jwl_pj[hw_ko]]),x[hw_ko]=x[hw_ko-1]+(hq[jwl_pj[hw_ko]]!=-1),v[hw_ko]=v2[jwl_pj[hw_ko]];
	bye_w.dqg(1,1,fs);
	dis[fs+1]=-1;wd_x[fs+1]=fs;for(int a_y=fs;a_y>=1;a_y--)wd_x[a_y]=dis[a_y]==dis[a_y+1]?wd_x[a_y+1]:a_y;
	for(int ab_ji=1;ab_ji<=fs;ab_ji++)adf(ab_ji,ab_ji,bye_w.fj(1,1,ab_ji));
	printf("%llu\n",as);
	for(int a=1;a<=es_fwr;a++)
	{
		scanf("%d%d",&w_xp,&e);
		w_xp=tm[w_xp];v(w_xp,e);
		printf("%llu\n",as);
	}
}