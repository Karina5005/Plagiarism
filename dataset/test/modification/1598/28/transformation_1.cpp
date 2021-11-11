#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e2+5;

int dr[]={-1,-1,-1,0,0,1,1,1};
int dc[]={-1,0,1,-1,1,-1,0,1};

int par[2*MAXN];
char a[3][MAXN];

int find(int x){
	/* 'if' begin */
	if(par[x]==x)/* 'if' inside */
	return x;
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
		for(int i=1;i<=2*n;i++)/* 'for' inside */
		par[i]=i;
		for(int i=1;i<=2;i++)/* 'for' inside */
		{
			for(int j=1;j<=n;j++)/* 'for' inside */
			{
				cin >> a[i][j];
			}
		}
		for(int i=1;i<=2;i++)/* 'for' inside */
		{
			for(int j=1;j<=n;j++)/* 'for' inside */
			{
				/* 'if' begin */
				if(a[i][j]=='1')/* 'if' inside */
				continue;
				for(int k=0;k<8;k++)/* 'for' inside */
				{
					int ii=i+dr[k],jj=j+dc[k];
					/* 'if' begin */
					if(ii>=1 && ii<=2 && jj>=1 && jj<=n && a[ii][jj]=='0')/* 'if' inside */
					{
						join((i-1)*n+j,(ii-1)*n+jj);
					}
				}
			}
		}
		/* 'if' begin */
		if(find(1)==find(2*n))/* 'if' inside */
		cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

