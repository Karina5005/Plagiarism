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
void read(_T_& d){
	d=0;int f=1;char c=getchar();
	for(;c<'0'||c>'9';c=getchar())/* 'for' inside */
	/* 'if' begin */
	if(c=='-')/* 'if' inside */
	f*=-1;
	for(;c>='0'&&c<='9';c=getchar())/* 'for' inside */
	d=d*10+c-'0';
	d*=f;
}


#define Md 1000000007
#define MN 3000005
#define inv3 333333336
lg fac[MN],ifac[MN];
int n;
lg C(int x,int y){
	return fac[x]*ifac[y]%Md*ifac[x-y]%Md;
}
lg dp[3][MN];
int q;
int main(){
	fac[0]=ifac[0]=1;
	fac[1]=ifac[1]=1;
	for(int i=2;i<MN;++i)/* 'for' inside */
	{
		fac[i]=fac[i-1]*i%Md;
		ifac[i]=ifac[Md%i]*(Md-Md/i)%Md;
	}
	for(int i=2;i<MN;++i)/* 'for' inside */
	ifac[i]=ifac[i]*ifac[i-1]%Md;
	read(n);read(q);
	dp[0][0]=dp[1][0]=dp[2][0]=n;++dp[0][0];
	for(int i=1;i<=n+n+n;++i)/* 'for' inside */
	{
		lg G=C(n+n+n+1,i+1);
		dp[0][i]=(G-dp[0][i-1]-dp[0][i-1]-dp[1][i-1]+C(n+n+n+1,i)*2)%Md*inv3%Md;
		/* 'if' begin */
		if(dp[0][i]<0)/* 'if' inside */
		dp[0][i]+=Md;
		dp[1][i]=(dp[0][i]+dp[0][i-1]-C(n+n+n+1,i))%Md;
		/* 'if' begin */
		if(dp[1][i]<0)/* 'if' inside */
		dp[1][i]+=Md;
		dp[2][i]=(dp[1][i]+dp[1][i-1])%Md;
		
	}
	while(q--){
		int x;
		read(x);
		printf("%lld\n",dp[0][x]);
	}
	return 0;
}
