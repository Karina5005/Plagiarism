#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define DEBUG printf("Passed line #%d in function [%s].\n",__LINE__,__FUNCTION__)
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,j,k) for(register int i=j;i<=k;i++)
inline ll read(){
	ll s=0,w=1;char ch=getchar();
	while(ch<'0'||ch>'9'){/* 'if' begin */
	if(ch=='-')/* 'if' inside */
	w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

#define N 200010
#define mid (l+r>>1)
#define ls (rt<<1)
#define rs (rt<<1|1)
int n,ans;
ll t[N][20];
inline ll gcd(ll x,ll y){
	/* 'if' begin */
	if(x<y) /* 'if' inside */
	swap(x,y);
	/* 'if' begin */
	if(y==0) /* 'if' inside */
	return x;
	return gcd(y,x%y);
}
ll query(int l,int r){
	int len=r-l+1;
	int tmp=0;
	while((1<<(tmp+1))<=len) tmp++;
	return gcd(t[l][tmp],t[r-(1<<tmp)+1][tmp]);
}
bool check(int len){
	For(i,1,n-len+1){
		/* 'if' begin */
		if(query(i,i+len-1)>1) /* 'if' inside */
		return true;
	}
	return false;
}
void work(){
	n=read()-1;
	ll lst=read();
	ll now;
	For(i,1,n){
		now=read();
		t[i][0]=abs(now-lst);
		lst=now;
	}
	For(j,1,19){
		now=(1<<j);
		/* 'if' begin */
		if(now>n) /* 'if' inside */
		break;
		For(i,1,n-now+1)
			t[i][j]=gcd(t[i][j-1],t[i+(now>>1)][j-1]);
	}
	int l=1,r=n;
	ans=0;
	while(l<=r){
		/* 'if' begin */
		if(check(mid))/* 'if' inside */
		{
			ans=mid;
			l=mid+1;
		}else r=mid-1;
	}
	cout<<ans+1<<'\n';
}
signed main(){
	int T=read();
	while(T--) work(); 
    return 0;
}

