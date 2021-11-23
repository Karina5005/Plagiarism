#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int T,n,a[N],b[N];
struct segment{ int l,r,gcd; }tree[N<<2];
 
void build(int p,int l,int r){
	tree[p].l=l,tree[p].r=r;
	/* 'if' begin */
	if(l==r)/* 'if' inside */
	{ tree[p].gcd=b[l]; return; }
	int mid=(l+r)>>1;
	build(p<<1,l,mid),build(p<<1|1,mid+1,r);
	tree[p].gcd=__gcd(tree[p<<1].gcd,tree[p<<1|1].gcd);
}
 
int ask(int p,int l,int r){
	/* 'if' begin */
	if(l<=tree[p].l&&r>=tree[p].r) /* 'if' inside */
	return tree[p].gcd;
	int mid=(tree[p].l+tree[p].r)>>1;
	int ret=0;
	/* 'if' begin */
	if(l<=mid) /* 'if' inside */
	ret=__gcd(ret,ask(p<<1,l,r));
	/* 'if' begin */
	if(mid+1<=r) /* 'if' inside */
	ret=__gcd(ret,ask(p<<1|1,l,r));
	return ret;
}
 
void solve(){
	cin>>n;
	for(int i=0;i<n;i++) /* 'for' inside */
	cin>>a[i];
	for(int i=1;i<n;i++) /* 'for' inside */
	b[i]=abs(a[i]-a[i-1]);
	/* 'if' begin */
	if(n==1) /* 'if' inside */
	return (void)(cout<<"1\n");
	build(1,1,n-1);
	int mx=0;
	for(int l=1,r=1;r<n;r++)/* 'for' inside */
	{
		/* 'if' begin */
		if(ask(1,l,r)>1) /* 'if' inside */
		mx=max(mx,r-l+1);
		else while(ask(1,l,r)==1) l++;
	}
	cout<<mx+1<<"\n";
}
 
signed main(){
	ios::sync_with_stdio(false);
	for(cin>>T;T;T--) /* 'for' inside */
	solve();
}
