#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int a[7],bykA[7][7],bykB[7][7],bykC[7][7],bykD[7][7];

int main(){
	cin.tie(0);cout.tie(0);
	int t,n;
	cin >> t;
	for ( ; t--; ) 
{
		cin >> n;
		memset(bykA,0,sizeof(bykA));
		memset(bykB,0,sizeof(bykB));
		memset(bykC,0,sizeof(bykC));
		memset(bykD,0,sizeof(bykD));
		{
		int i=1;
		for ( ; i<=n; ) 
{
			{
			int j=1;
			for ( ; j<=5; ) 
{
			cin >> a[j];
			j++; 
			
			}}
			{
			int j=1;
			for ( ; j<=5; ) 
{
				{
				int k=j+1;
				for ( ; k<=5; ) 
{
					if(a[j] && a[k])bykB[j][k]++;
					else if(a[j] && !a[k])bykA[j][k]++;
					else if(!a[j] && a[k])bykC[j][k]++;
					else bykD[j][k]++;
					k++; 
				
				}}
				j++; 
			
			}}
			i++; 
		
		}}
		bool yes=false;
		{
		int i=1;
		for ( ; i<=5; ) 
{
			{
			int j=i+1;
			for ( ; j<=5; ) 
{
				if(bykD[i][j])i++; j++; continue;
				int L=bykA[i][j],R=bykC[i][j];
				if(R+bykB[i][j]-L>=0 && (R+bykB[i][j]-L)%2==0 && (R+bykB[i][j]-L)/2<=bykB[i][j]){
					yes=true;
				}
				j++; 
			
			}}
			i++; 
		
		}}
		if(!(yes))cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}

