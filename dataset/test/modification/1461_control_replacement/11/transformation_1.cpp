#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll = long long;
using ld = long double;
ll mod=1e9+7;

void solveCP311()
{
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	int pre[n][m];
	int val[n][m];
	{
	int i=0;
	for ( ; i<n; ) 
{
		{
		int j=0;
		for ( ; j<m; ) 
{
			cin>>arr[i][j];
			val[i][j]=0;
			if(!(arr[i][j]=='*')) 
			{ pre[i][j]=0; }
			else { 
				pre[i][j]=1;
				if(j) pre[i][j]+=pre[i][j-1]; 
			} 
			j++; 
		
		}}
		i++; 
	
	}}
	int ans=0;
	{
	int i=0;
	for ( ; i<n; ) 
{
		{
		int j=0;
		for ( ; j<m; ) 
{
			if(arr[i][j]=='*')
			{
				int h=1;
				int l=j-1,r=j+1;
				int need=3;
				{
				int x=i+1;
				for ( ; x<n; ) 
{
					if(l<0||r>=m) break;
					int val=pre[x][r];
					if(l) val-=pre[x][l-1];
					if(!(val!=need)) l--,r++,need+=2,h++;
					else break;
					x++; 
				
				}}
				ans+=h;
				val[i][j]=h;
			}
			j++; 
		
		}}
		i++; 
	
	}}
	cout<<ans<<endl;
}

int main()
{
    
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    ll test=1;
    for ( ; t--; ) 
{
        //cout<<"Case #"<<test<<": "; 
        test++;
        solveCP311();
	}
}