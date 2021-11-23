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
	{
	int i=1;
	while (i<=n) {
	dis[i]=inf;
	i++; 
	
	}}
	q.push((node){dis[1]=0,1}); 
	while(q.size()){
		int u=q.top().id;q.pop();
		if(vis[u]) continue;
		vis[u]=1;
		{
		int i=head[u],v;
		while (i) {
		if(dis[v=e[i].to]>dis[u]+e[i].w){
			dis[v]=dis[u]+e[i].w;
			q.push((node){dis[v],v});
		}
		i=e[i].link; 
		
		}}
	}
	iota(p+1,p+n+1,1);
	sort(p+1,p+n+1,[&](int a,int b){return dis[a]<dis[b];});
	{
	int i=1;
	while (i<=n) {
	rk[p[i]]=i;
	i++; 
	
	}}
	ok[1]=1;
	{
	int j=2,u;
	while (j<=n) {
	{
	int i=head[u=p[j]],v;
	while (i) {
	if(dis[u]==dis[v=e[i].to]+e[i].w){
		if(!pre[j]) pre[j]=rk[v];
		else ok[j]=1;
	}}
	i=e[i].link; 
	
	}
	j++; 
	
	}}
	r[n]=n;
	{
	int i=n-1;
	while (i>=1) {
	r[i]=dis[p[i+1]]==dis[p[i]]?r[i+1]:i;
	i--; 
	
	}}
}
void build(int l,int r,int t){
	mn[0][t]=mn[1][t]=se[0][t]=se[1][t]=inf;
	sm[t]=1;
	{
	int i=l;
	while (i<=r) {
	if(!ok[i]) cnt[t]++,cnse[t][pre[i]]++;
	i++; 
	
	}}
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
	{
	int i=1;
	while (i<=n) {
	scanf("%lld",&a[i]);
	i++; 
	
	}}
	{
	int i=1,u,v,w;
	while (i<=m) {
	scanf("%d%d%d",&u,&v,&w),add_edge(u,v,w);
	i++; 
	
	}}
	dijk();
	build(1,n,1);
	{
	int i=1;
	while (i<=Q) {
	scanf("%d%d",&x[i],&y[i]),a[x[i]]+=y[i];
	i++; 
	
	}}
	{
	int i=1;
	while (i<=n) {
	upd(i,a[p[i]]);
	i++; 
	
	}}
	{
	int i=Q;
	while (i>=1) {
		ans[i]=tr[1];
		a[x[i]]-=y[i];
		upd(rk[x[i]],a[x[i]]);
		i--; 
	
	}}
	ans[0]=tr[1];
	{
	int i=0;
	while (i<=Q) {
	printf("%llu\n",ans[i]);
	i++; 
	
	}}
}