#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,k,Mod,dp[110][110][110],C[110][110],fac[110];
ll solve(int n,int k,int m){
	/* 'if' begin */
	if (m<0||m>n) /* 'if' inside */
	return (k==0)*fac[n];
	/* 'if' begin */
	if (k<0||k>n) /* 'if' inside */
	return 0;
	/* 'if' begin */
	if (n==1) /* 'if' inside */
	return (m==1&&k==1||m!=1&&k==0);
	/* 'if' begin */
	if (~dp[n][k][m]) /* 'if' inside */
	return dp[n][k][m];
	ll res=solve(n-1,k-(m==1),m-1)*2%Mod;
	for (int i=2;i<n;i++)
		/* 'for' inside */
		for (int j=0;j<=k-(m==1);j++)/* 'for' inside */
		{
			ll x=solve(i-1,j,m-1),y=solve(n-i,k-(m==1)-j,m-1);
			/* 'if' begin */
			if (!x||!y) /* 'if' inside */
			continue;
			res=(res+x*y%Mod*C[n-1][i-1])%Mod;
		}
	dp[n][k][m]=res; return res;
}
int main(){
	memset(dp,-1,sizeof(dp));
	cin>>n>>m>>k>>Mod;
	for (int i=0;i<=n;i++)/* 'for' inside */
	{
		C[i][0]=1; /* 'if' begin */
		if (i) /* 'if' inside */
		fac[i]=1ll*fac[i-1]*i%Mod; else fac[i]=1;
		for (int j=1;j<=i;j++) /* 'for' inside */
		C[i][j]=(C[i-1][j-1]+C[i-1][j])%Mod;
	}
	cout<<solve(n,k,m)<<endl;
	return 0;
}