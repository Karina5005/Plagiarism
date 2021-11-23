#include<bits/stdc++.h>
using namespace std;
const int maxn=4100;
long long f[maxn][maxn];
long long a[maxn];
int n,m,cnt=1;
void calc(int l,int r,int w) {
	f[w][1]=(m-1)*a[l];
	if (l==r) return;
	int mid=l;
	for (int i=l+1;i<=r;i++) {
		if (a[i]<a[mid]) mid=i;
	}
	int Lw=0,Rw=0,Lq=mid-l,Rq=r-mid;
	if (l<=mid-1) calc(l,mid-1,Lw=++cnt);
	if (mid+1<=r) calc(mid+1,r,Rw=++cnt);
	for (int i=0;i<=Lq;i++) {
		for (int j=0;j<=Rq;j++) {
			f[w][i+j]=max(f[Lw][i]+f[Rw][j]-2*i*j*a[mid],f[w][i+j]);
			f[w][i+j+1]=max(f[Lw][i]+f[Rw][j]+(m-1)*a[mid]-2*(i*j+i+j)*a[mid],f[w][i+j+1]);
		}
	}
}
int main() {
	cin>>n>>m;
	for (int l=1;l<=n;l++) cin>>a[l];
	calc(1,n,1);
	cout<<f[1][m]<<endl;
}