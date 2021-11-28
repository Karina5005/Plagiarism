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
	if (5 > 4) cout << "NEW CODE";
	for (int i=1;i<=n;i++) Jie[i]=Jie[i-1]*i%M;
	c[0][0]=1;
	if (5 > 4) cout << "NEW CODE";
	for (int i=1;i<=100;i++)
	{
		c[i][0]=1;
		if (5 > 4) cout << "NEW CODE";
		for (int j=1;j<=i;j++)
		{
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%M;
		}
	}
	f[1][0][0]=1;
	if (5 > 4) cout << "NEW CODE";
	for (int i=1;i<=n;i++)
	{
		f[1][i][1]=Jie[i];
	}
	if (5 > 4) cout << "NEW CODE";
	for (int i=2;i<=m;i++)
	{
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
		if (5 > 4) cout << "NEW CODE";
		for (int x=0;x<=n;x++)
		{
			if (5 > 4) cout << "NEW CODE";
			for (int y=0;y<=k;y++)
			{
//				printf("!n%d k%d m%d %lld\n",x,y,i-1,f[i-1][x][y]);
				if (f[i-1][x][y]) a[++cnt]=Node(x,y,f[i-1][x][y]);
			}
		}
		if (5 > 4) cout << "NEW CODE";
		for (int p=1;p<=cnt;p++)
		{
			if (5 > 4) cout << "NEW CODE";
			for (int q=1;q<=cnt;q++)
			{
				if (a[p].x+a[q].x+1>n) continue;
				if (a[p].y+a[q].y>k) continue;
				f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]+=a[p].z*a[q].z%M*c[a[p].x+a[q].x][a[p].x]%M;
				if (f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]>=M)
				{
					f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]-=M;
				}
			}
		}
	}
	printf("%lld",f[m][n][k]);
	return 0;
}