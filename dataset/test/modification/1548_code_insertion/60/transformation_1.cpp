#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
const int N=3e6+10;
const int p=1e9+7;
int n,q;
int inv[N];
int f[N][3];
int fac[N],Inv[N];
int C(int n,int m)
{
	return fac[n]*Inv[m]%p*Inv[n-m]%p;
}
signed main()
{
	inv[1]=1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=2;i<N;i++)
		inv[i]=((-p/i*inv[p%i])%p+p)%p;
	fac[0]=1,Inv[0]=1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<N;i++)
	{
		fac[i]=fac[i-1]*i%p;
		Inv[i]=Inv[i-1]*inv[i]%p;
	}
	scanf("%lld%lld",&n,&q);
	f[0][0]=f[0][1]=f[0][2]=n+1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=3*n;i++)
	{
		f[i][0]=C(3*n+3,i+1)-2*f[i-1][0]-f[i-1][1];
		f[i][0]*=inv[3],f[i][0]%=p;
		f[i][0]+=p,f[i][0]%=p;
		f[i][1]=(f[i][0]+f[i-1][0])%p;
		f[i][2]=(f[i][1]+f[i-1][1])%p;
	}
	while(q--)
	{
		int x;
		scanf("%lld",&x);
		printf("%lld\n",f[x][0]);
	}
	return 0;
}