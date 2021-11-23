#include <bits/stdc++.h>
using namespace std;
const int iw=505,x=1e9;
int ob[iw][iw],re[iw],g,ln,f;
char wwh[iw];
inline int wm_r(int v,int dxr,int sh_dqp,int ckc){
	return ob[sh_dqp][ckc]-ob[v-1][ckc]-ob[sh_dqp][dxr-1]+ob[v-1][dxr-1];
}
inline int u_fen(int o_rr,int od,int k_jw,int bal_al){
	return (k_jw-o_rr+1)*(bal_al-od+1)-wm_r(o_rr,od,k_jw,bal_al);
}
inline void uwd(int &gs_zzh,int zi){if(gs_zzh>zi)gs_zzh=zi;}
int main(){
	scanf("%d",&g);
	while(g--){
		scanf("%d %d",&ln,&f);
		for(int p_vxa=1;p_vxa<=ln;++p_vxa){
			scanf("%s",wwh+1);
			for(int gfb_hzw=1;gfb_hzw<=f;++gfb_hzw)ob[p_vxa][gfb_hzw]=(wwh[gfb_hzw]=='1');
		}
		int bf=x;
		for(int s_r=1;s_r<=ln;++s_r)for(int di=1;di<=f;++di)
			ob[s_r][di]+=ob[s_r-1][di]+ob[s_r][di-1]-ob[s_r-1][di-1];
		for(int i=1;i<=ln;++i)for(int q=i+4;q<=ln;++q){
			re[0]=x;
			for(int m=1;m<=f;++m){
				re[m]=u_fen(i+1,m,q-1,m)-wm_r(i+1,1,q-1,m)-u_fen(i,1,i,m)-u_fen(q,1,q,m);
				uwd(re[m],re[m-1]);
			}
			for(int j_hel=4,q;j_hel<=f;++j_hel){
				q=u_fen(i+1,j_hel,q-1,j_hel)+wm_r(i+1,1,q-1,j_hel-1)+u_fen(i,1,i,j_hel-1)+u_fen(q,1,q,j_hel-1);
				uwd(bf,re[j_hel-3]+q);
			}
		}
		printf("%d\n",bf);
	}
	return 0;
}