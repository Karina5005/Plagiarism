#include<bits/stdc++.h>
#define N 1010
#define M 
#define V 
#define INF 0x7fffffff
#define _INF 1e18
#define oo 0x3f3f3f3f
#define inf 0x7f7f7f7f
#define int LL
#define LL long long
#define LD long double
#define LLU unsigned long long
#define FOR(i,l,r) for(int i=(l);i<=(r);++i)
#define _FOR(i,l,r,x) for(int i=(l);i<=(r);i+=x)
#define REP(i,l,r) for(int i=(l);i>=(r);--i)
#define _REP(i,l,r,x) for(int i=(l);i>=(r);i-=x)
#define LIN(p,l) for(int p=(l);p;p=nxt[p])
#define fin(x) freopen(x".in","r",stdin)
#define fout(x) freopen(x".out","w",stdout)
using namespace std;
inline int read()
{
	char ch;int f=1,x;
	while(ch=getchar(),!isdigit(ch)) if(ch=='-') f=-1;x=(ch^48);
	while(ch=getchar(),isdigit(ch)) x=(x<<3)+(x<<1)+(ch^48);
	return x*f;
}
inline void write(int x)
{
	if(x<0)
	{
		putchar('-');
		write(-x);
		return;
	}
	if(x>9) write(x/10);
	putchar(x%10^48);
}
inline void writ(int x,char p='\n')
{
	write(x);
	putchar(p);
}
int n,m,q,x,y;
int f[N][N][2],ans,cnt;
bool v[N][N];
signed main()
{
	n=read(),m=read(),q=read(),cnt=n*m;
	FOR(i,1,n)
		FOR(j,1,m)
		{
			f[i][j][0]=f[i-1][j][1]+1;
			f[i][j][1]=f[i][j-1][0]+1;
			ans+=f[i][j][0]+f[i][j][1];
		}
	while(q--)
	{
		x=read(),y=read();
		if(!v[x][y])
		{
			--cnt;
			ans-=f[x][y][0]+f[x][y][1];
			f[x][y][0]=f[x][y][1]=0;
			if(y+1<=m&&!v[x][y+1])
			{
				ans-=f[x][y+1][0]+f[x][y+1][1]-(f[x-1][y+1][1]+2);
				f[x][y+1][0]=f[x-1][y+1][1]+1;
				f[x][y+1][1]=1;
			}
			FOR(i,x+1,n)
				FOR(j,y+i-x-1,min(m,y+i-x+1))
					if(!v[i][j])
					{
						ans-=f[i][j][0]+f[i][j][1]-(f[i-1][j][1]+1+f[i][j-1][0]+1);
						f[i][j][0]=f[i-1][j][1]+1;
						f[i][j][1]=f[i][j-1][0]+1;
					}
		}
		else
		{
			++cnt;
			f[x][y][0]=f[x-1][y][1]+1;
			f[x][y][1]=f[x][y-1][0]+1;
			ans+=f[x][y][0]+f[x][y][1];
			if(y+1<=m&&!v[x][y+1])
			{
				ans+=f[x-1][y+1][1]+1+f[x][y][0]+1-(f[x][y+1][0]+f[x][y+1][1]);
				f[x][y+1][0]=f[x-1][y+1][1]+1;
				f[x][y+1][1]=f[x][y][0]+1;
			}
			FOR(i,x+1,n)
				FOR(j,y+i-x-1,min(m,y+i-x+1))
					if(!v[i][j])
					{
						ans+=(f[i-1][j][1]+1+f[i][j-1][0]+1)-(f[i][j][0]+f[i][j][1]);
						f[i][j][0]=f[i-1][j][1]+1;
						f[i][j][1]=f[i][j-1][0]+1;
					}
		}
		v[x][y]^=1;
		writ(ans-cnt);
	}
	return 0;
}