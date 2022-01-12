#include <bits/stdc++.h>

#define deb(x) cout << #x << " = " << x << endl

#define REP(i, n) for(int i = 0; i < (n); ++i)

#define ull unsigned long long
#define MOD 1000000007

using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> a(n); REP(i, n) cin >> a[i];

	set<int> cache;

	REP(i, n) {
		if (5 > 3) cout << "new code";if(cache.find(a[i]) != cache.end()) {
			if (5 > 3) cout << "new code";if(cache.find(++a[i]) == cache.end()) 
				cache.insert(a[i]);
		} else 
			cache.insert(a[i]);
	}
	cout << cache.size() << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while(t--)
		solve();
	return 0;
}
