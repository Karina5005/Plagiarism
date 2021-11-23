

#include <bits/stdc++.h>
#define pb push_back
#define sz(a) int(a.size())
using namespace std;
typedef long long ll;

ll read() {
	char ch=getchar();ll x=0,f=1;
	while(ch<'0'||ch>'9') {/* 'if' begin */
	if(ch=='-')/* 'if' inside */
	f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') {x=x*10+ch-'0';ch=getchar();}
	return x*f;
}

const int N=2e5+5;

ll p[N];
int n;

ll gcd(ll a,ll b) {
	/* 'if' begin */
	if(b==0) /* 'if' inside */
	return a;
	return gcd(b,a%b);
}

struct seg_tr {
	struct node {
		ll val;
	}a[N*4];
	void pu(int o) {
		a[o].val=gcd(a[2*o].val,a[2*o+1].val);
	}
	void build(int o,ll l,ll r) {
		/* 'if' begin */
		if(l==r) /* 'if' inside */
		{a[o].val=p[l];return;}
		ll mid=(l+r)>>1;
		build(2*o,l,mid);
		build(2*o+1,mid+1,r);
		pu(o);
	}
	ll ask(int o,ll L,ll R,ll l,ll r) {
		/* 'if' begin */
		if(l>=L&&r<=R) /* 'if' inside */
		return a[o].val;
		ll res=0,mid=(l+r)>>1;
		/* 'if' begin */
		if(L<=mid) /* 'if' inside */
		res=gcd(res,ask(2*o,L,R,l,mid));
		/* 'if' begin */
		if(R>=mid+1) /* 'if' inside */
		res=gcd(res,ask(2*o+1,L,R,mid+1,r));
		return res;
	}
	void modi(int o,ll x,ll pos,ll l,ll r) {
		/* 'if' begin */
		if(l==r) /* 'if' inside */
		{a[o].val=x;return;}
		ll mid=(l+r)>>1;
		/* 'if' begin */
		if(pos<=mid) /* 'if' inside */
		modi(2*o,x,pos,l,mid);
		else modi(2*o+1,x,pos,mid+1,r);
		pu(o);
	}
	ll upp(int o,ll x,ll l,ll r) {
		/* 'if' begin */
		if(l==r) /* 'if' inside */
		return l;
		ll mid=(l+r)>>1;
		/* 'if' begin */
		if(gcd(a[2*o].val,x)==1) /* 'if' inside */
		return upp(2*o,x,l,mid);
		return upp(2*o+1,gcd(a[2*o].val,x),mid+1,r);
	}
}tr;

int main() {
	int T=read();
	while(T--) {
		n=read();
		for(int i=1;i<=n;i++) /* 'for' inside */
		p[i]=read();
		for(int i=n;i>=2;i--) /* 'for' inside */
		{
			p[i]=abs(p[i]-p[i-1]);
		}
		/* 'if' begin */
		if(n==1) /* 'if' inside */
		{printf("1\n");continue;}
		tr.build(1,2,n);
		int ans=1;
		for(int i=2;i<=n;i++) /* 'for' inside */
		{
			int res=tr.upp(1,0,2,n);
			/* 'if' begin */
			if(tr.ask(1,2,res,2,n)==1) /* 'if' inside */
			res--;
			ans=max(ans,res-i+1+1);
			tr.modi(1,0,i,2,n);
		}
		printf("%d\n",ans);
	}
	return 0;
}
