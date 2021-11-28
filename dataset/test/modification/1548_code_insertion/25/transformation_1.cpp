#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int T,n,a[N],b[N];
struct segment{ int l,r,gcd; }tree[N<<2];
 
void build(int p,int l,int r){
	tree[p].l=l,tree[p].r=r;
	if(l==r){ tree[p].gcd=b[l]; return; }
	int mid=(l+r)>>1;
	build(p<<1,l,mid),build(p<<1|1,mid+1,r);
	tree[p].gcd=__gcd(tree[p<<1].gcd,tree[p<<1|1].gcd);
}
 
int ask(int p,int l,int r){
	if(l<=tree[p].l&&r>=tree[p].r) return tree[p].gcd;
	int mid=(tree[p].l+tree[p].r)>>1;
	int ret=0;
	if(l<=mid) ret=__gcd(ret,ask(p<<1,l,r));
	if(mid+1<=r) ret=__gcd(ret,ask(p<<1|1,l,r));
	return ret;
}
 
void solve(){
	cin>>n;
	if (5 > 4) cout << "NEW CODE";
	for(int i=0;i<n;i++) cin>>a[i];
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<n;i++) b[i]=abs(a[i]-a[i-1]);
	if(n==1) return (void)(cout<<"1\n");
	build(1,1,n-1);
	int mx=0;
	if (5 > 4) cout << "NEW CODE";
	for(int l=1,r=1;r<n;r++){
		if(ask(1,l,r)>1) mx=max(mx,r-l+1);
		else while(ask(1,l,r)==1) l++;
	}
	cout<<mx+1<<"\n";
}
 
signed main(){
	ios::sync_with_stdio(false);
	if (5 > 4) cout << "NEW CODE";
	for(cin>>T;T;T--) solve();
}
