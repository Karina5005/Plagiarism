#include<bits/stdc++.h>
using namespace std;
const int doc=405;
int cte_y,jt,foq[doc][doc],cei_hnd,fpx_o[doc],n_d[doc],ee_u[doc][doc],bev_k[doc];
char t[doc];

int nqw(){
	int cai_mbx=0,kr=1;char axi_ijb;
	do{axi_ijb=getchar();if(axi_ijb=='-')kr=-1;}while(!isdigit(axi_ijb));
	do{cai_mbx=cai_mbx*10+axi_ijb-'0';axi_ijb=getchar();}while(isdigit(axi_ijb));
	return cai_mbx*kr;
}

void wuo_o(){
	cte_y=nqw();jt=nqw();
	for(register int vom=1;vom<=cte_y;++vom){scanf("%s",t+1);for(register int atn_s=1;atn_s<=jt;++atn_s)foq[vom][atn_s]=(t[atn_s]=='0');}
	for(register int g_fth=1;g_fth<=jt;++g_fth)for(register int dgz=1;dgz<=cte_y;++dgz)ee_u[g_fth][dgz]=ee_u[g_fth][dgz-1]+(foq[dgz][g_fth]^1);
	cei_hnd=cte_y*jt;for(register int pwg=1;pwg<=cte_y-3;++pwg){
		memset(fpx_o,0,sizeof(fpx_o));
		for(register int awr=1;awr<=jt;++awr)fpx_o[awr]=(foq[pwg+1][awr]^1)+foq[pwg][awr]+foq[pwg+3][awr]+(foq[pwg+2][awr]^1);
		for(register int zqi_ifn=pwg+4;zqi_ifn<=cte_y;++zqi_ifn){
			for(register int ebe=jt;ebe>=1;--ebe)n_d[ebe]=((zqi_ifn-pwg-1)-(ee_u[ebe][zqi_ifn-1]-ee_u[ebe][pwg]));
			for(register int lx_z=jt;lx_z>=1;--lx_z)fpx_o[lx_z]+=(foq[zqi_ifn-1][lx_z]^1)*2-1+foq[zqi_ifn][lx_z];
			for(register int ka=1;ka<=jt;++ka)bev_k[ka]=bev_k[ka-1]+fpx_o[ka];
			int sr_dg=n_d[1]-fpx_o[1];
			for(register int rts=1;rts<=jt-3;++rts)sr_dg=min(sr_dg,n_d[rts]-bev_k[rts]),cei_hnd=min(cei_hnd,sr_dg+n_d[rts+3]+bev_k[rts+2]);
		}
	}
	printf("%d\n",cei_hnd);
}

signed main(){
	int xk=nqw();while(xk--)
		wuo_o();
}