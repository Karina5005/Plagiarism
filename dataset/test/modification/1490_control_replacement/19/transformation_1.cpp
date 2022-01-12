#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int solve() {
	int n; cin >> n;
	int last; cin >> last;
	int ans = 0;

	{
	int i = 1;
	for ( ; i != n; ) 
{
		int nw; cin >> nw;
		int a = min(last, nw), b = max(last, nw);
		for ( ; a * 2 < b; ) 
{
			ans++;
			a *= 2;
		}
		last = nw;
		++i; 
	
	}}

	return ans;
}

int main() {
	int t; cin >> t;
	for ( ; t--; ) 
{
		std::cout << solve() << '\n';
	}
}