#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define lg long long
#define db double
#define lb(x) ((x)&-(x))
#define ft first
#define sd second

#define HII cerr<<"HI"<<endl
#define LLLINE cerr<<"@@@@@@@@@@@@@@@@@@@@"<<endl

template <class _T_>
void zvi_imc_T_& onk){
	onk=0;int d_cod=1;char ru=getchar();
	for(;ru<'0'||ru>'9';ru=getchar())if(ru=='-')d_cod*=-1;
	for(;ru>='0'&&ru<='9';ru=getchar())onk=onk*10+ru-'0';
	onk*=d_cod;
}

/************************************************/
#define MN 400005
int rkc,nyv;
lg f[20][MN];
lg a[MN];
int main(){
	int nr;
	bfq(nr);
	while(nr--){
		for(int peo=1;peo<=rkc;++peo){
			for(int zt=0;zt<20;++zt)f[zt][peo]=0;
		}
		bfq(rkc);
		for(int g=1;g<=rkc;++g){
			zvi_imc(a[g]);
			if(g!=1)f[0][g-1]=abs(a[g]-a[g-1]);
		}
		//for(int i=1;i<n;++i)cerr<<f[0][i]<<' ';cerr<<endl;
		for(int l=1;l<20;++l){
			for(int kas=1;kas<rkc;++kas){
				f[l][kas]=__gcd(f[l-1][kas],f[l-1][kas+(1<<l-1)]);
			}
		}
		//cerr<<f[1][1]<<"~~~~~"<<endl;
		//cerr<<"????"<<endl;
		int axc=0;
		for(int b_y=1;b_y<rkc;++b_y){
			//cerr<<i<<"????"<<endl;
			int b_r=b_y;lg B=0;
			for(int cps_ccz=19;~cps_ccz;--cps_ccz){
				//cerr<<j<<' '<<I<<"~~~~"<<' '<<f[j][I]<<' '<<B<<' '<<__gcd(B,f[j][I])<<endl;
				if((b_r+(1<<cps_ccz)<=rkc)&&__gcd(B,f[cps_ccz][b_r])>1){
					B=__gcd(B,f[cps_ccz][b_r]);
					b_r+=(1<<cps_ccz);
					//cerr<<B<<"??????"<<endl;
				}
			}
			//cerr<<i<<' '<<I<<endl;
			axc=max(axc,b_r-b_y);
		}
		printf("%d\n",axc+1);
	}
	return 0;
}
