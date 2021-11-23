#include <iomanip>
#include <iostream>
// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	ll a[n],sum = 0;
	{
	int i=0 ;
	for ( ; i<n; ) 
{
		cin >> a[i];
		sum += a[i];
		i++; 
	
	}}
	if((2*sum)%n!=0)
	{
		cout << 0 << endl;
		return;
	}
 
	ll k = 2*sum/n;
 
	ll ans = 0;
	map<ll,ll>mp;
	{
	int i=0 ;
	for ( ; i<n; ) 
{
		if(mp[k - a[i]])
			ans += mp[k - a[i]];
 
		mp[a[i]]++;
		i++; 
	
	}}
 
	cout << ans << endl;
 
}
int main()
{
 
	int _;
	cin >> _;
	for ( ; _--; ) 
{
		solve();
	}
	return 0;
}