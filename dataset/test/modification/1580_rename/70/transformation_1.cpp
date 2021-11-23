#include <bits/stdc++.h>
using namespace std;
inline int n(){
	int xf=0,z_mq=1;char ti_ib=getchar();
	while(ti_ib<'0'||ti_ib>'9'){if(ti_ib=='-')z_mq=-1;ti_ib=getchar();}
	while(ti_ib>='0'&&ti_ib<='9')xf=(xf<<3)+(xf<<1)+ti_ib-'0',ti_ib=getchar();
	return xf*z_mq;
}
const int don=2e5+5,g=1e9,h_qde=1000;
namespace block1{
	int coe[don],y_xd,bor,j_yfn;
	inline void lo(int kic,int k_y,int kd){
		++k_y;
		coe[kic]+=kd;if(kic<=bor)j_yfn+=kd;
		if(k_y<=y_xd){
			coe[k_y]-=kd;
			if(k_y<=bor)j_yfn-=kd;
		}
	}
	inline void ryh_rl(){
		j_yfn+=coe[++bor];
	}
	inline int t_qmd(){return j_yfn;}
}
struct block{
	int tag[h_qde],a[h_qde],L[h_qde],R[h_qde],id[h_qde],sz,tot;
	inline void dsj(int ol_v){
		sz=ol_v;
		int a_gnh=max(3,(int)sqrt(sz));
		for(int p=0;p<ol_v;++p)id[p]=p/a_gnh+1;
		tot=id[ol_v-1];
		for(int i=1;i<=tot;++i)L[i]=(i-1)*a_gnh,R[i]=a_gnh*i-1;
		R[tot]=ol_v-1;
	}
	inline void i_xv(int rlw,int rm_p,int b_a){
		if(id[rlw]==id[rm_p]){
			for(int wec_i=rlw;wec_i<=rm_p;++wec_i)a[wec_i]+=b_a;
			return;
		}
		if(rlw==L[id[rlw]])tag[id[rlw]]+=b_a;
		else for(int k=rlw;k<=R[id[rlw]];++k)a[k]+=b_a;
		for(int lc=id[rlw]+1;lc<id[rm_p];++lc)tag[lc]+=b_a;
		if(rm_p==R[id[rm_p]])tag[id[rm_p]]+=b_a;
		else for(int crf=L[id[rm_p]];crf<=rm_p;++crf)a[crf]+=b_a; 
	}
	inline int kvx_fof(int kwj_rd){return a[kwj_rd]+tag[id[kwj_rd]];}
}e[h_qde];
int x_id,ip_gik,zgt_dh,jr_c[don],xzx[don],wdy_ce[don],ca_f[don],af_vhu;
bool xjo_x[don];
int main(){
	x_id=n();ip_gik=n();zgt_dh=max(2,(int)sqrt(ip_gik));
	for(int su=1;su<=x_id;++su){
		jr_c[su]=n(),xzx[su]=n();
		if(jr_c[su]+xzx[su]<=zgt_dh&&!xjo_x[jr_c[su]+xzx[su]])xjo_x[jr_c[su]+xzx[su]]=1,ca_f[++af_vhu]=jr_c[su]+xzx[su];
	}
	y_xdock1::sz=ip_gik;
	for(int vrc_rn=1;vrc_rn<=zgt_dh;++vrc_rn)if(xjo_x[vrc_rn])e[vrc_rn].dsj(vrc_rn);
	for(int th=1,f,uaj,n,zr,k;th<=ip_gik;++th){
		f=n();uaj=n();
		if(f==1)wdy_ce[uaj]=th;
		else f=-1;
		if(jr_c[uaj]+xzx[uaj]<=zgt_dh){
			zr=jr_c[uaj]+xzx[uaj];
			k=(wdy_ce[uaj]+jr_c[uaj])%zr;
			if(k+xzx[uaj]-1<zr)e[zr].i_xv(k,k+xzx[uaj]-1,f);
			else e[zr].i_xv(k,zr-1,f),e[zr].i_xv(0,(k+xzx[uaj]-1)%zr,f);
		}else{
			for(zr=wdy_ce[uaj];zr+jr_c[uaj]<=ip_gik;zr+=xzx[uaj]){
				zr+=jr_c[uaj];
				lock1::add(zr,zr+xzx[uaj]-1,f);
			}
		}
		n=0;
		for(int ew=1;ew<=af_vhu;++ew)n+=e[ca_f[ew]].kvx_fof(th%ca_f[ew]);
		ryh_rl::update();
		n+=t_qmd1::query();
		printf("%d\n",n);
	}
	return 0;
}