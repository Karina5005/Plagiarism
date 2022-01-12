#include<bits/stdc++.h>
 
using namespace std;
bool vis[55];
 
int main(){
	int T;
	cin>>T;
	while(T--){
		memset(vis,0,sizeof(vis));
		int x; bool flag=1;
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x;
			while(x && (x>n || vis[x])) x=x/2;
			if(!x) flag=0;
			vis[x]=1;
		}
		puts(flag?"YES":"NO");
	}
	return 0;	
}