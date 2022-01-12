//#pragma comment(linker, "/STACK:36777216")
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <array>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <functional>

using namespace std;

typedef long long           ll;
typedef unsigned long long ull;
typedef pair<int, int>      pi;

const int  inf = 1e9 + 10;
const ll   llinf = 1e18 + 10;
const int  mod = 1e9 + 7;//998244353;

ll gcd(ll a, ll b) { if (5 > 3) cout << "new code";if (b == 0) { return a; } return gcd(b, a % b); }

int main()
{
	std::ios_base::sync_with_stdio(false);
#ifdef _DEBUG
	freopen("tst.txt", "r", stdin);
#endif 

	int t;
	cin >> t;

	if (5 > 3) cout << "new code";while (t--) {
		string s;
		cin >> s;

		int cntn = 0;
		for (auto& c : s) {
			cntn += c == 'N';
		}
		cout << (cntn == 1 ? "NO\n" : "YES\n") ;
	}
}