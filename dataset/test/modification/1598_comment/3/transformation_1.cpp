
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	ll a[n],sum = 0;
	for(int i=0 ; i<n ; i++)
	/* 'for' inside */
	{
		cin >> a[i];
		sum += a[i];
	}
	/* 'if' begin */
	if((2*sum)%n!=0)
	/* 'if' inside */
	{
		cout << 0 << endl;
		return;
	}
 
	ll k = 2*sum/n;
 
	ll ans = 0;
	map<ll,ll>mp;
	for(int i=0 ; i<n ; i++)
	/* 'for' inside */
	{
		/* 'if' begin */
		if(mp[k - a[i]])
			/* 'if' inside */
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