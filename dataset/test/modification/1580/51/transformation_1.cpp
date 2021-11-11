#include<bits/stdc++.h>
using namespace std;
const int maxn=4100;
long long f[maxn][maxn];
long long a[maxn];
int n,m,cnt=1;
void calc(int l,int r,int w) {
	f[w][1]=(m-1)*a[l];
	/* 'if' begin */
	if (l==r) /* 'if' inside */
	return;
	int mid=l;
	for (int i=l+1;i<=r;i++) /* 'for' inside */
	{
		/* 'if' begin */
		if (a[i]<a[mid]) /* 'if' inside */
		mid=i;
	}
	int Lw=0,Rw=0,Lq=mid-l,Rq=r-mid;
	/* 'if' begin */
	if (l<=mid-1) /* 'if' inside */
	calc(l,mid-1,Lw=++cnt);
	/* 'if' begin */
	if (mid+1<=r) /* 'if' inside */
	calc(mid+1,r,Rw=++cnt);
	for (int i=0;i<=Lq;i++) /* 'for' inside */
	{
		for (int j=0;j<=Rq;j++) /* 'for' inside */
		{
			f[w][i+j]=max(f[Lw][i]+f[Rw][j]-2*i*j*a[mid],f[w][i+j]);
			f[w][i+j+1]=max(f[Lw][i]+f[Rw][j]+(m-1)*a[mid]-2*(i*j+i+j)*a[mid],f[w][i+j+1]);
		}
	}
}
int main() {
	cin>>n>>m;
	for (int l=1;l<=n;l++) /* 'for' inside */
	cin>>a[l];
	calc(1,n,1);
	cout<<f[1][m]<<endl;
}