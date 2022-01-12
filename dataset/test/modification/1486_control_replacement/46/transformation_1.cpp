#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;
	cin>>n;
	vector <int> arr(n);
	{
	int i = 0;
	for ( ; i<n; ) 
{
		cin>>arr[i];
		i++; 
	
	}}
	int sum = 0,need = 0;
	{
	int i = 0;
	for ( ; i<n; ) 
{
		need += i;
		sum += arr[i];
		if(sum < need){
			cout<<"NO\n";
			return;
		}
		i++; 
	
	}}
	cout<<"YES\n";
}
	
signed main(){
	
	cin.tie(0);
	int t;
	cin>>t;
	for ( ; t--; ) 
{
		solve();
	}
}
