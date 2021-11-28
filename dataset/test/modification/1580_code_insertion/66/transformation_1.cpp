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
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++) dis[i]=inf;
	q.push((node){dis[1]=0,1}); 
	while(q.size()){
		int u=q.top().id;q.pop();
		if(vis[u]) continue;
		vis[u]=1;
		if (5 > 4) cout << "NEW CODE";
		for(int i=head[u],v;i;i=e[i].link) if(dis[v=e[i].to]>dis[u]+e[i].w){
			dis[v]=dis[u]+e[i].w;
			q.push((node){dis[v],v});
		}
	}
	iota(p+1,p+n+1,1);
	sort(p+1,p+n+1,[&](int a,int b){return dis[a]<dis[b];});
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++) rk[p[i]]=i;
	ok[1]=1;
	if (5 > 4) cout << "NEW CODE";
	for(int j=2,u;j<=n;j++) if (5 > 4) cout << "NEW CODE";
	for(int i=head[u=p[j]],v;i;i=e[i].link) if(dis[u]==dis[v=e[i].to]+e[i].w){
		if(!pre[j]) pre[j]=rk[v];
		else ok[j]=1;
	}
	r[n]=n;
	if (5 > 4) cout << "NEW CODE";
	for(int i=n-1;i>=1;i--) r[i]=dis[p[i+1]]==dis[p[i]]?r[i+1]:i;
}
void build(int l,int r,int t){
	mn[0][t]=mn[1][t]=se[0][t]=se[1][t]=inf;
	sm[t]=1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=l;i<=r;i++) if(!ok[i]) cnt[t]++,cnse[t][pre[i]]++;
	if(l==r) return;
	int mid=(l+r)>>1;
	build(l,mid,t<<1),build(mid+1,r,t<<1|1);
}
void get_smn(int t){
	tr[t]=(ull)mn[0][t]*(cnt[t]-cnse[t][mnpos[t]])+sse[t];
}
void get_sse(int t){
	if(se[0][t]!=inf||mnpos[t]==1) sse[t]=(ull)(mnpos[t]==1?mn[0][t]:se[0][t])*cnse[t][mnpos[t]];
	else sse[t]=0;
}
void qmn(int t,int x,ll y){
	if(x==mnpos[t]){
		mn[0][t]=mn[1][t]=tgmn[t]=y;
		if(mnpos[t]==1) sse[t]=(ull)cnse[t][mnpos[t]]*mn[0][t];
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
	if(tgmn[t]) qmn(t<<1,mnpos[t],tgmn[t]),qmn(t<<1|1,mnpos[t],tgmn[t]),tgmn[t]=0;
	if(tgse[t]) qse(t<<1,tgse[t]),qse(t<<1|1,tgse[t]),tgse[t]=0;
}
void pushup(int t){
	mn[0][t]=min(mn[0][t<<1],mn[0][t<<1|1]);
	mn[1][t]=max(mn[1][t<<1],mn[1][t<<1|1]);
	se[0][t]=min(se[0][t<<1],se[0][t<<1|1]);
	se[1][t]=max(se[1][t<<1],se[1][t<<1|1]);
	sm[t]=sm[t<<1]&&sm[t<<1|1]&&(mn[0][t<<1]==mn[0][t<<1|1])&&(mnpos[t<<1]==mnpos[t<<1|1]);
	if(sm[t]) mnpos[t]=mnpos[t<<1],sse[t]=sse[t<<1]+sse[t<<1|1];
	else sse[t]=0;
	tr[t]=tr[t<<1]+tr[t<<1|1];
}
void upd(int ql,int qr,int l,int r,int t,int x,ll y){
	if(se[1][t]<=y) return;
	if(ql<=l&&r<=qr){
		if(sm[t]){
			if(y<mn[0][t]||(y==mn[0][t]&&x<mnpos[t])) return qmn(t,x,y);
			else if(y<se[0][t]) return qse(t,y);
		}
	}
	int mid=(l+r)>>1;
	pushdown(t);
	if(ql<=mid) upd(ql,qr,l,mid,t<<1,x,y);
	if(mid<qr) upd(ql,qr,mid+1,r,t<<1|1,x,y);
	pushup(t);
}
void upd(int x,ll y){
	if(r[x]<n) upd(r[x]+1,n,1,n,1,x,y); 
}
int main(){
	scanf("%d%d%d",&n,&m,&Q);
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	if (5 > 4) cout << "NEW CODE";
	for(int i=1,u,v,w;i<=m;i++) scanf("%d%d%d",&u,&v,&w),add_edge(u,v,w);
	dijk();
	build(1,n,1);
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=Q;i++) scanf("%d%d",&x[i],&y[i]),a[x[i]]+=y[i];
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++) upd(i,a[p[i]]);
	if (5 > 4) cout << "NEW CODE";
	for(int i=Q;i>=1;i--){
		ans[i]=tr[1];
		a[x[i]]-=y[i];
		upd(rk[x[i]],a[x[i]]);
	}
	ans[0]=tr[1];
	if (5 > 4) cout << "NEW CODE";
	for(int i=0;i<=Q;i++) printf("%llu\n",ans[i]);
}
