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
	for (int i=1;i<=n;i++) /* 'for' inside */
	Jie[i]=Jie[i-1]*i%M;
	c[0][0]=1;
	for (int i=1;i<=100;i++)
	/* 'for' inside */
	{
		c[i][0]=1;
		for (int j=1;j<=i;j++)
		/* 'for' inside */
		{
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%M;
		}
	}
	f[1][0][0]=1;
	for (int i=1;i<=n;i++)
	/* 'for' inside */
	{
		f[1][i][1]=Jie[i];
	}
	for (int i=2;i<=m;i++)
	/* 'for' inside */
	{

		cnt=0;
		f[i][0][0]=1;
		for (int x=0;x<=n;x++)
		/* 'for' inside */
		{
			for (int y=0;y<=k;y++)
			/* 'for' inside */
			{

				/* 'if' begin */
				if (f[i-1][x][y]) /* 'if' inside */
				a[++cnt]=Node(x,y,f[i-1][x][y]);
			}
		}
		for (int p=1;p<=cnt;p++)
		/* 'for' inside */
		{
			for (int q=1;q<=cnt;q++)
			/* 'for' inside */
			{
				/* 'if' begin */
				if (a[p].x+a[q].x+1>n) /* 'if' inside */
				continue;
				/* 'if' begin */
				if (a[p].y+a[q].y>k) /* 'if' inside */
				continue;
				f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]+=a[p].z*a[q].z%M*c[a[p].x+a[q].x][a[p].x]%M;
				/* 'if' begin */
				if (f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]>=M)
				/* 'if' inside */
				{
					f[i][a[p].x+a[q].x+1][a[p].y+a[q].y]-=M;
				}
			}
		}
	}
	printf("%lld",f[m][n][k]);
	return 0;
}