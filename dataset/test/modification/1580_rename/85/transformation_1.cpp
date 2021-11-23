#include <bits/stdc++.h>
using namespace std;
const int m=105,b_ji=1e9;
#define ll long long
struct barrett {
	ll M; __int128 mu;
	inline void d(int vg=0){M=vg;mu=-1ull/M;}
	inline ll mw_p(const ll p)const{
		ll r=p-(mu*p>>64)*M;
		return r>=M?r-M:r;
	}
}hic;
inline ll operator%(const ll &rw_nr,const barrett &mq_dv) { return mq_dv.mw_p(rw_nr);}
inline void operator%=(ll &x,const barrett &exl){x=x%exl;}
int apb_bj,s_sm,rt,p_wmr;
int eq_w[m][m],sp[m][m][m];
inline int rmc_y(int sa_yb,int et_bp){return (sa_yb+et_bp>=p_wmr)?sa_yb+et_bp-p_wmr:sa_yb+et_bp;}
int main(){
	scanf("%d %d %d %d",&apb_bj,&s_sm,&rt,&p_wmr);hic.d(p_wmr);
	eq_w[0][0]=1;
	for(int jg_etw=1;jg_etw<=apb_bj;++jg_etw){
		eq_w[jg_etw][0]=1;
		for(int v=1;v<=jg_etw;++v)eq_w[jg_etw][v]=rmc_y(eq_w[jg_etw-1][v-1],eq_w[jg_etw-1][v]);
	}
	for(int hcw=1;hcw<=apb_bj;++hcw)
		sp[1][hcw][hcw==s_sm]=1;
	for(int yqu_h=1;yqu_h<=apb_bj+1;++yqu_h)
		sp[0][yqu_h][0]=1;
	for(int lu=2;lu<=apb_bj;++lu)for(int ymk_tij=1;ymk_tij<=apb_bj;++ymk_tij)
		for(int jj=0;jj<=rt&&jj<=((lu+1)>>1);++jj)
			for(int isg_nyi=0;isg_nyi<lu;++isg_nyi)for(int cgb_jsn=0;jj-cgb_jsn-(ymk_tij==s_sm)>=0&&cgb_jsn<=isg_nyi;++cgb_jsn)
				if(sp[isg_nyi][ymk_tij+1][cgb_jsn]&&sp[lu-isg_nyi-1][ymk_tij+1][jj-cgb_jsn-(ymk_tij==s_sm)])sp[lu][ymk_tij][jj]=(sp[lu][ymk_tij][jj]+1ll*eq_w[lu-1][isg_nyi]*sp[isg_nyi][ymk_tij+1][cgb_jsn]%hic*sp[lu-isg_nyi-1][ymk_tij+1][jj-cgb_jsn-(ymk_tij==s_sm)])%hic;
	printf("%d\n",sp[apb_bj][1][rt]);
	return 0;
}