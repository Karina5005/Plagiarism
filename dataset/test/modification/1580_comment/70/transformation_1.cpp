#include <bits/stdc++.h>
using namespace std;
inline int read(){
	int s=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){/* 'if' begin */
	if(ch=='-')/* 'if' inside */
	f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9')s=(s<<3)+(s<<1)+ch-'0',ch=getchar();
	return s*f;
}
const int N=2e5+5,inf=1e9,B=1000;
namespace block1{
	int a[N],sz,pos,ret;
	inline void add(int l,int r,int v){
		++r;
		a[l]+=v;/* 'if' begin */
		if(l<=pos)/* 'if' inside */
		ret+=v;
		/* 'if' begin */
		if(r<=sz)/* 'if' inside */
		{
			a[r]-=v;
			/* 'if' begin */
			if(r<=pos)/* 'if' inside */
			ret-=v;
		}
	}
	inline void update(){
		ret+=a[++pos];
	}
	inline int query(){return ret;}
}
struct block{
	int tag[B],a[B],L[B],R[B],id[B],sz,tot;
	inline void init(int n){
		sz=n;
		int len=max(3,(int)sqrt(sz));
		for(int i=0;i<n;++i)/* 'for' inside */
		id[i]=i/len+1;
		tot=id[n-1];
		for(int i=1;i<=tot;++i)/* 'for' inside */
		L[i]=(i-1)*len,R[i]=len*i-1;
		R[tot]=n-1;
	}
	inline void add(int l,int r,int v){
		/* 'if' begin */
		if(id[l]==id[r])/* 'if' inside */
		{
			for(int i=l;i<=r;++i)/* 'for' inside */
			a[i]+=v;
			return;
		}
		/* 'if' begin */
		if(l==L[id[l]])/* 'if' inside */
		tag[id[l]]+=v;
		else for(int i=l;i<=R[id[l]];++i)/* 'for' inside */
		a[i]+=v;
		for(int i=id[l]+1;i<id[r];++i)/* 'for' inside */
		tag[i]+=v;
		/* 'if' begin */
		if(r==R[id[r]])/* 'if' inside */
		tag[id[r]]+=v;
		else for(int i=L[id[r]];i<=r;++i)/* 'for' inside */
		a[i]+=v; 
	}
	inline int query(int pos){return a[pos]+tag[id[pos]];}
}b[B];
int n,m,BL,x[N],y[N],prepos[N],buc[N],tot;
bool vis[N];
int main(){
	n=read();m=read();BL=max(2,(int)sqrt(m));
	for(int i=1;i<=n;++i)/* 'for' inside */
	{
		x[i]=read(),y[i]=read();
		/* 'if' begin */
		if(x[i]+y[i]<=BL&&!vis[x[i]+y[i]])/* 'if' inside */
		vis[x[i]+y[i]]=1,buc[++tot]=x[i]+y[i];
	}
	block1::sz=m;
	for(int i=1;i<=BL;++i)/* 'for' inside */
	/* 'if' begin */
	if(vis[i])/* 'if' inside */
	b[i].init(i);
	for(int i=1,opt,k,ans,p,st;i<=m;++i)/* 'for' inside */
	{
		opt=read();k=read();
		/* 'if' begin */
		if(opt==1)/* 'if' inside */
		prepos[k]=i;
		else opt=-1;
		/* 'if' begin */
		if(x[k]+y[k]<=BL)/* 'if' inside */
		{
			p=x[k]+y[k];
			st=(prepos[k]+x[k])%p;
			/* 'if' begin */
			if(st+y[k]-1<p)/* 'if' inside */
			b[p].add(st,st+y[k]-1,opt);
			else b[p].add(st,p-1,opt),b[p].add(0,(st+y[k]-1)%p,opt);
		}else{
			for(p=prepos[k];p+x[k]<=m;p+=y[k])/* 'for' inside */
			{
				p+=x[k];
				block1::add(p,p+y[k]-1,opt);
			}
		}
		ans=0;
		for(int j=1;j<=tot;++j)/* 'for' inside */
		ans+=b[buc[j]].query(i%buc[j]);
		block1::update();
		ans+=block1::query();
		printf("%d\n",ans);
	}
	return 0;
}