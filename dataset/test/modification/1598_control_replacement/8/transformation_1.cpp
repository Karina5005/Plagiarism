#include <iomanip>
#include <iostream>
// Sha3ban_El-Bay
#include<bits/stdc++.h>
using namespace std;
//======================================================
#define all(v) (v).begin(),(v).end()
#define sz(v) (int)v.size()
#define ll long long
#define pb push_back
#define endl '\n'
#define S second
#define F first
const int mod = (int)1e9+7;
//======================================================
void INPUT()
{
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	#endif
}
//======================================================
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

	INPUT();
	int _;
	cin >> _;
	for ( ; _--; ) 
{
		solve();
	}
	return 0;
}

