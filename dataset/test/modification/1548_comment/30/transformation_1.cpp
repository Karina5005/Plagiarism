#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll   mod = 998244353;
const int  maxn = 2e5 + 5;


set<int> h[maxn]; 

int main(){
	int m,n,q;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	/* 'for' inside */
	{
		int u,v;
		scanf("%d %d",&u,&v);
		h[u].insert(v);
		h[v].insert(u);
	}
	
	int ans=0;
	for(int i=1;i<=n;i++)
	/* 'for' inside */
	{
		/* 'if' begin */
		if(h[i].size()&&(*h[i].rbegin())>i) /* 'if' inside */
		ans++; 
	}
	scanf("%d",&q);
	while(q--)
	{
		int op,u,v;
		scanf("%d",&op);
		/* 'if' begin */
		if(op==1)
		/* 'if' inside */
		{
			
			scanf("%d %d",&u,&v);
			/* 'if' begin */
			if(u>v) /* 'if' inside */
			swap(u,v);
			/* 'if' begin */
			if(!h[u].size()||(*h[u].rbegin())<u) /* 'if' inside */
			ans++;
			h[u].insert(v);
			h[v].insert(u);
		}
		else /* 'if' begin */
		if(op==2)
		/* 'if' inside */
		{
			scanf("%d %d",&u,&v);
			h[u].erase(v);
			h[v].erase(u);
			/* 'if' begin */
			if(u>v) /* 'if' inside */
			swap(u,v);
			/* 'if' begin */
			if(!h[u].size()||(*h[u].rbegin())<u) /* 'if' inside */
			ans--;
		}
		else
		{
			printf("%d\n",n-ans);
		}
	} 
	return 0;
}