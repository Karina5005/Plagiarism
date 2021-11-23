#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,t;
long long int a[N],ca[N];
long long int gcd(long long int x,long long int y){
	/* 'if' begin */
	if(y==0)/* 'if' inside */
	return x;
	return gcd(y,x%y);
}

int Log[N];
long long int st[N][20];
void ST(){
	Log[0]=-1;
	for(int i=1;i<=n-1;i++)/* 'for' inside */
	Log[i]=Log[i>>1]+1;
	for(int i=1;i<=n-1;i++)/* 'for' inside */
	st[i][0]=ca[i];
	for(int j=1;(1<<j)<=n-1;j++)/* 'for' inside */
	{
		for(int i=1;i+(1<<j)-1<=n-1;i++)/* 'for' inside */
		{
			st[i][j]=gcd(st[i][j-1],st[i+(1<<(j-1))][j-1]);
		}
	}
}
long long int query(int l,int r){
	int k=Log[r-l+1];
	return gcd(st[l][k],st[r-(1<<k)+1][k]);
}
bool check(int x){
	/* 'if' begin */
	if(x==n)/* 'if' inside */
	return 0;
	for(int i=1;i+x-1<=n-1;i++)/* 'for' inside */
	{
		/* 'if' begin */
		if(query(i,i+x-1)!=1)/* 'if' inside */
		return 1;
	}
	return 0;
}
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)/* 'for' inside */
		{
			scanf("%lld",&a[i]);
			ca[i-1]=abs(a[i]-a[i-1]);

		}

		ST();
		int l=1,r=n-1,mid;
		while(l<r){
			mid=(l+r)>>1;
			/* 'if' begin */
			if(check(mid))/* 'if' inside */
			l=mid+1;
			else r=mid;
		}
		/* 'if' begin */
		if(check(l+1))/* 'if' inside */
		printf("%d\n",l+2);
		else /* 'if' begin */
		if(check(l))/* 'if' inside */
		printf("%d\n",l+1);
		else printf("%d\n",l);
	}
}