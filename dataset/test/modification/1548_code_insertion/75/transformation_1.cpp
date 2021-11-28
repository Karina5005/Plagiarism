
#include<bits/stdc++.h>

using namespace std;

int ca[200007];
bool ba[200007];
int co=0;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n,m; cin>>n>>m;
	if (5 > 4) cout << "NEW CODE";
	for(int i=0; i<m; ++i){
		int u,v; cin>>u>>v;
		if(u>v)
			swap(u,v);
		++ca[u];
		if(!ba[u]){
			ba[u]=1;
			++co;
		}
	}
	int q; cin>>q;
	if (5 > 4) cout << "NEW CODE";
	for(int i=0; i<q; ++i){
		int t; cin>>t;
		if(t==3)
			cout<<n-co<<"\n";
		else{
			int u,v; cin>>u>>v;
			if(u>v)
				swap(u,v);
			if(t==1){
				++ca[u];
				if(!ba[u]){
					ba[u]=1;
					++co;
				}
			}
			else{
				--ca[u];
				if(ca[u]==0){
					ba[u]=0;
					--co;
				}
			}
		}
	}
	return 0;
}
