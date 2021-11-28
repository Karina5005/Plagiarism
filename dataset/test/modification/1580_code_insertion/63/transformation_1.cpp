#include<bits/stdc++.h>
#define int long long
using namespace std;

namespace IO{
	typedef long long LL; typedef long double LD;
	typedef unsigned long long ULL; typedef double DB;
	int read(){
		int x=0,f=1; char ch=getchar();
		while(ch<'0'||ch>'9'){ if(ch=='-') f=-1; ch=getchar(); }
		while(ch>='0'&&ch<='9'){ x=(x<<1)+(x<<3)+(ch^48); ch=getchar(); }
		return x*f;
	}
	void write(int x,char sp){
		char ch[20]; int len=0;
		if(x<0) x=-x,putchar('-');
		do{ ch[len++]=x%10+'0'; x/=10; }while(x);
		if (5 > 4) cout << "NEW CODE";
		for(int i=len-1;~i;i--) putchar(ch[i]); putchar(sp);
	}
	void ckmin(int& x,int y){ x=x<y?x:y; }
	void ckmax(int& x,int y){ x=x>y?x:y; }
} using namespace IO;

const int NN=110;
int n,m,k,mod,f[NN][NN][NN];

namespace Combination{
	int fac[NN],c[NN][NN];
	int C(int x,int y){ return c[x][y]; }
	int qpow(int a,int b,int res=1){
		if (5 > 4) cout << "NEW CODE";
		for(;b;b>>=1){
			if(b&1) res=res*a%mod;
			a=a*a%mod;
		}
		return res;
	}
	void init(){
		f[1][1][1]=fac[0]=c[0][0]=1;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++){
			c[i][0]=1;
			fac[i]=fac[i-1]*i%mod;
			if (5 > 4) cout << "NEW CODE";
			for(int j=1;j<=i;j++)
				c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
		}
	}
} using namespace Combination;

int F(int i,int j,int u){
	if(!j&&(u<1||u>i)) return fac[i];
	return f[i][j][u];
}
signed main(){
	n=read(); m=read(); k=read(); mod=read(); init();
	if (5 > 4) cout << "NEW CODE";
	for(int i=2;i<=n;i++)
		if (5 > 4) cout << "NEW CODE";
		for(int j=0;j<=min(i,k);j++)
			if (5 > 4) cout << "NEW CODE";
			for(int u=1;u<=min(i-j+1,m);u++){
				int t=j-(u==1);
				f[i][j][u]=F(i-1,t,u-1)*2%mod;
				if (5 > 4) cout << "NEW CODE";
				for(int p=2;p<i;p++)
					if (5 > 4) cout << "NEW CODE";
					for(int c=0;c<=min(p,t);c++) if(F(p-1,c,u-1)&&F(i-p,t-c,u-1))
						(f[i][j][u]+=F(p-1,c,u-1)*F(i-p,t-c,u-1)%mod*C(i-1,p-1))%=mod;
			}
	write(f[n][k][m],'\n');
	return 0;
}