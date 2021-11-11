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

const int inf = 0x3f3f3f3f;

int c[2*N]= {0};
int ans;
void solve()
{
	int n,m,u,v,q,op;
	scanf("%d%d",&n,&m);
	ans=n;
	while(m--) {
		scanf("%d%d",&u,&v);
		/* 'if' begin */
		if(!c[min(u,v)]++)/* 'if' inside */
		ans--;
	}
	scanf("%d",&q);
	while(q--) {
		scanf("%d",&op);
		/* 'if' begin */
		if(op==3)
			/* 'if' inside */
			printf("%d\n",ans);
		else {
			scanf("%d%d",&u,&v);
			/* 'if' begin */
			if(op==1)
				/* 'if' inside */
				/* 'if' begin */
				if(!c[min(u,v)]++)/* 'if' inside */
				ans--;
				else ;
			else /* 'if' begin */
			if(!--c[min(u,v)])/* 'if' inside */
			ans++;
		}
	}
}
int main()
{

	int T=1;

	for(int i=1; i<=T; i++) /* 'for' inside */
	{

		solve();
	}
}
	  						   			 	 	    	   	  	