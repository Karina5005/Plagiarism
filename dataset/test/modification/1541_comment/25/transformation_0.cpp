#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ff              first
#define ss              second
#define ld              long double
#define ll              long long int
#define mod             1000000007
#define vll             vector<ll>
#define pll             pair<ll, ll>
#define uom             unordered_map
#define uos             unordered_set
#define mxh             priority_queue<ll>
#define ull             unsigned long long
#define INF             9223372036854775807
#define mnh             priority_queue<ll, vector<ll>, greater<ll>>
#define endl            "\n"
#define Endl            "\n"
#define w(t)            ll tests;    cin>>tests;        while(tests--)
#define pb(x)           push_back(x)
#define ppb()           pop_back()
#define all(x)          x.begin(), x.end()
#define set1(x)         __builtin_popcount(x)
#define mp(a, b)        make_pair(a, b)
#define setp(x, y)      fixed << setprecision(x) << y
#define f(i, a, b)      for(ll i = a ; i < b ; i++)
#define fo(j, a, b)     for(ll j = a ; j >= b ; j--)
#define fill(a, n, x)   f(i, 0, n)     a[i]=x;
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> oset;
// oset.find_by_order(idx) --> returns the iterator at index idx
// oset.order_of_key(k) --> returns the number of elements smaller than k
// ll dx[] = {0, 1, 0, -1, -1, 1, -1, 1};
// ll dy[] = {1, 0, -1, 0, -1, 1, 1, -1};
// if all 8 sides then loop through 0-7, else through 0-3

void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {

	init();
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	w(t)
	{
		ll n, z = 0, ans = 0;
		cin >> n;
		vll v;

		f(i, 0, n)
		{
			ll x;
			cin >> x;

			if (x < 0)
				ans += x;
			else if (x == 0 && i > 0)
				z++;
			else if (x > 0)
				v.pb(x);
		}

		sort(all(v));
		n = v.size();

		if (n > 1)
		{
			ll pre[n];
			pre[0] = v[0];
			f(i, 1, n)
			pre[i] = pre[i - 1] + v[i];

			ans += -v[1];
			f(i, 2, v.size())
			ans += pre[i - 2] - i * v[i];

			ans += -pre[n - 1] * z;
		}

		cout << ans << endl;
	}

	return 0;
}