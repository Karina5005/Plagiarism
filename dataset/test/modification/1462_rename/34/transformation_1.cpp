#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long
void d_o() {

	int n;
	string ouz_h;
	cin >> n >> ouz_h;
	int l = 0;
	for (int i = 0; i <= 4; i++) {
		int r = 4 - i;
		if (ouz_h.substr(0, i) + ouz_h.substr(n - r) == "2020") {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n; while (n--) d_o(); return 0;
}
