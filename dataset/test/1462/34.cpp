#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long
void solve() {

	int n;
	string s;
	cin >> n >> s;
	int l = 0;
	for (int i = 0; i <= 4; i++) {
		int r = 4 - i;
		if (s.substr(0, i) + s.substr(n - r) == "2020") {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n; while (n--) solve(); return 0;
}
