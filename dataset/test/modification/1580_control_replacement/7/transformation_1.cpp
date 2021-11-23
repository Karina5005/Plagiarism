#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
using namespace std;
int Read()
{
	char c=getchar();
	while (c<'0'||c>'9') c=getchar();
	int t=c-'0'; c=getchar();
	while (c>='0'&&c<='9') t=(t<<3)+(t<<1)+c-'0',c=getchar();
	return t;
}
int n,m,k;
long long Jie[101];
long long M;
long long f[101][101][101];
long long c[101][101];
struct Node
{
	int x,y;
	long long z;
	Node(int a=0,int b=0,long long c=0): x(a),y(b),z(c) {}
}a[10001];
int cnt;
int main()
{
	scanf("%d%d%d%lld",&n,&m,&k,&M);
	Jie[0]=1;
	{
	int i=1;
	while (i<=n) {
	Jie[i]=Jie[i-1]*i%M;
	i++; 
	
	}}
	c[0][0]=1;
	{
	int i=1;
	while (i<=100) {
		c[i][0]=1;
		{
		int j=1;
		while (j<=i) {
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%M;
			j++; 
		
		}}
		i++; 
	
	}}
	f[1][0][0]=1;
	{
	int i=1;
	while (i<=n) {
		f[1][i][1]=Jie[i];
		i++; 
	
	}}
	{
	int i=2;
	while (i<=m) {
//		f[i][0][0]=1;
//		for (int x=0;x<=n;x++)
//		{
//			for (int y=0;y<=k;y++)
//			{
//				for (int p=0;p<=x-1;p++)
//				{
//					for (int q=0;q<=y;q++)
//					{
//						f[i][x][y]+=f[i-1][p][q]*f[i-1][x-1-p][y-q]%M*c[x-1][p]%M;
//						if (f[i][x][y]>=M) f[i][x][y]-=M;
//					}
//				}
//			}
//		}
//		printf("!%d\n",i);
		cnt=0;
		f[i][0][0]=1;
		{
		int x=0;
		while (x<=n) {
			{
			int y=0;
			while (y<=k) {
//				printf("!n%d k%d m%d %lld\n",x,y,i-1,f[i-1][x][y]);
				if (f[i-1][x][y]) a[++cnt]=Node(x,y,f[i-1][x][y]);
				y++; 
			
			}}
			x++; 
		
		}}
		{
		int p=1;
		while (p<=cnt) {
			{
			int q=1;
			while (q<=cnt) {
				if (a[p].x+a[q].x+1>n) i++; p++; q++; continue;
				if (a[p].y+a[q].y>k) i++; p++; q++; continue;
				f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]+=a[p].z*a[q].z%M*c[a[p].x+a[q].x][a[p].x]%M;
				if (f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]>=M)
				{
					f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]-=M;
				}
				q++; 
			
			}}
			p++; 
		
		}}
		i++; 
	
	}}
	printf("%lld",f[m][n][k]);
	return 0;
}