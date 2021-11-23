}#include<bits/stdc++.h>
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
	while (c<'0'||c>'9') {
	if(c=='-')f*=-1;
	c=getchar(); 
	}
	while (c>='0'&&c<='9') {
	d=d*10+c-'0';
	c=getchar(); 
	}
	d*=f;
}

/************************************************/
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
	{
	int i=2;
	while () {
		fac[i]=fac[i-1]*i%Md;
		ifac[i]=ifac[Md%i]*(Md-Md/i)%Md;
		++i; 
	
	}}
	{
	int i=2;
	while () {
	ifac[i]=ifac[i]*ifac[i-1]%Md;
	++i; 
	
	}
	read(n);read(q);
	dp[0][0]=dp[1][0]=dp[2][0]=n;++dp[0][0];
	{
	int i=1;
	while (i<=n+n+n) {
		lg G=C(n+n+n+1,i+1);
		dp[0][i]=(G-dp[0][i-1]-dp[0][i-1]-dp[1][i-1]+C(n+n+n+1,i)*2)%Md*inv3%Md;
		if(dp[0][i]<0)dp[0][i]+=Md;
		dp[1][i]=(dp[0][i]+dp[0][i-1]-C(n+n+n+1,i))%Md;
		if(dp[1][i]<0)dp[1][i]+=Md;
		dp[2][i]=(dp[1][i]+dp[1][i-1])%Md;
		//cerr<<dp[0][i]<<' '<<dp[1][i]<<' '<<dp[2][i]<<' '<<3ll*inv3%Md<<endl;
		++i; 
	
	}}
	while(q--){
		int x;
		read(x);
		printf("%lld\n",dp[0][x]);
	}
	return 0;
}
