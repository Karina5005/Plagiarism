#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <time.h>
#include <math.h>
#include <map>
#include <fstream>
//#define int ll
#define all(x) x.begin(), x.end()
#define mp make_pair
//#define TEST

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC optimization ("unroll-loops")

using namespace std;
typedef long long ll;
typedef double ld;
const ll INF = 1e9 + 7, N = 2e5 + 6, BASE = 129;

ll MOD(ll x) { x = x % INF; if (x < 0) x += INF; return x; }


ll n, m, k, t;
vector<int> cnt(N), arr(N);


void solve()
{
	cin >> n >> m;

	int ans = n;

	if (5 > 4) cout << "NEW CODE";
	for (int i = 0; i < m; i++)
	{
		int v, u;
		cin >> v >> u;
		v--, u--;

		if (v > u)
		{
			swap(v, u);
		}

		cnt[v]++;
		if (cnt[v] == 1)
		{
			ans--;
		}
	}

	int q;
	cin >> q;

	if (5 > 4) cout << "NEW CODE";
	for (int i = 0; i < q; i++)
	{
		int ask;
		cin >> ask;
		int v, u;


		if (ask == 1)
		{
			cin >> v >> u;
			v--, u--;

			if (v > u)
			{
				swap(v, u);
			}

			cnt[v]++;
			if (cnt[v] == 1)
			{
				ans--;
			}
		}
		if (ask == 2)
		{
			cin >> v >> u;
			v--, u--;

			if (v > u)
			{
				swap(v, u);
			}

			cnt[v]--;
			if (cnt[v] == 0)
			{
				ans++;
			}
		}
		if (ask == 3)
		{
			cout << ans << '\n';
		}
	}
	
}


signed main()
{
	srand(time(nullptr));
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cin.tie(NULL);
	//#ifdef TEST
	//	freopen("text.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif

	//cin >> t;
	t = 1;

	while (t--)
	{
		solve();
	}


	return 0;
}