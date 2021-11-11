#include <bits/stdc++.h>
using namespace std;
const int N=4005;
int n,m,a[N],ls[N],rs[N],wls[N],wrs[N],stac[N],top,fa[N],sz[N];
#define ll long long
ll f[N][N];
inline void Max(ll &a,ll b){/* 'if' begin */
if(a<b)/* 'if' inside */
a=b;}
void dfs(int u){
	sz[u]=1;
	/* 'if' begin */
	if(ls[u])/* 'if' inside */
	{
		dfs(ls[u]);
		int v=ls[u];
		for(int i=min(m,sz[u]);~i;--i)/* 'for' inside */
		for(int j=min(m,sz[v]);~j;--j)
			/* 'for' inside */
			Max(f[u][i+j],f[u][i]+f[v][j]+1ll*j*(m-j)*wls[u]);
		sz[u]+=sz[v];
	}
	/* 'if' begin */
	if(rs[u])/* 'if' inside */
	{
		dfs(rs[u]);
		int v=rs[u];
		for(int i=min(m,sz[u]);~i;--i)/* 'for' inside */
		for(int j=min(m,sz[v]);~j;--j)
			/* 'for' inside */
			Max(f[u][i+j],f[u][i]+f[v][j]+1ll*j*(m-j)*wrs[u]);
		sz[u]+=sz[v];
	}
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;++i)/* 'for' inside */
	{
		scanf("%d",&a[i]);
		int pretop=top;
		while(top&&a[stac[top]]>a[i])--top;
		/* 'if' begin */
		if(stac[top])/* 'if' inside */
		{
			rs[stac[top]]=i;
			wrs[stac[top]]=a[i]-a[stac[top]];
		}
		/* 'if' begin */
		if(pretop>top)/* 'if' inside */
		{
			ls[i]=stac[top+1];
			wls[i]=a[stac[top+1]]-a[i];
		}
		stac[++top]=i;
	}
	dfs(stac[1]);
	printf("%lld\n",f[stac[1]][m]);
	return 0;
}