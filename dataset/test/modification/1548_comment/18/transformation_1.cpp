#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int c[N],n,m,q,sum;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)/* 'for' inside */
	{
		int u,v;
		scanf("%d%d",&u,&v);
		c[min(u,v)]++;
	}
	for(int i=1;i<=n;i++)/* 'for' inside */
	{
		/* 'if' begin */
		if(c[i]==0)/* 'if' inside */
		sum++;
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)/* 'for' inside */
	{
		int opt,u,v;
		scanf("%d",&opt);
		/* 'if' begin */
		if(opt==1)/* 'if' inside */
		{
			scanf("%d%d",&u,&v);
			c[min(u,v)]++;
			/* 'if' begin */
			if(c[min(u,v)]==1)/* 'if' inside */
			sum--;
		}
		else /* 'if' begin */
		if(opt==2)/* 'if' inside */
		{
			scanf("%d%d",&u,&v);
			c[min(u,v)]--;
			/* 'if' begin */
			if(c[min(u,v)]==0)/* 'if' inside */
			sum++;
		}
		else{
			printf("%d\n",sum);
		}
	}
}