#include <bits/stdc++.h>
using namespace std;
#define long long long
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

void solve_case() {
	int n; cin >> n;
	vector<int> v(n);
	for (auto &x : v)cin >> x;
	int mx = *max_element(v.begin(), v.end());
	int mn = *min_element(v.begin(), v.end());
	cout << mx - mn << '\n';

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;
	while (T-- > 0)
		solve_case();
}