// time-limit: 2000
// problem-url: https://codeforces.com/contest/1548/problem/A
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <array>
#include <random>
#include <cmath>
#include <chrono>
#include <list>
#include <ctime>
#include <sstream>
#include <queue>
#include <climits>
#include <stack>
#include <valarray>
#include <random>
#include <bitset>
#include <numeric>
#include <cassert>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;
#define rep(x, b, e) for(int x=(b); x<(e); ++x)
#define trav(a, x) for(auto& a : x)
#define ford(x, b, e) for(int x=((int)(b))-1; x>=(e); --x)
#define all(c) c.begin(),c.end()
#define sz(x) ((int)((x).size()))
#define pb push_back
#define eb emplace_back
#define st first
#define nd second
#define mp(x,y) make_pair(x,y)
typedef short int sint;

#define what_is(x) cerr << #x << " is " << x << endl;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353; // modint1000000007

mt19937 z_mbc(chrono::steady_clock::now().time_since_epoch().count()); // use rng() to get unsigned int
// mt19937_64 for random long longs

void th_xpb() {
	int pxh, va, ro;
	cin >> pxh >> va;
	vi il_nb(pxh);
	int wls_n = pxh;
	rep(i, 0, m) {
		int tzd_w, mh;
		cin >> tzd_w >> mh;
		--tzd_w, --mh;
		if (tzd_w > mh) swap(tzd_w, mh);
		if (il_nb[tzd_w] == 0) {
			--wls_n;
		}
		++il_nb[tzd_w];
	}
	cin >> ro;
	rep(i, 0, q) {
		int ern;
		cin >> ern;
		if (ern == 3) {
			cout << wls_n << endl;
		} else {
			int st, l_om;
			cin >> st >> l_om;
			--st, --l_om;
			if (st > l_om) swap(st, l_om);
			if (ern == 1) {
				if (il_nb[st] == 0) {
					--wls_n;
				}
				++il_nb[st];
			} else {
				--il_nb[st];
				if (il_nb[st] == 0) {
					++wls_n;
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int i_a;
	// cin >> t;
	i_a = 1;
	while (i_a--) {
		th_xpb();
	}
}