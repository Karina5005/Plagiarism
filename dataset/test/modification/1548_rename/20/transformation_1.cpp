//QwQcOrZ yyds!!!
#include<bits/stdc++.h>
#define ll long long
#define F(i,a,b) for (int i=(a);i<=(b);i++)
#define R(i,a,b) for (int i=(a);i<(b);i++)
#define D(i,a,b) for (int i=(a);i>=(b);i--)
#define go(i,x) for (int i=head[x];i;i=e[i].nx)
#define IOS ios::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
#define pa pair < int,int >
#define fi first
#define se second
#define re register
#define be begin()
#define en end()
#define sqr(x) ((x)*(x))
#define ret return puts("-1"),0;
#define put putchar('\n')
#define inf 1000000005
#define mod 998244353
#define int ll
#define N 200005
#define lowbit(x) (x&-x)
using namespace std;
inline char kpk_xz(){static char wm_k[1000000],*ll=wm_k,*fys_ag=wm_k;return ll==fys_ag&&(fys_ag=(ll=wm_k)+fread(wm_k,1,1000000,stdin),ll==fys_ag)?EOF:*ll++;}
#define gc getchar
inline ll sh(){char i=gc();ll su=0,f=1;for (;i<'0'||i>'9';i=gc()) if (i=='-') f=-1;for (;i>='0'&&i<='9';i=gc()) su=su*10+i-'0';return su*f;}
inline void zzp_mrx(ll x){if (x<0){putchar('-');zzp_mrx(-x);return;}if (x>=10) zzp_mrx(x/10);putchar(x%10+'0');}
inline void ni(ll x){zzp_mrx(x),putchar(' ');}
inline void g(ll x){zzp_mrx(x);putchar('\n');}
int n,m;
int a[N],b[N],c[N],d[N],sta[N][25],stb[N][25],sck[N];
int k,ans;
int tp;
vector<pair<pa,int>>x;
bool wlk(pair<pa,int> au,pair<pa,int> gp)
{
	return au.fi.se-au.fi.fi>gp.fi.se-gp.fi.fi;
}
struct
{
	int c[N],P;
	void x(int x)
	{
		P=x;
		memset(c,0,sizeof(c));
	}
	void fb_t(int x,int y)
	{
		while (x<=P)
		{
			c[x]+=y;
			x+=lowbit(x);
		}
	}
	int query(int x)
	{
		if (x<=0) return 0;
		int res=0;
		while (x)
		{
			res+=c[x];
			x-=lowbit(x);
		}
		return res;
	}
}kx_tp[2];
int querya(int x,int y)
{
	if (x>y) return inf;
	int t=log2(y-x+1);
	return max(sta[x][t],sta[y-(1<<t)+1][t]);
}
int queryb(int x,int y)
{
	if (x>y) return inf;
	int t=log2(y-x+1);
	return max(stb[x][t],stb[y-(1<<t)+1][t]);
}
signed main()
{
	n=sh();m=sh();k=sh();
	for (int i=1;i<=n;i++)
		a[i]=sh(),sta[i][0]=a[i];
	for (int i=1;i<=m;i++)	
		b[i]=sh(),stb[i][0]=b[i];
	for (int i=1;i<=20;i++)
		for (int j=1;j+(1ll<<i)-1<=n;j++)
			sta[j][i]=max(sta[j][i-1],sta[j+(1ll<<(i-1))][i-1]);
	
	for (int i=1;i<=20;i++)
	{
		for (int j=1;j+(1ll<<i)-1<=m;j++)
		{
			stb[j][i]=max(stb[j][i-1],stb[j+(1ll<<(i-1))][i-1]);
		}
	}
//	return 0;
	tp=0;
	for (int i=1;i<=n;i++)
	{
		c[i]=inf;
		while (tp&&a[sck[tp]]>=a[i]) tp--;
		if (tp)
		{
			c[i]=min(c[i],querya(sck[tp]+1,i));
		}
		sck[++tp]=i;
	}
	tp=0;
	for (int i=n;i>=1;i--)
	{
		while (tp&&a[sck[tp]]>a[i]) tp--;
		if (tp)
		{
			c[i]=min(c[i],querya(i,sck[tp]-1));
		}
		sck[++tp]=i;
	}
	tp=0;
	for (int i=1;i<=m;i++)
	{
		d[i]=inf;
		while (tp&&b[sck[tp]]>=b[i]) tp--;
		if (tp)
		{
			d[i]=min(d[i],queryb(sck[tp]+1,i));
		}
		sck[++tp]=i;
	}
	tp=0;
	for (int i=m;i>=1;i--)
	{
		while (tp&&b[sck[tp]]>b[i]) tp--;
		if (tp)
		{
			d[i]=min(d[i],queryb(i,sck[tp]-1));
		}
		sck[++tp]=i;
	}
//	return 0;
	for (int i=1;i<=n;i++)
		x.push_back(mp(mp(a[i],c[i]),0));
	for (int i=1;i<=m;i++)
		x.push_back(mp(mp(b[i],d[i]),1));
	sort(x.begin(),x.end(),wlk);
	kx_tp[0].x(2e5);
	kx_tp[1].x(2e5);
	for (auto giw_no:x)
	{
		ans+=kx_tp[giw_no.se^1].query(k-giw_no.fi.fi)-kx_tp[giw_no.se^1].query(k-giw_no.fi.se);
		kx_tp[giw_no.se].fb_t(giw_no.fi.fi,1);
//		cout<<ans<<" "<<u.fi.fi<<" "<<u.fi.se<<" "<<tree[u.se^1].query(k-u.fi.fi)<<" "<<u.se<<endl;
	}
	g(ans);
}
/*

*/

