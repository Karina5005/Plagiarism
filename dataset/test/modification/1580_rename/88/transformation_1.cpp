#include <bits/stdc++.h>
using namespace std;
const int js=105,d=1e9;
#define ll long long
struct barrett {
	ll M; __int128 mu;
	inline void kk(int abr_qqh=0){M=abr_qqh;mu=-1ull/M;}
	inline ll x(const ll muy_lk)const{
		ll r=muy_lk-(mu*muy_lk>>64)*M;
		return r>=M?r-M:r;
	}
}o_adk;
inline ll operator%(const ll &zhy_uj,const barrett &g) { return g.x(zhy_uj);}
inline void operator%=(ll &x,const barrett &vq){x=x%vq;}
int pj,w_ki,p,g;
int aqr_ff[js][js],qsf[js][js][js];
inline int wp_q(int ths_pjj,int ir_qdn){return (ths_pjj+ir_qdn>=g)?ths_pjj+ir_qdn-g:ths_pjj+ir_qdn;}
int main(){
	scanf("%d %d %d %d",&pj,&w_ki,&p,&g);o_adk.kk(g);
	aqr_ff[0][0]=1;
	for(int xh_i=1;xh_i<=pj;++xh_i){
		aqr_ff[xh_i][0]=1;
		for(int v_f=1;v_f<=xh_i;++v_f)aqr_ff[xh_i][v_f]=wp_q(aqr_ff[xh_i-1][v_f-1],aqr_ff[xh_i-1][v_f]);
	}
	for(int i_a=1;i_a<=pj;++i_a)
		qsf[1][i_a][i_a==w_ki]=1;
	for(int v=1;v<=pj+1;++v)
		qsf[0][v][0]=1;
	for(int u=2;u<=pj;++u)for(int t=1;t<=pj;++t)
		for(int lsx_nlo=0;lsx_nlo<=p&&lsx_nlo<=u;++lsx_nlo)
			for(int qbt=0;qbt<u;++qbt)for(int cl_i=0;lsx_nlo-cl_i-(t==w_ki)>=0&&cl_i<=qbt;++cl_i)
				if(qsf[qbt][t+1][cl_i]&&qsf[u-qbt-1][t+1][lsx_nlo-cl_i-(t==w_ki)])qsf[u][t][lsx_nlo]=(qsf[u][t][lsx_nlo]+1ll*aqr_ff[u-1][qbt]*qsf[qbt][t+1][cl_i]%o_adk*qsf[u-qbt-1][t+1][lsx_nlo-cl_i-(t==w_ki)])%o_adk;
	printf("%d\n",qsf[pj][1][p]);
	return 0;
}