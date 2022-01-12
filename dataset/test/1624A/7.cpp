#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'

const int inf = 10000000;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

int solve() {
	int n; cin >> n;
	vi a(n);
	for (auto &e : a) cin >> e;
	int mi, ma;
	mi = ma = a[0];
	for (int i = 0; i < n; i++) {
		mi = min(a[i], mi);
		ma = max(a[i], ma);
	}
	cout << ma - mi << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
}