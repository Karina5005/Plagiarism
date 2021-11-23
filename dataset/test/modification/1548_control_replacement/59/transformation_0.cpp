#include <bits/stdc++.h>
#define  sq(x) (x)*(x)
#define  cei(a,b) (long long)(((a)+(b)-1)/(b))
#define  mst(a,b) memset((a),b,sizeof((a)))
#define fi first
#define se second
#define pb push_back
#define chkmin(a,b) a=min(a,b)
#define chkmax(a,b) a=max(a,b)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N = 1e5+5;
//const int mod = 1e9+7 ;
//const int mod = 998244353 ;
const int inf = 0x3f3f3f3f;
//const ll inf=0x3f3f3f3f3f3f3f3f;
int c[2*N]= {0};
int ans;
void solve()
{
	int n,m,u,v,q,op;
	scanf("%d%d",&n,&m);
	ans=n;
	while(m--) {
		scanf("%d%d",&u,&v);
		if(!c[min(u,v)]++)ans--;
	}
	scanf("%d",&q);
	while(q--) {
		scanf("%d",&op);
		if(op==3)
			printf("%d\n",ans);
		else {
			scanf("%d%d",&u,&v);
			if(op==1)
				if(!c[min(u,v)]++)ans--;
				else ;
			else if(!--c[min(u,v)])ans++;
		}
	}
}
int main()
{
//		freopen("D:\\desktop\\in.txt","r",stdin);
//		freopen("E:\\DATA\\in.txt","r",stdin);
	int T=1;
//	scanf("%d",&T);
	for(int i=1; i<=T; i++) {
//		printf("Case #%d: ",i);
		solve();
	}
}
	  						   			 	 	    	   	  	