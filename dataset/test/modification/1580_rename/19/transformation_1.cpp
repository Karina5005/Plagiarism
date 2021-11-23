#include <bits/stdc++.h>
#define reg register
#define fi first
#define se second
#define mp std::make_pair
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
template<class T> T dmax(T vea,T xh_wr) { return vea>xh_wr?vea:xh_wr; }
template<class T> T bhw_zb(T ae,T jba_k) { return ae<jba_k?ae:jba_k; }
int i(){
	reg int x=0,f=0; reg char ch=getchar();
	while(!isdigit(ch)) (ch=='-')&&(f=1),ch=getchar();
	while(isdigit(ch)) x=(x<<1)+(x<<3)+(ch^48),ch=getchar();
	return f?-x:x;
}
const int am=410;
int a,lvv,agc[am][am],uep_xjt[am][am],j_j[am][am],o[am][am];
main(){
	for(reg int _=i();_;_--){
		a=i(),lvv=i();
		for(reg int i=1;i<=a;++i){
			std::string o;
			std::cin>>o;
			for(reg int j=1;j<=lvv;++j){
				agc[i][j]=(o[j-1]=='1'),j_j[i][j]=agc[i][j]+j_j[i][j-1];
				o[i][j]=o[i-1][j]+o[i][j-1]-o[i-1][j-1]+agc[i][j];
			}
		}
		for(reg int i=1;i<=lvv;++i) for(reg int j=1;j<=a;++j) uep_xjt[j][i]=agc[j][i]+uep_xjt[j-1][i];
		int wji_wne=0x3f3f3f3f;
		for(reg int i=1;i<=a;++i) for(reg int j=i+4;j<=a;++j){
			int gym=0;
			gym+=j-i-1-(uep_xjt[j-1][1]-uep_xjt[i][1]);
			for(reg int k=2;k<4;++k) gym+=(agc[i][k]==0)+(agc[j][k]==0)+(uep_xjt[j-1][k]-uep_xjt[i][k]);
			wji_wne=bhw_zb(wji_wne,gym+j-i-1-(uep_xjt[j-1][4]-uep_xjt[i][4]));
			for(reg int l=5;l<=lvv;++l){
				gym+=(agc[i][l-1]==0)+(agc[j][l-1]==0)+(uep_xjt[j-1][l-1]-uep_xjt[i][l-1]);
				if(o[j-1][l-1]-o[j-1][l-3]-o[i][l-1]+o[i][l-3]+j-i-1-uep_xjt[j-1][l-3]+uep_xjt[i][l-3]+4-(j_j[i][l-1]
					-j_j[i][l-3]+j_j[j][l-1]-j_j[j][l-3])<=gym)
					gym=o[j-1][l-1]-o[j-1][l-3]-o[i][l-1]+o[i][l-3]+j-i-1-uep_xjt[j-1][l-3]+uep_xjt[i][l-3]+4-(j_j[i][l-1]
					-j_j[i][l-3]+j_j[j][l-1]-j_j[j][l-3]);
				wji_wne=bhw_zb(wji_wne,gym+j-i-1-(uep_xjt[j-1][l]-uep_xjt[i][l]));
			}
		}
		printf("%d\n",wji_wne);
	}
	return 0;
}