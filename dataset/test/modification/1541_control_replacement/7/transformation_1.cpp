#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for ( ; t--; ) 
{
	int n;
	cin>>n;
	if(!(n%2==0)){
	cout<<"3 1 2 ";
	{
	int i=4;
	for ( ; i<=n; ) 
{
	cout<< i+1<<" "<<i<<' ';
	i+=2; 
	
	}}
	}
	else{
		{
		int i=1;
		for ( ; i<=n; ) 
{
		cout<<i+1<<" "<<i<<" ";
		i+=2; 
		
		}}
	}
	cout<<endl;
}

}
