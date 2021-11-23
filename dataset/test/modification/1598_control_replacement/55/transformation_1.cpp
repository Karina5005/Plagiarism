#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
// Type defination 
typedef long long int ll;

// Macros


/// Global constants
const ll mod1 = 998244353;
const ll mod2 = 1e9 + 7;
const int limit = 3e5 + 10;

// Global variables

// Helper Functions

// Solve Function
void solve(){
	
	int n;
	cin>>n;
	
	vector<int> arr(n);
	map<int, int> cnt;
	
	{
	int i = 0;
	for ( ; i < n; ) 
{
		cin>>arr[i];
		cnt[arr[i]] += 1;
		i++; 
	
	}}
	
	ll sum = accumulate(arr.begin(), arr.end(), 0LL);
	
	if((2 * sum) % n != 0){
		cout<<0<<"\n";
		return;
	}
	
	ll ans = 0, need = (2 * sum) / n;
	
	{
	int i = 0;
	for ( ; i < n; ) 
{
		cnt[arr[i]]--;
		
		if(cnt.count(need - arr[i])){
			ans += cnt[need - arr[i]];
		}	
		i++; 
	
	}}
	
	cout<<ans<<"\n";
	
	return;
}
 
 
// Main Function
int main(){	
	
    cin.tie(nullptr);
	
	int tc = 1;
	cin>>tc;
 
	
	for ( ; tc--; ) 
{
		solve();
	}
	
	return 0;
}