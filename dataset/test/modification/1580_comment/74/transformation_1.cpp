#include<cstdio>
#include<queue>
#include<set>
#include<algorithm>
using namespace std;
#define N 200500
#define M 8000500
#define ll unsigned long long
int n,m,q,head[N],cnt,fg[N],a,b,c,vis[N],su[N],id[N],tid[N],l1[N];
ll dis[N],v[N],as,v2[N];
bool cmp(int a,int b){return dis[a]<dis[b];}
struct edge{int t,next,v;}ed[N*4];
void adde(int f,int t,int v){ed[++cnt]=(edge){t,head[f],v};head[f]=cnt;ed[++cnt]=(edge){f,head[t],v};head[t]=cnt;}
void dij()
{
	priority_queue<pair<ll,int> > qu;
	for(int i=1;i<=n;i++)/* 'for' inside */
	dis[i]=1e18;
	dis[1]=0;qu.push(make_pair(0,1));
	while(!qu.empty())
	{
		int tp=qu.top().second;qu.pop();
		/* 'if' begin */
		if(vis[tp])/* 'if' inside */
		continue;vis[tp]=0;
		for(int i=head[tp];i;i=ed[i].next)
		/* 'for' inside */
		{
			int t=ed[i].t;ll v=dis[tp]+ed[i].v;
			/* 'if' begin */
			if(dis[t]>v)/* 'if' inside */
			dis[t]=v,qu.push(make_pair(-v,t));
		}
	}
	for(int i=1;i<=n;i++)/* 'for' inside */
	for(int j=head[i];j;j=ed[j].next)/* 'for' inside */
	/* 'if' begin */
	if(dis[ed[j].t]==dis[i]+ed[j].v)
	/* 'if' inside */
	{
		/* 'if' begin */
		if(fg[ed[j].t])/* 'if' inside */
		fg[ed[j].t]=-1;
		else fg[ed[j].t]=i;
	}
	for(int i=2;i<=n;i++)/* 'for' inside */
	/* 'if' begin */
	if(fg[i]==1)/* 'if' inside */
	fg[i]=0;
}
struct ptree{
	int ch[M][2],rt[N],vl[M],ct,ls,c1;
	int modify(int x,int l,int r,int s)
	{
		int st=++ct;
		ch[st][0]=ch[x][0];ch[st][1]=ch[x][1];vl[st]=vl[x]+1;
		/* 'if' begin */
		if(l==r)/* 'if' inside */
		return st;
		int mid=(l+r)>>1;
		/* 'if' begin */
		if(mid>=s)/* 'if' inside */
		ch[st][0]=modify(ch[x][0],l,mid,s);
		else ch[st][1]=modify(ch[x][1],mid+1,r,s);
		return st;
	}
	void modify1(int x){/* 'if' begin */
	if(x>0)/* 'if' inside */
	ls=modify(ls,1,n,tid[x]);rt[++c1]=ls;}
	int query(int x,int l,int r,int s)
	{
		/* 'if' begin */
		if(l==r)/* 'if' inside */
		return vl[x];
		int mid=(l+r)>>1;
		/* 'if' begin */
		if(s<=mid)/* 'if' inside */
		return query(ch[x][0],l,mid,s);
		else return query(ch[x][1],mid+1,r,s);
	}
}pt;
struct sth{int a,b;}vl[N];
set<int> tp;
ll calc(int l,int r,sth ls,int fg)
{
	/* 'if' begin */
	if(ls.a==0)/* 'if' inside */
	return 0;
	int t1=pt.query(pt.rt[r],1,n,ls.a)-pt.query(pt.rt[l-1],1,n,ls.a);
	return v[ls.a]*(su[r]-su[l-1]-t1)+(v[ls.b]-fg*(ls.b==a)*b)*t1;
}
void modify1(int l,int r,sth ls,sth nw)
{
	int lb=l1[l]+1,rb=l1[r+1];
	as+=calc(lb,rb,nw,0)-calc(lb,rb,ls,1);
}
void modify(int l,int r,sth t1)
{

	int lb=*(--tp.upper_bound(l)),ls=lb;
	while(lb<=r)
	{
		int nt=*tp.upper_bound(lb);
		sth v1=vl[lb];int l1=lb,r1=nt-1;
		/* 'if' begin */
		if(l1<l)/* 'if' inside */
		l1=l;/* 'if' begin */
		if(r1>r)/* 'if' inside */
		r1=r;
		modify1(l1,r1,v1,t1);
		ls=lb;lb=nt;/* 'if' begin */
		if(nt<=r)/* 'if' inside */
		tp.erase(nt);
	}
	/* 'if' begin */
	if(tp.find(r+1)==tp.end())/* 'if' inside */
	vl[r+1]=vl[ls];vl[l]=t1;
	tp.insert(l);tp.insert(r+1);

}
sth getval(int x)
{
	int lb=*(--tp.upper_bound(x));
	return vl[lb];
}
bool cmp1(int a,int b){return v[a]==v[b]?a<b:v[a]<v[b];}
sth operator +(sth a,sth b)
{
	int v1=cmp1(a.a,b.a)?a.a:b.a,v2=a.a^b.a^v1;
	/* 'if' begin */
	if(cmp1(a.b,v2))/* 'if' inside */
	v2=a.b;
	/* 'if' begin */
	if(cmp1(b.b,v2))/* 'if' inside */
	v2=b.b;
	return (sth){v1,v2};
}
bool operator <(sth a,sth b)
{
	return cmp1(a.a,b.a)||cmp1(a.b,b.b);
}
struct segt{
	struct node{int x,l,r;sth mn;}e[N*4];
	void pushup(int x)
	{
		e[x].mn=e[x<<1].mn+e[x<<1|1].mn;
	}
	void build(int x,int l,int r)
	{
		e[x].l=l;e[x].r=r;
		/* 'if' begin */
		if(l==r)/* 'if' inside */
		{e[x].mn=(sth){l,0};return;}
		int mid=(l+r)>>1;build(x<<1,l,mid);build(x<<1|1,mid+1,r);
		pushup(x);
	}
	void modify(int x,int s)
	{
		/* 'if' begin */
		if(e[x].l==e[x].r)/* 'if' inside */
		return;
		int mid=(e[x].l+e[x].r)>>1;
		/* 'if' begin */
		if(mid>=s)/* 'if' inside */
		modify(x<<1,s);
		else modify(x<<1|1,s);
		pushup(x);
	}
	int query(int x,int l,int r,sth tp,sth t1)
	{
		/* 'if' begin */
		if(!(t1+e[x].mn<tp))/* 'if' inside */
		return -1;
		/* 'if' begin */
		if(e[x].l==e[x].r)/* 'if' inside */
		return e[x].l;
		int mid=(e[x].l+e[x].r)>>1;
		/* 'if' begin */
		if(mid>=r)/* 'if' inside */
		return query(x<<1,l,r,tp,t1);
		else /* 'if' begin */
		if(mid<l)/* 'if' inside */
		return query(x<<1|1,l,r,tp,t1+e[x<<1].mn);
		else
		{
			int s1=query(x<<1,l,mid,tp,t1);
			/* 'if' begin */
			if(s1==-1)/* 'if' inside */
			s1=query(x<<1|1,mid+1,r,tp,t1+e[x<<1].mn);
			return s1;
		}
	}
	sth querymn(int x,int l,int r)
	{
		/* 'if' begin */
		if(e[x].l==l&&e[x].r==r)/* 'if' inside */
		return e[x].mn;
		int mid=(e[x].l+e[x].r)>>1;
		/* 'if' begin */
		if(mid>=r)/* 'if' inside */
		return querymn(x<<1,l,r);
		else /* 'if' begin */
		if(mid<l)/* 'if' inside */
		return querymn(x<<1|1,l,r);
		else return querymn(x<<1,l,mid)+querymn(x<<1|1,mid+1,r);
	}
	int query1(int x,int l,int r,int vl,sth t1,int fg)
	{
		/* 'if' begin */
		if(e[x].l==l&&e[x].r==r)
		/* 'if' inside */
		{
			sth t2=t1+e[x].mn;
			/* 'if' begin */
			if(fg&&(t2.a==vl||t2.b==vl))/* 'if' inside */
			return r;
			else /* 'if' begin */
			if(!fg&&t2.a==vl)/* 'if' inside */
			return r;
		}
		/* 'if' begin */
		if(e[x].l==e[x].r)/* 'if' inside */
		return -1;
		int mid=(e[x].l+e[x].r)>>1;
		/* 'if' begin */
		if(mid>=r)/* 'if' inside */
		return query1(x<<1,l,r,vl,t1,fg);
		else /* 'if' begin */
		if(mid<l)/* 'if' inside */
		return query1(x<<1|1,l,r,vl,t1+e[x<<1].mn,fg);
		else
		{
			int s1=query1(x<<1,l,mid,vl,t1,fg),s2=-1;
			/* 'if' begin */
			if(s1==mid)/* 'if' inside */
			s2=query1(x<<1|1,mid+1,r,vl,t1+e[x<<1].mn,fg);
			/* 'if' begin */
			if(s2!=-1)/* 'if' inside */
			return s2;
			return s1;
		}
	}
}tr;
int calc0(int l,int r,int v,int fg)
{
	int lb=l1[l]+1,rb=l1[r+1];
	int as=pt.query(pt.rt[rb],1,n,v)-pt.query(pt.rt[lb-1],1,n,v);
	/* 'if' begin */
	if(!fg)/* 'if' inside */
	as=su[rb]-su[lb-1]-as;
	return as;
}
void modify1(int x,int s)
{
	int r1=tr.query1(1,x,n,x,(sth){0,0},0),r2=tr.query1(1,x,n,x,(sth){0,0},1);
	/* 'if' begin */
	if(r1==-1)/* 'if' inside */
	r1=x-1;
	as+=1ll*calc0(x,r1,x,0)*s;
	v[x]+=s;
	tr.modify(1,x);
	int nw=x;
	while(nw<=n)
	{
		sth v1=tr.querymn(1,1,nw);
		int nt=tr.query(1,1,n,v1,(sth){0,0});
		/* 'if' begin */
		if(nt==-1)/* 'if' inside */
		nt=n+1;
		int fg=nt==n+1;
		sth v2=getval(nt-1);
		/* 'if' begin */
		if(v2.a==v1.a&&v2.b==v1.b)/* 'if' inside */
		fg=1;
		modify(nw,nt-1,v1);
		nw=nt;/* 'if' begin */
		if(fg)/* 'if' inside */
		break;
	}
	r1=tr.query1(1,x,n,x,(sth){0,0},0);
	/* 'if' begin */
	if(r1==-1)/* 'if' inside */
	r1=x-1;
	/* 'if' begin */
	if(nw<=r1+1)/* 'if' inside */
	nw=r1+1;
	while(nw<=n)
	{
		sth v1=tr.querymn(1,1,nw);
		int nt=tr.query(1,1,n,v1,(sth){0,0});
		/* 'if' begin */
		if(nt==-1)/* 'if' inside */
		nt=n+1;
		int fg=0;
		sth v2=getval(nt-1);
		/* 'if' begin */
		if(v2.a==v1.a&&v2.b==v1.b&&v1.b!=x)/* 'if' inside */
		fg=1;
		modify(nw,nt-1,v1);
		nw=nt;/* 'if' begin */
		if(fg)/* 'if' inside */
		break;
	}
}
int main()
{
	tp.insert(0);tp.insert(n+1);
	v[0]=7e18;
	scanf("%d%d%d",&n,&m,&q);
	for(int i=1;i<=n;i++)/* 'for' inside */
	scanf("%d",&v2[i]);
	for(int i=1;i<=m;i++)/* 'for' inside */
	scanf("%d%d%d",&a,&b,&c),adde(a,b,c);
	dij();
	for(int i=1;i<=n;i++)/* 'for' inside */
	id[i]=i;
	sort(id+1,id+n+1,cmp);
	for(int i=1;i<=n;i++)/* 'for' inside */
	tid[id[i]]=i;
	sort(dis+1,dis+n+1);
	for(int i=1;i<=n;i++)/* 'for' inside */
	pt.modify1(fg[id[i]]),su[i]=su[i-1]+(fg[id[i]]!=-1),v[i]=v2[id[i]];
	tr.build(1,1,n);
	dis[n+1]=-1;l1[n+1]=n;for(int i=n;i>=1;i--)/* 'for' inside */
	l1[i]=dis[i]==dis[i+1]?l1[i+1]:i;
	for(int i=1;i<=n;i++)/* 'for' inside */
	modify(i,i,tr.querymn(1,1,i));
	printf("%llu\n",as);
	for(int i=1;i<=q;i++)
	/* 'for' inside */
	{
		scanf("%d%d",&a,&b);
		a=tid[a];modify1(a,b);
		printf("%llu\n",as);
	}
}