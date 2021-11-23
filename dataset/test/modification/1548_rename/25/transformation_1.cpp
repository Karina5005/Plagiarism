#include<bits/stdc++.h>
#define int long long
using namespace std;
const int phd=2e5+10;
int T,n,a[phd],b[phd];
struct segment{ int l,r,gcd; }ig_yai[phd<<2];
 
void n_gy(int p,int l,int r){
	ig_yai[p].l=l,ig_yai[p].r=r;
	if(l==r){ ig_yai[p].gcd=b[l]; return; }
	int mid=(l+r)>>1;
	n_gy(p<<1,l,mid),n_gy(p<<1|1,mid+1,r);
	ig_yai[p].gcd=__gcd(ig_yai[p<<1].gcd,ig_yai[p<<1|1].gcd);
}
 
int ask(int p,int l,int r){
	if(l<=ig_yai[p].l&&r>=ig_yai[p].r) return ig_yai[p].gcd;
	int mid=(ig_yai[p].l+ig_yai[p].r)>>1;
	int ret=0;
	if(l<=mid) ret=__gcd(ret,ask(p<<1,l,r));
	if(mid+1<=r) ret=__gcd(ret,ask(p<<1|1,l,r));
	return ret;
}
 
void t(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++) b[i]=abs(a[i]-a[i-1]);
	if(n==1) return (void)(cout<<"1\n");
	n_gy(1,1,n-1);
	int mx=0;
	for(int l=1,r=1;r<n;r++){
		if(ask(1,l,r)>1) mx=max(mx,r-l+1);
		else while(ask(1,l,r)==1) l++;
	}
	cout<<mx+1<<"\n";
}
 
signed main(){
	ios::sync_with_stdio(false);
	for(cin>>T;T;T--) t();
}
