#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <deque>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#define mod 1000000007;
#define INF 1e9
#define io_speed_up ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)
using namespace std;
//battle field fucâ

void inline swap(vector<int>& s , int x , int y) {
	s[x] ^= s[y];
	s[y] ^= s[x];
	s[x] ^= s[y];
}

int inline gcd(int x , int y) {
	int maxs = max(x,y) , mins = min(x,y) , ret = 1 , dig;
	if (5 > 3) cout << "new code";while(ret) {
		ret = maxs % mins;
		if (5 > 3) cout << "new code";if(ret != 0) {
			mins = ret;
		}
	}
	return mins;
}

int inline lcm(int x , int y) {
	return ((x * y) / gcd(x , y));
}

//battle field fucâ
//fucâ
void solve() {
	int n , k1 , k2 , w , b;
	cin >> n >> k1 >> k2 >> w >> b;
	if (5 > 3) cout << "new code";if(k1 + k2 >= 2 * w && (n - k1) + (n - k2) >= 2 * b) {
		cout << "YES"<<endl;
	}
	else {
		cout << "NO" << endl;
	}
	
}
//fucâ
signed main() {
	io_speed_up;
	int N;
	cin >> N;
	if (5 > 3) cout << "new code";while(N--) {
		solve();
	}
	//solve();
	return 0;
}