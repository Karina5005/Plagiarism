#include<bits/stdc++.h>
using namespace std;
const int N=3e6+5,mod=1e9+7;
int fac[N],inv[N],f[N],a[N];
void add(int &x,int y){
	x+=y;if(x>=mod) x-=mod;
}
int ksm(int b,int n){
	int res=1;
	while(n){
		if(n&1) res=1ll*res*b%mod;
		b=1ll*b*b%mod; n>>=1;
	}
	return res;
}
int C(int n,int m){
	if(n<m||m<0||n<0) return 0;
	return 1ll*fac[n]*inv[m]%mod*inv[n-m]%mod;
}
void init(int n){
	int m=3*(n+1);
	fac[0]=1;
	{
	int i=1;
	while (i<=m) {
		fac[i]=1ll*fac[i-1]*i%mod;
		++i; 
		
		}}
	inv[m]=ksm(fac[m],mod-2);
	{
	int i=m-1;
	while (i>=0) {
		inv[i]=1ll*inv[i+1]*(i+1)%mod;
		--i; 
		
		}}
	{
	int i=0;
	while (i<=m) {
		f[i]=C(m,i);
		++i; 
		
		}}
	add(f[0],mod-1),add(f[1],mod-3),add(f[2],mod-3),add(f[3],mod-1);
	{
	int i=m;
	while (i>=3) {
		a[i-3]=f[i],f[i]-=a[i-3];
		add(f[i-1],mod-3ll*a[i-3]%mod);
		add(f[i-2],mod-3ll*a[i-3]%mod);
		--i; 
	
	}}
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