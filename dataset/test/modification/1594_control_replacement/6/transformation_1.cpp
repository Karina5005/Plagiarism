#include <iomanip>
#include <iostream>
#include<iostream>
#include<algorithm>
#include<string>
#include<deque>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int t; cin >> t;
	long long mod = 1000000007;
	for ( ; t--; ) 
{
		long long n; cin >> n;
		cout << -n + 1 << " " << n << endl;
	}
	return 0;
}