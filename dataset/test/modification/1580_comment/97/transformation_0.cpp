//{{{ template
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <map>
#include <cassert>
#include <deque>
#include <cmath>
using namespace std;
inline int gi(){
	char tmp=getchar();int ans=0,flag=1;
	while(!isdigit(tmp)){
		if(tmp == '-') flag = -1;
		tmp = getchar();
	}
	while(isdigit(tmp)){
		ans = ans * 10 + tmp - '0';
		tmp = getchar();
	}
	return ans * flag;
}
inline void in(int &x){x=gi();}
inline void in2(int &x,int &y){in(x),in(y);}
inline void in3(int &x,int &y,int &z){in(x),in(y),in(z);}
inline void in4(int &x,int &y,int &z,int &a){in3(x,y,z),in(a);}
inline void smax(int &x,int y){x=max(x,y);}
inline void smin(int &x,int y){x=min(x,y);}
#define Mem(arr,v) memset(arr,v,sizeof arr)
#define Copy(arr,goal) memcpy(arr,goal,sizeof goal)
#define For(i,a,b) for(int i=(int)(a);i<=(int)(b);++i) // }}}
// const int N = 1002000;
using namespace std;
const int N=105;
int f[N][N][N],vis[N][N][N],c[N][N],m,mod;
int dfs(int i,int j,int k){
	if(i+1<k*2 || i<k) return 0;
	if(j>m && k>0) return 0;
	if(j==0 && k>1) return 0;
	if(i==0) return (k==0);
	if(vis[i][j][k]) return f[i][j][k];
	vis[i][j][k]=1;
	int lim=k;
	if(j==1) --lim;
	for(int a=0;a<i;++a)
		for(int b=0;b<=lim;++b)
			f[i][j][k]=(f[i][j][k]+1ll*c[i-1][a]*dfs(a,j-1,b)%mod*dfs(i-1-a,j-1,lim-b))%mod;
	return f[i][j][k];
}
signed main(){
#ifdef NICEGUODONG
	freopen("data.in","r",stdin);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,k;
	cin>>n>>m>>k>>mod;
	c[0][0]=1;
	for(int i=1;i<=n;++i){
		c[i][0]=c[i][i]=1;
		for(int j=1;j<i;++j)
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
	}
	cout<<dfs(n,m,k)<<"\n";
}