#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
const int maxn=2e5+10;
const int mod=1e9+7;
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
int n,m,q,cnt,ok[maxn];
set<int>lk[maxn];
set<int>::iterator it;
int main(){
	n=read(),m=read();
	int opt,x,y;
	for(int i=1;i<=m;i++){
		x=read(),y=read();
		lk[x].insert(y);
		lk[y].insert(x); 
	}
	for(int i=1;i<=n;i++){
		if(lk[i].empty())continue;
		it=lk[i].end();it--;ok[i]=(i<*it);
	}
	for(int i=1;i<=n;i++)
		cnt+=1-ok[i];
	q=read();
	for(int i=1;i<=q;i++){
		opt=read();
		if(opt==3)printf("%d\n",cnt);
		else{
			x=read(),y=read();
			cnt-=1-ok[x]+1-ok[y];
			if(opt==1){
				lk[x].insert(y);
				lk[y].insert(x);
				it=lk[x].end();it--;
				ok[x]=(x<*it);
				it=lk[y].end();it--;
				ok[y]=(y<*it);
			}else{
				lk[x].erase(y);
				lk[y].erase(x);
				if(!lk[x].empty()){
					it=lk[x].end();it--;
					ok[x]=(x<*it);
				}else ok[x]=0;
				if(!lk[y].empty()){
					it=lk[y].end();it--;
					ok[y]=(y<*it);
				}else ok[y]=0;
			}
			cnt+=1-ok[x]+1-ok[y];
		}
	}
    return 0;
}