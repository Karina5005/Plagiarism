#include<bits/stdc++.h>
using namespace std;
#define dec Dec
const int N=1e6+10;
int n,m,t,f[N],x[N],y[N];
int dec[N],deg[1000][1000],ans;

void add(int st,int k){
	f[k]=st;
	int T=x[k]+y[k];
	if(T>t){
		for(int i=st;i<=m;){
			i+=x[k]; 
			if(i>m) break; dec[i]++;
			i+=y[k];
			if(i>m) break; dec[i]--;
		}
	} else {
		deg[T][st%T]--,deg[T][(st+x[k])%T]++,ans++;
	}
}

void del(int st,int k){
	int T=x[k]+y[k];
	if((st-f[k])%T>x[k] || (st-f[k])%T==0) ans--;
	if(T>t){
		for(int i=f[k];i<=m;){
			i+=x[k];
			if(i>m) break; dec[i]--;
			i+=y[k];
			if(i>m) break; dec[i]++;
		}
	}else {
		deg[T][f[k]%T]++,deg[T][(f[k]+x[k])%T]--;
	}
}

int main(){
	scanf("%d%d",&n,&m);
	t=sqrt(m);
	for(int i=1;i<=n;i++){
		scanf("%d%d",x+i,y+i);
	}
	for(int i=1,op,k;i<=m;i++){
		scanf("%d%d",&op,&k);
		if(op==1) add(i,k);
		else del(i,k);
		ans+=dec[i];
		for(int j=1;j<=t;j++){
			ans+=deg[j][i%j];
		}
		printf("%d\n",ans);
	}
}