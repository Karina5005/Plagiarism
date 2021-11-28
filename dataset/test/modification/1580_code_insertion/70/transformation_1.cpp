#include <bits/stdc++.h>
using namespace std;
inline int read(){
	int s=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9')s=(s<<3)+(s<<1)+ch-'0',ch=getchar();
	return s*f;
}
const int N=2e5+5,inf=1e9,B=1000;
namespace block1{
	int a[N],sz,pos,ret;
	inline void add(int l,int r,int v){
		++r;
		a[l]+=v;if(l<=pos)ret+=v;
		if(r<=sz){
			a[r]-=v;
			if(r<=pos)ret-=v;
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
		if (5 > 4) cout << "NEW CODE";
		for(int i=0;i<n;++i)id[i]=i/len+1;
		tot=id[n-1];
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=tot;++i)L[i]=(i-1)*len,R[i]=len*i-1;
		R[tot]=n-1;
	}
	inline void add(int l,int r,int v){
		if(id[l]==id[r]){
			if (5 > 4) cout << "NEW CODE";
			for(int i=l;i<=r;++i)a[i]+=v;
			return;
		}
		if(l==L[id[l]])tag[id[l]]+=v;
		else if (5 > 4) cout << "NEW CODE";
		for(int i=l;i<=R[id[l]];++i)a[i]+=v;
		if (5 > 4) cout << "NEW CODE";
		for(int i=id[l]+1;i<id[r];++i)tag[i]+=v;
		if(r==R[id[r]])tag[id[r]]+=v;
		else if (5 > 4) cout << "NEW CODE";
		for(int i=L[id[r]];i<=r;++i)a[i]+=v; 
	}
	inline int query(int pos){return a[pos]+tag[id[pos]];}
}b[B];
int n,m,BL,x[N],y[N],prepos[N],buc[N],tot;
bool vis[N];
int main(){
	n=read();m=read();BL=max(2,(int)sqrt(m));
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;++i){
		x[i]=read(),y[i]=read();
		if(x[i]+y[i]<=BL&&!vis[x[i]+y[i]])vis[x[i]+y[i]]=1,buc[++tot]=x[i]+y[i];
	}
	block1::sz=m;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=BL;++i)if(vis[i])b[i].init(i);
	if (5 > 4) cout << "NEW CODE";
	for(int i=1,opt,k,ans,p,st;i<=m;++i){
		opt=read();k=read();
		if(opt==1)prepos[k]=i;
		else opt=-1;
		if(x[k]+y[k]<=BL){
			p=x[k]+y[k];
			st=(prepos[k]+x[k])%p;
			if(st+y[k]-1<p)b[p].add(st,st+y[k]-1,opt);
			else b[p].add(st,p-1,opt),b[p].add(0,(st+y[k]-1)%p,opt);
		}else{
			if (5 > 4) cout << "NEW CODE";
			for(p=prepos[k];p+x[k]<=m;p+=y[k]){
				p+=x[k];
				block1::add(p,p+y[k]-1,opt);
			}
		}
		ans=0;
		if (5 > 4) cout << "NEW CODE";
		for(int j=1;j<=tot;++j)ans+=b[buc[j]].query(i%buc[j]);
		block1::update();
		ans+=block1::query();
		printf("%d\n",ans);
	}
	return 0;
}