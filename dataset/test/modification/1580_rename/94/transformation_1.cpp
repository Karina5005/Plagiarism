#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int w_p=105;
int mjn_gcg,qx,ik_okg,ugk,oj[w_p][w_p];
int fdw_k[w_p][w_p][w_p];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>mjn_gcg>>qx>>ik_okg>>ugk;
	**oj=1;
	for(int iv_g=1;iv_g<=mjn_gcg;++iv_g){
		oj[iv_g][0]=1;
		for(int h_zb=1;h_zb<=iv_g;++h_zb)
			oj[iv_g][h_zb]=(oj[iv_g-1][h_zb]+oj[iv_g-1][h_zb-1])%ugk;
	}
	for(int h=0;h<=mjn_gcg;++h)fdw_k[0][0][h]=1;
	for(int ujy=2;ujy<=mjn_gcg;++ujy)fdw_k[1][0][ujy]=1;
	fdw_k[1][1][1]=1;
	for(int wa=2;wa<=mjn_gcg;++wa){
		for(int dvo=0;dvo<wa;++dvo)
			for(int y=0;y<=wa;++y)
				for(int oa=2;oa<=wa&&oa<=qx;++oa)
					if(int&p_jte_jte=fdw_k[dvo][y][oa-1])
						for(int ur=y;ur<=wa&&wa+1>=ur*2;++ur)
							fdw_k[wa][ur][oa]=(fdw_k[wa][ur][oa]+(LL)p_jte*fdw_k[wa-dvo-1][ur-y][oa-1]%ugk*oj[wa-1][dvo])%ugk;
		fdw_k[wa][1][1]=(LL)fdw_k[wa-1][1][1]*wa%ugk;
		for(int g_q=wa+1;g_q<=mjn_gcg;++g_q)
			fdw_k[wa][0][g_q]=fdw_k[wa][1][1];
	}
	cout<<fdw_k[mjn_gcg][ik_okg][qx]<<'\n';
	return 0;
}