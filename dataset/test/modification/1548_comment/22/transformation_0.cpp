#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
const int maxn=3e6+10;
const int mod=1e9+7;
const int inv3=(mod+1)/3;
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
int n,m,f[maxn][3],inv[maxn],fac[maxn],ifc[maxn],com[maxn];
int main(){
	n=read(),m=read();
	inv[1]=fac[0]=ifc[0]=com[0]=1;
	for(int i=2;i<=3*n;i++)
		inv[i]=1ll*(mod-mod/i)*inv[mod%i]%mod;
	for(int i=1;i<=3*n;i++)
		fac[i]=1ll*fac[i-1]*i%mod;
	for(int i=1;i<=3*n;i++)
		ifc[i]=1ll*ifc[i-1]*inv[i]%mod;
	for(int i=1;i<=3*n;i++)
		com[i]=1ll*com[i-1]*inv[i]%mod*(3*n-i+1)%mod;
	f[0][0]=f[0][1]=f[0][2]=n;
	for(int i=1;i<=3*n;i++){
		f[i][0]=1ll*((com[i+1]+mod-f[i-1][0])%mod+(mod-f[i-1][0]+mod-f[i-1][1])%mod)%mod*inv3%mod;
		f[i][1]=(f[i-1][0]+f[i][0])%mod;f[i][2]=(f[i-1][1]+f[i][1])%mod;
	}
	for(int i=1,x;i<=m;i++)
		x=read(),printf("%d\n",(com[x]+f[x][0])%mod);
    return 0;
}
//