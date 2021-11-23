#include<bits/stdc++.h>
#define int long long
using namespace std;

namespace IO{
	typedef long long LL; typedef long double LD;
	typedef unsigned long long ULL; typedef double DB;
	int read(){
		int x=0,f=1; char ch=getchar();
		while(ch<'0'||ch>'9'){ /* 'if' begin */
		if(ch=='-') /* 'if' inside */
		f=-1; ch=getchar(); }
		while(ch>='0'&&ch<='9'){ x=(x<<1)+(x<<3)+(ch^48); ch=getchar(); }
		return x*f;
	}
	void write(int x,char sp){
		char ch[20]; int len=0;
		/* 'if' begin */
		if(x<0) /* 'if' inside */
		x=-x,putchar('-');
		do{ ch[len++]=x%10+'0'; x/=10; }while(x);
		for(int i=len-1;~i;i--) /* 'for' inside */
		putchar(ch[i]); putchar(sp);
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
		for(;b;b>>=1)/* 'for' inside */
		{
			/* 'if' begin */
			if(b&1) /* 'if' inside */
			res=res*a%mod;
			a=a*a%mod;
		}
		return res;
	}
	void init(){
		f[1][1][1]=fac[0]=c[0][0]=1;
		for(int i=1;i<=n;i++)/* 'for' inside */
		{
			c[i][0]=1;
			fac[i]=fac[i-1]*i%mod;
			for(int j=1;j<=i;j++)
				/* 'for' inside */
				c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
		}
	}
} using namespace Combination;

int F(int i,int j,int u){
	/* 'if' begin */
	if(!j&&(u<1||u>i)) /* 'if' inside */
	return fac[i];
	return f[i][j][u];
}
signed main(){
	n=read(); m=read(); k=read(); mod=read(); init();
	for(int i=2;i<=n;i++)
		/* 'for' inside */
		for(int j=0;j<=min(i,k);j++)
			/* 'for' inside */
			for(int u=1;u<=min(i-j+1,m);u++)/* 'for' inside */
			{
				int t=j-(u==1);
				f[i][j][u]=F(i-1,t,u-1)*2%mod;
				for(int p=2;p<i;p++)
					/* 'for' inside */
					for(int c=0;c<=min(p,t);c++) /* 'for' inside */
					/* 'if' begin */
					if(F(p-1,c,u-1)&&F(i-p,t-c,u-1))
						/* 'if' inside */
						(f[i][j][u]+=F(p-1,c,u-1)*F(i-p,t-c,u-1)%mod*C(i-1,p-1))%=mod;
			}
	write(f[n][k][m],'\n');
	return 0;
}