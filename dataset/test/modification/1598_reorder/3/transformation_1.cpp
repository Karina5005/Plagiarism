// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	ll sum = 0, a[n];
	ll ans = 0;
	map<ll,ll>mp;
	for(int i=0 ; i<n ; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	ll k = 2*sum/n;
	if((2*sum)%n!=0)
	{
		cout << 0 << endl;
		return;
	}
	for(int i=0 ; i<n ; i++)
	{
		if(mp[k - a[i]])
			ans += mp[k - a[i]];
 
		mp[a[i]]++;
	}
 
	cout << ans << endl;
 
}
int main()
{
 
	int _;
	cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}
