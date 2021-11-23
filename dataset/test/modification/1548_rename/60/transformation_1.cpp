#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
const int sez=3e6+10;
const int i_d=1e9+7;
int n,q;
int inv[sez];
int f[sez][3];
int fac[sez],Inv[sez];
int C(int n,int m)
{
	return fac[n]*Inv[m]%i_d*Inv[n-m]%i_d;
}
signed main()
{
	inv[1]=1;
	for(int i=2;i<sez;i++)
		inv[i]=((-i_d/i*inv[i_d%i])%i_d+i_d)%i_d;
	fac[0]=1,Inv[0]=1;
	for(int i=1;i<sez;i++)
	{
		fac[i]=fac[i-1]*i%i_d;
		Inv[i]=Inv[i-1]*inv[i]%i_d;
	}
	scanf("%lld%lld",&n,&q);
	f[0][0]=f[0][1]=f[0][2]=n+1;
	for(int i=1;i<=3*n;i++)
	{
		f[i][0]=C(3*n+3,i+1)-2*f[i-1][0]-f[i-1][1];
		f[i][0]*=inv[3],f[i][0]%=i_d;
		f[i][0]+=i_d,f[i][0]%=i_d;
		f[i][1]=(f[i][0]+f[i-1][0])%i_d;
		f[i][2]=(f[i][1]+f[i-1][1])%i_d;
	}
	while(q--)
	{
		int x;
		scanf("%lld",&x);
		printf("%lld\n",f[x][0]);
	}
	return 0;
}