// Problem: B. Integers Have Friends
// Contest: Codeforces - Codeforces Round #736 (Div. 1)
// URL: http://codeforces.com/problemset/problem/1548/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define pb push_back
#define sz(a) int(a.size())
using namespace std;
typedef long long ll;

ll read() {
	char ch=getchar();ll x=0,f=1;
	while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') {x=x*10+ch-'0';ch=getchar();}
	return x*f;
}

const int N=2e5+5;

ll p[N];
int n;

ll gcd(ll a,ll b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

struct seg_tr {
	struct node {
		ll val;
	}a[N*4];//åºé´é¿åº¦4åã
	void pu(int o) {
		a[o].val=gcd(a[2*o].val,a[2*o+1].val);
	}
	void build(int o,ll l,ll r) {
		if(l==r) {a[o].val=p[l];return;}
		ll mid=(l+r)>>1;
		build(2*o,l,mid);
		build(2*o+1,mid+1,r);
		pu(o);
	}
	ll ask(int o,ll L,ll R,ll l,ll r) {
		if(l>=L&&r<=R) return a[o].val;
		ll res=0,mid=(l+r)>>1;
		if(L<=mid) res=gcd(res,ask(2*o,L,R,l,mid));
		if(R>=mid+1) res=gcd(res,ask(2*o+1,L,R,mid+1,r));
		return res;
	}
	void modi(int o,ll x,ll pos,ll l,ll r) {
		if(l==r) {a[o].val=x;return;}
		ll mid=(l+r)>>1;
		if(!(pos<=mid)) modi(2*o+1,x,pos,mid+1,r);
		else modi(2*o,x,pos,l,mid);
		pu(o);
	}
	ll upp(int o,ll x,ll l,ll r) {
		if(l==r) return l;
		ll mid=(l+r)>>1;
		if(gcd(a[2*o].val,x)==1) return upp(2*o,x,l,mid);
		return upp(2*o+1,gcd(a[2*o].val,x),mid+1,r);
	}
}tr;

int main() {
	int T=read();
	while(T--) {
		n=read();
		{
		int i=1;
		while (i<=n) {
		p[i]=read();
		i++; 
		
		}}
		{
		int i=n;
		while (i>=2) {
			p[i]=abs(p[i]-p[i-1]);
			i--; 
		
		}}
		if(n==1) {printf("1\n");continue;}
		tr.build(1,2,n);
		int ans=1;
		{
		int i=2;
		while (i<=n) {
			int res=tr.upp(1,0,2,n);
			if(tr.ask(1,2,res,2,n)==1) res--;
			ans=max(ans,res-i+1+1);
			tr.modi(1,0,i,2,n);
			i++; 
		
		}}
		printf("%d\n",ans);
	}
	return 0;
}
