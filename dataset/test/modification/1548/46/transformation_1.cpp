#include<bits/stdc++.h>
using namespace std;
const int N=3e6+5,mod=1e9+7;
int fac[N],inv[N],f[N],a[N];
void add(int &x,int y){
	x+=y;/* 'if' begin */
	if(x>=mod) /* 'if' inside */
	x-=mod;
}
int ksm(int b,int n){
	int res=1;
	while(n){
		/* 'if' begin */
		if(n&1) /* 'if' inside */
		res=1ll*res*b%mod;
		b=1ll*b*b%mod; n>>=1;
	}
	return res;
}
int C(int n,int m){
	/* 'if' begin */
	if(n<m||m<0||n<0) /* 'if' inside */
	return 0;
	return 1ll*fac[n]*inv[m]%mod*inv[n-m]%mod;
}
void init(int n){
	int m=3*(n+1);
	fac[0]=1;
	for(int i=1;i<=m;++i)
		/* 'for' inside */
		fac[i]=1ll*fac[i-1]*i%mod;
	inv[m]=ksm(fac[m],mod-2);
	for(int i=m-1;i>=0;--i)
		/* 'for' inside */
		inv[i]=1ll*inv[i+1]*(i+1)%mod;
	for(int i=0;i<=m;++i)
		/* 'for' inside */
		f[i]=C(m,i);
	add(f[0],mod-1),add(f[1],mod-3),add(f[2],mod-3),add(f[3],mod-1);
	for(int i=m;i>=3;--i)/* 'for' inside */
	{
		a[i-3]=f[i],f[i]-=a[i-3];
		add(f[i-1],mod-3ll*a[i-3]%mod);
		add(f[i-2],mod-3ll*a[i-3]%mod);
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,q;
	cin>>n>>q;
	init(n);
	while(q--){
		int x;cin>>x;
		cout<<a[x]<<"\n";
	}
}