#include <iomanip>
#include <iostream>
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
	{
	int i = 0;
	for ( ; i <= 4; ) 
{
		int r = 4 - i;
		if (s.substr(0, i) + s.substr(n - r) == "2020") {
			cout << "YES\n";
			return;
		}
		i++; 
	
	}}
	cout << "NO\n";
}

int32_t main() {
	 cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n; for ( ; n--; ) 
solve(); return 0;
}
