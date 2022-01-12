#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,k;cin>>a>>b>>k;

	if (!((b-1)+(a-1)*b ==k)){
		cout<<"NO"<<"\n";
	} else{
		cout<<"YES"<<"\n";
	}
	//cout<<(b-1)+(a-1)*b<<"\n";
	return;
}
int main(){
	int t; cin>>t;

	{
	int i=0;
	for ( ; i<t; ) 
{
		solve();
		i++; 
	
	}}
	return 0;
}