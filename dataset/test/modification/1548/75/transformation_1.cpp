
#include<bits/stdc++.h>

using namespace std;

int ca[200007];
bool ba[200007];
int co=0;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n,m; cin>>n>>m;
	for(int i=0; i<m; ++i)/* 'for' inside */
	{
		int u,v; cin>>u>>v;
		/* 'if' begin */
		if(u>v)
			/* 'if' inside */
			swap(u,v);
		++ca[u];
		/* 'if' begin */
		if(!ba[u])/* 'if' inside */
		{
			ba[u]=1;
			++co;
		}
	}
	int q; cin>>q;
	for(int i=0; i<q; ++i)/* 'for' inside */
	{
		int t; cin>>t;
		/* 'if' begin */
		if(t==3)
			/* 'if' inside */
			cout<<n-co<<"\n";
		else{
			int u,v; cin>>u>>v;
			/* 'if' begin */
			if(u>v)
				/* 'if' inside */
				swap(u,v);
			/* 'if' begin */
			if(t==1)/* 'if' inside */
			{
				++ca[u];
				/* 'if' begin */
				if(!ba[u])/* 'if' inside */
				{
					ba[u]=1;
					++co;
				}
			}
			else{
				--ca[u];
				/* 'if' begin */
				if(ca[u]==0)/* 'if' inside */
				{
					ba[u]=0;
					--co;
				}
			}
		}
	}
	return 0;
}
