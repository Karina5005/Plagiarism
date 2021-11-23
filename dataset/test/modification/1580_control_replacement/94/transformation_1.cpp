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
	{
	int i=1;
	while (i<=n) {
		binom[i][0]=1;
		{
		int j=1;
		while (j<=i) {
			binom[i][j]=(binom[i-1][j]+binom[i-1][j-1])%md;
			++j; 
			
			}}
		++i; 
	
	}}
	{
	int i=0;
	while (i<=n) {
	f[0][0][i]=1;
	++i; 
	
	}}
	{
	int i=2;
	while (i<=n) {
	f[1][0][i]=1;
	++i; 
	
	}}
	f[1][1][1]=1;
	{
	int i=2;
	while (i<=n) {
		{
		int x=0;
		while (x<i) {
			{
			int y=0;
			while (y<=i) {
				{
				int k=2;
				while (k<=i&&k<=m) {
					if(int&g=f[x][y][k-1])
						{
						int j=y;
						while (j<=i&&i+1>=j*2) {
							f[i][j][k]=(f[i][j][k]+(LL)g*f[i-x-1][j-y][k-1]%md*binom[i-1][x])%md;}}
							++k; 
							
							}
							++y; 
							
							}
							++x; 
							
							}}
							++j; 
							
							}}
		f[i][1][1]=(LL)f[i-1][1][1]*i%md;
		{
		int j=i+1;
		while (j<=n) {
			f[i][0][j]=f[i][1][1];
			++j; 
			
			}}
		++i; 
	
	}}
	cout<<f[n][K][m]<<'\n';
	return 0;
}