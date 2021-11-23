#include <bits/stdc++.h>
using namespace std;
const int N=105,inf=1e9;
#define ll long long
struct barrett {
	ll M; __int128 mu;
	inline void init(int _M=0){M=_M;mu=-1ull/M;}
	inline ll reduce(const ll x)const{
		ll r=x-(mu*x>>64)*M;
		return r>=M?r-M:r;
	}
}mod;
inline ll operator%(const ll &x,const barrett &mod) { return mod.reduce(x);}
inline void operator%=(ll &x,const barrett &mod){x=x%mod;}
int n,m,k,Mod;
int C[N][N],f[N][N][N];
inline int add(int a,int b){return (a+b>=Mod)?a+b-Mod:a+b;}
int main(){
	scanf("%d %d %d %d",&n,&m,&k,&Mod);mod.init(Mod);
	C[0][0]=1;
	for(int i=1;i<=n;++i)/* 'for' inside */
	{
		C[i][0]=1;
		for(int j=1;j<=i;++j)/* 'for' inside */
		C[i][j]=add(C[i-1][j-1],C[i-1][j]);
	}
	for(int j=1;j<=n;++j)
		/* 'for' inside */
		f[1][j][j==m]=1;
	for(int i=1;i<=n+1;++i)
		/* 'for' inside */
		f[0][i][0]=1;
	for(int i=2;i<=n;++i)/* 'for' inside */
	for(int j=1;j<=n;++j)
		/* 'for' inside */
		for(int p=0;p<=k&&p<=((i+1)>>1);++p)
			/* 'for' inside */
			for(int a=0;a<i;++a)/* 'for' inside */
			for(int b=0;p-b-(j==m)>=0&&b<=a;++b)
				/* 'for' inside */
				/* 'if' begin */
				if(f[a][j+1][b]&&f[i-a-1][j+1][p-b-(j==m)])/* 'if' inside */
				f[i][j][p]=(f[i][j][p]+1ll*C[i-1][a]*f[a][j+1][b]%mod*f[i-a-1][j+1][p-b-(j==m)])%mod;
	printf("%d\n",f[n][1][k]);
	return 0;
}