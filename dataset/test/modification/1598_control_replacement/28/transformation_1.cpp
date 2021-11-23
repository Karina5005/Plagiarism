#include <iomanip>
#include <iostream>
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
	cin.tie(0);cout.tie(0);
	int t,n;
	cin >> t;
	for ( ; t--; ) 
{
		cin >> n;
		{
		int i=1;
		for ( ; i<=2*n; ) 
{
		par[i]=i;
		i++; 
		
		}}
		{
		int i=1;
		for ( ; i<=2; ) 
{
			{
			int j=1;
			for ( ; j<=n; ) 
{
				cin >> a[i][j];
				j++; 
			
			}}
			i++; 
		
		}}
		{
		int i=1;
		for ( ; i<=2; ) 
{
			{
			int j=1;
			for ( ; j<=n; ) 
{
				if(a[i][j]=='1')i++; j++; continue;
				{
				int k=0;
				for ( ; k<8; ) 
{
					int ii=i+dr[k],jj=j+dc[k];
					if(ii>=1 && ii<=2 && jj>=1 && jj<=n && a[ii][jj]=='0'){
						join((i-1)*n+j,(ii-1)*n+jj);
					}
					k++; 
				
				}}
				j++; 
			
			}}
			i++; 
		
		}}
		if(!(find(1)==find(2*n)))cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}

