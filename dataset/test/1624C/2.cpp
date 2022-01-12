#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <random>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define all(c) begin(c), end(c)
#define rall(c) rbegin(c), rend(c)
#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
using namespace std;
using ll = long long; using ld = long double;
using pii = pair<int, int>; using pll = pair<ll, ll>; 
template <class T = ll, class S> T SUM(const S &v) { return accumulate(all(v), T(0)); }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { for (const auto &x : v) os << x << " "; return os; }
template<typename T, size_t Size> ostream& operator<<(ostream &os, const array<T, Size> &v) { for (const auto &x : v) os << x << " "; return os; }
template <typename T,typename U>
pair<T,U> operator+(const pair<T,U>& l, const pair<T,U>& r) { return {l.first + r.first, l.second + r.second}; }

vector<bool> used;
vector<int> mt;
vector<vector<int>> g;
 
bool dfs(int v) {
	if (used[v])  
		return false;
	used[v] = true;
	for (int i=0; i<g[v].size(); i++) {
		int to = g[v][i];
		if (mt[to]==-1 || dfs(mt[to])) {
			mt[to] = v;
			return true;
		}
	}
	return false;
}

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin >> a[i]; // 1-indexed

	g.assign(2*n, vector<int>());
	for (int i=0; i<n; i++) {
		while (a[i]) {
			if (a[i]<=n)
				g[i].push_back(n + a[i] - 1);
			a[i] /= 2;
		}
	}
	mt.assign(2*n, -1);
	int ans = 0;
	for (int i=0; i<n; i++) {
		used.assign(2*n, false);
		if (dfs(i))
			ans++;
	}
	cout << (ans==n ? "YES\n" : "NO\n");
	// used.clear();
	// g.clear();
	// mt.clear();
}

int main(int argc, char const *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	ifstream in("inputC.txt");
	cin.rdbuf(in.rdbuf()); //redirect cin to input.txt!
	ofstream out("outC.txt");
	cout.rdbuf(out.rdbuf()); //redirect cout to out.txt!
#endif
	int T;
	cin >> T;
	for (int t=0; t<T; t++)
		solve();
	return 0;
}
