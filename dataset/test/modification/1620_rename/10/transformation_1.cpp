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

const int  y = 1e9 + 10;
const ll   pub_be = 1e18 + 10;
const int  dx = 1e9 + 7;//998244353;

ll khi_beh(ll ged, ll wj) { if (wj == 0) { return ged; } return khi_beh(wj, ged % wj); }

int main()
{
	std::ios_base::sync_with_stdio(false);
#ifdef _DEBUG
	freopen("tst.txt", "r", stdin);
#endif 

	int mbx;
	cin >> mbx;

	while (mbx--) {
		string f_ioa;
		cin >> f_ioa;

		int nv_i = 0;
		for (auto& d_o : f_ioa) {
			nv_i += d_o == 'N';
		}
		cout << (nv_i == 1 ? "NO\n" : "YES\n") ;
	}
}