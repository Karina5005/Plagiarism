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
		{
		int i=len-1;
		while (~i) {
		putchar(ch[i]);
		i--; 
		
		}} putchar(sp);
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
		while (b) {
			if(b&1) res=res*a%mod;
			a=a*a%mod;
			b>>=1; 
		}
		return res;
	}
	void init(){
		f[1][1][1]=fac[0]=c[0][0]=1;
		{
		int i=1;
		while (i<=n) {
			c[i][0]=1;
			fac[i]=fac[i-1]*i%mod;
			{
			int j=1;
			while (j<=i) {
				c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
				j++; 
				
				}}
			i++; 
		
		}}
	}
} using namespace Combination;

int F(int i,int j,int u){
	if(!j&&(u<1||u>i)) return fac[i];
	return f[i][j][u];
}
signed main(){
	n=read(); m=read(); k=read(); mod=read(); init();
	{
	int i=2;
	while (i<=n) {
		{
		int j=0;
		while (j<=min(i,k)) {
			{
			int u=1;
			while (u<=min(i-j+1,m)) {
				int t=j-(u==1);
				f[i][j][u]=F(i-1,t,u-1)*2%mod;
				{
				int p=2;
				while (p<i) {
					{
					int c=0;
					while (c<=min(p,t)) {
					if(F(p-1,c,u-1)&&F(i-p,t-c,u-1))
						(f[i][j][u]+=F(p-1,c,u-1)*F(i-p,t-c,u-1)%mod*C(i-1,p-1))%=mod;}
						c++; 
						
						}
						p++; 
						
						}}
				u++; 
			
			}}
}}
	j++; 
	
	}
	i++; 
	
	}	write(f[n][k][m],'\n');
	return 0;
}