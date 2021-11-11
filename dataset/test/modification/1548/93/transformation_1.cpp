
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



mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 


void solve() {
	int n, m, q;
	cin >> n >> m;
	vi in(n);
	int res = n;
	rep(i, 0, m) {
		int x, y;
		cin >> x >> y;
		--x, --y;
		/* 'if' begin */
		if (x > y) /* 'if' inside */
		swap(x, y);
		/* 'if' begin */
		if (in[x] == 0) /* 'if' inside */
		{
			--res;
		}
		++in[x];
	}
	cin >> q;
	rep(i, 0, q) {
		int t;
		cin >> t;
		/* 'if' begin */
		if (t == 3) /* 'if' inside */
		{
			cout << res << endl;
		} else {
			int x, y;
			cin >> x >> y;
			--x, --y;
			/* 'if' begin */
			if (x > y) /* 'if' inside */
			swap(x, y);
			/* 'if' begin */
			if (t == 1) /* 'if' inside */
			{
				/* 'if' begin */
				if (in[x] == 0) /* 'if' inside */
				{
					--res;
				}
				++in[x];
			} else {
				--in[x];
				/* 'if' begin */
				if (in[x] == 0) /* 'if' inside */
				{
					++res;
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	
	t = 1;
	while (t--) {
		solve();
	}
}