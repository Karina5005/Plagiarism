#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long t,n,i,k,a[10001],mx=INT_MAX;
int main()
{
	cin>>t;
	for ( ; t--; ) 
{
		cin>>n;
		{
		i=1;
		for ( ; i<=n; ) 
{
			cin>>a[i];
			if(a[i]<mx) mx=a[i];
			i++; 
		
		}}
		{
		i=1;
		for ( ; i<=n; ) 
{
		if(a[i]==mx) k++;
		i++; 
		
		}}
		cout<<n-k<<"\n";k=0;mx=INT_MAX;
	}
}
// #begnazar_cpp

