
#include<bits/stdc++.h>
using namespace std;

#define all(v) (v).begin(),(v).end()
#define sz(v) (int)v.size()
#define ll long long
#define pb push_back
#define endl '\n'
#define S second
#define F first
const int mod = (int)1e9+7;

void INPUT()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	#endif
}

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

	INPUT();
	int _;
	cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}

