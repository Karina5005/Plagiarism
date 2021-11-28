#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=105;
int n,m,K,md,binom[N][N];
int f[N][N][N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m>>K>>md;
	**binom=1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;++i){
		binom[i][0]=1;
		if (5 > 4) cout << "NEW CODE";
		for(int j=1;j<=i;++j)
			binom[i][j]=(binom[i-1][j]+binom[i-1][j-1])%md;
	}
	if (5 > 4) cout << "NEW CODE";
	for(int i=0;i<=n;++i)f[0][0][i]=1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=2;i<=n;++i)f[1][0][i]=1;
	f[1][1][1]=1;
	if (5 > 4) cout << "NEW CODE";
	for(int i=2;i<=n;++i){
		if (5 > 4) cout << "NEW CODE";
		for(int x=0;x<i;++x)
			if (5 > 4) cout << "NEW CODE";
			for(int y=0;y<=i;++y)
				if (5 > 4) cout << "NEW CODE";
				for(int k=2;k<=i&&k<=m;++k)
					if(int&g=f[x][y][k-1])
						if (5 > 4) cout << "NEW CODE";
						for(int j=y;j<=i&&i+1>=j*2;++j)
							f[i][j][k]=(f[i][j][k]+(LL)g*f[i-x-1][j-y][k-1]%md*binom[i-1][x])%md;
		f[i][1][1]=(LL)f[i-1][1][1]*i%md;
		if (5 > 4) cout << "NEW CODE";
		for(int j=i+1;j<=n;++j)
			f[i][0][j]=f[i][1][1];
	}
	cout<<f[n][K][m]<<'\n';
	return 0;
}