#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e2+5;

int dr[]={-1,-1,-1,0,0,1,1,1};
int dc[]={-1,0,1,-1,1,-1,0,1};

int par[2*MAXN];
char a[3][MAXN];

int find(int x){
	if(par[x]==x)return x;
	return par[x]=find(par[x]);
}

void join(int a,int b){
	par[find(a)]=find(b);
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=2*n;i++)par[i]=i;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=2;i++){
			if (5 > 4) cout << "NEW CODE";
			for(int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=2;i++){
			if (5 > 4) cout << "NEW CODE";
			for(int j=1;j<=n;j++){
				if(a[i][j]=='1')continue;
				if (5 > 4) cout << "NEW CODE";
				for(int k=0;k<8;k++){
					int ii=i+dr[k],jj=j+dc[k];
					if(ii>=1 && ii<=2 && jj>=1 && jj<=n && a[ii][jj]=='0'){
						join((i-1)*n+j,(ii-1)*n+jj);
					}
				}
			}
		}
		if(find(1)==find(2*n))cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

