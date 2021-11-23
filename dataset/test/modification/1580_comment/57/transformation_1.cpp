#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=1e18;
int n,m,Q;
int head[200010],o=0,p[200010],rk[200010],pre[200010],r[200010],x[200010],y[200010];
bool vis[200010],ok[200010],sm[800010];
ll a[200010],dis[200010],mn[2][800010],se[2][800010],tgmn[800010],tgse[800010];
ull ans[200010],tr[800010],sse[800010];
int mnpos[800010],cnt[800010];
unordered_map<int,int>cnse[800010];
struct edge{
	int to,link,w;
}e[600010];
void add_edge(int u,int v,int w){
	e[++o]=(edge){v,head[u],w},head[u]=o;
	e[++o]=(edge){u,head[v],w},head[v]=o;
}
struct node{
	ll w;
	int id;
	bool operator <(const node &b)const{
		return w>b.w;
	}
};
priority_queue<node>q; 
void dijk(){
	for(int i=1;i<=n;i++) /* 'for' inside */
	dis[i]=inf;
	q.push((node){dis[1]=0,1}); 
	while(q.size()){
		int u=q.top().id;q.pop();
		/* 'if' begin */
		if(vis[u]) /* 'if' inside */
		continue;
		vis[u]=1;
		for(int i=head[u],v;i;i=e[i].link) /* 'for' inside */
		/* 'if' begin */
		if(dis[v=e[i].to]>dis[u]+e[i].w)/* 'if' inside */
		{
			dis[v]=dis[u]+e[i].w;
			q.push((node){dis[v],v});
		}
	}
	iota(p+1,p+n+1,1);
	sort(p+1,p+n+1,[&](int a,int b){return dis[a]<dis[b];});
	for(int i=1;i<=n;i++) /* 'for' inside */
	rk[p[i]]=i;
	ok[1]=1;
	for(int j=2,u;j<=n;j++) /* 'for' inside */
	for(int i=head[u=p[j]],v;i;i=e[i].link) /* 'for' inside */
	/* 'if' begin */
	if(dis[u]==dis[v=e[i].to]+e[i].w)/* 'if' inside */
	{
		/* 'if' begin */
		if(!pre[j]) /* 'if' inside */
		pre[j]=rk[v];
		else ok[j]=1;
	}
	r[n]=n;
	for(int i=n-1;i>=1;i--) /* 'for' inside */
	r[i]=dis[p[i+1]]==dis[p[i]]?r[i+1]:i;
}
void build(int l,int r,int t){
	mn[0][t]=mn[1][t]=se[0][t]=se[1][t]=inf;
	sm[t]=1;
	for(int i=l;i<=r;i++) /* 'for' inside */
	/* 'if' begin */
	if(!ok[i]) /* 'if' inside */
	cnt[t]++,cnse[t][pre[i]]++;
	/* 'if' begin */
	if(l==r) /* 'if' inside */
	return;
	int mid=(l+r)>>1;
	build(l,mid,t<<1),build(mid+1,r,t<<1|1);
}
void get_smn(int t){
	tr[t]=(ull)mn[0][t]*(cnt[t]-cnse[t][mnpos[t]])+sse[t];
}
void get_sse(int t){
	/* 'if' begin */
	if(se[0][t]!=inf||mnpos[t]==1) /* 'if' inside */
	sse[t]=(ull)(mnpos[t]==1?mn[0][t]:se[0][t])*cnse[t][mnpos[t]];
	else sse[t]=0;
}
void qmn(int t,int x,ll y){
	/* 'if' begin */
	if(x==mnpos[t])/* 'if' inside */
	{
		mn[0][t]=mn[1][t]=tgmn[t]=y;
		/* 'if' begin */
		if(mnpos[t]==1) /* 'if' inside */
		sse[t]=(ull)cnse[t][mnpos[t]]*mn[0][t];
		return get_smn(t);
	}
	se[0][t]=se[1][t]=tgse[t]=mn[0][t];
	mn[0][t]=mn[1][t]=tgmn[t]=y;
	sm[t]=1,mnpos[t]=x;
	get_sse(t),get_smn(t);
}
void qse(int t,ll c){
	se[0][t]=se[1][t]=tgse[t]=c;
	get_sse(t),get_smn(t);
}
void pushdown(int t){
	/* 'if' begin */
	if(tgmn[t]) /* 'if' inside */
	qmn(t<<1,mnpos[t],tgmn[t]),qmn(t<<1|1,mnpos[t],tgmn[t]),tgmn[t]=0;
	/* 'if' begin */
	if(tgse[t]) /* 'if' inside */
	qse(t<<1,tgse[t]),qse(t<<1|1,tgse[t]),tgse[t]=0;
}
void pushup(int t){
	mn[0][t]=min(mn[0][t<<1],mn[0][t<<1|1]);
	mn[1][t]=max(mn[1][t<<1],mn[1][t<<1|1]);
	se[0][t]=min(se[0][t<<1],se[0][t<<1|1]);
	se[1][t]=max(se[1][t<<1],se[1][t<<1|1]);
	sm[t]=sm[t<<1]&&sm[t<<1|1]&&(mn[0][t<<1]==mn[0][t<<1|1])&&(mnpos[t<<1]==mnpos[t<<1|1]);
	/* 'if' begin */
	if(sm[t]) /* 'if' inside */
	mnpos[t]=mnpos[t<<1],sse[t]=sse[t<<1]+sse[t<<1|1];
	else sse[t]=0;
	tr[t]=tr[t<<1]+tr[t<<1|1];
}
void upd(int ql,int qr,int l,int r,int t,int x,ll y){
	/* 'if' begin */
	if(se[1][t]<=y) /* 'if' inside */
	return;
	/* 'if' begin */
	if(ql<=l&&r<=qr)/* 'if' inside */
	{
		/* 'if' begin */
		if(sm[t])/* 'if' inside */
		{
			/* 'if' begin */
			if(y<mn[0][t]||(y==mn[0][t]&&x<mnpos[t])) /* 'if' inside */
			return qmn(t,x,y);
			else /* 'if' begin */
			if(y<se[0][t]) /* 'if' inside */
			return qse(t,y);
		}
	}
	int mid=(l+r)>>1;
	pushdown(t);
	/* 'if' begin */
	if(ql<=mid) /* 'if' inside */
	upd(ql,qr,l,mid,t<<1,x,y);
	/* 'if' begin */
	if(mid<qr) /* 'if' inside */
	upd(ql,qr,mid+1,r,t<<1|1,x,y);
	pushup(t);
}
void upd(int x,ll y){
	/* 'if' begin */
	if(r[x]<n) /* 'if' inside */
	upd(r[x]+1,n,1,n,1,x,y); 
}
int main(){
	scanf("%d%d%d",&n,&m,&Q);
	for(int i=1;i<=n;i++) /* 'for' inside */
	scanf("%lld",&a[i]);
	for(int i=1,u,v,w;i<=m;i++) /* 'for' inside */
	scanf("%d%d%d",&u,&v,&w),add_edge(u,v,w);
	dijk();
	build(1,n,1);
	for(int i=1;i<=Q;i++) /* 'for' inside */
	scanf("%d%d",&x[i],&y[i]),a[x[i]]+=y[i];
	for(int i=1;i<=n;i++) /* 'for' inside */
	upd(i,a[p[i]]);
	for(int i=Q;i>=1;i--)/* 'for' inside */
	{
		ans[i]=tr[1];
		a[x[i]]-=y[i];
		upd(rk[x[i]],a[x[i]]);
	}
	ans[0]=tr[1];
	for(int i=0;i<=Q;i++) /* 'for' inside */
	printf("%llu\n",ans[i]);
}