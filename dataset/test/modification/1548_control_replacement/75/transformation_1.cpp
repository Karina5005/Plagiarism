
#include<bits/stdc++.h>

using namespace std;

int ca[200007];
bool ba[200007];
int co=0;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n,m; cin>>n>>m;
	{
	int i=0;
	while (i<m) {
		int u,v; cin>>u>>v;
		if(u>v)
			swap(u,v);
		++ca[u];
		if(!ba[u]){
			ba[u]=1;
			++co;
		}
		++i; 
	
	}}
	int q; cin>>q;
	{
	int i=0;
	while (i<q) {
		int t; cin>>t;
		if(!(t==3))
			{
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
		elsecout<<n-co<<"\n";
		++i; 
	
	}}
	return 0;
}
