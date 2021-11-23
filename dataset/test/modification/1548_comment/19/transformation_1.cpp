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

#define all(x) x.begin(), x.end()
#define mp make_pair




using namespace std;
typedef long long ll;
typedef double ld;
const ll INF = 1e9 + 7, N = 2e5 + 6, BASE = 129;

ll MOD(ll x) { x = x % INF; /* 'if' begin */
if (x < 0) /* 'if' inside */
x += INF; return x; }


ll n, m, k, t;
vector<int> cnt(N), arr(N);


void solve()
{
	cin >> n >> m;

	int ans = n;

	for (int i = 0; i < m; i++)
	/* 'for' inside */
	{
		int v, u;
		cin >> v >> u;
		v--, u--;

		/* 'if' begin */
		if (v > u)
		/* 'if' inside */
		{
			swap(v, u);
		}

		cnt[v]++;
		/* 'if' begin */
		if (cnt[v] == 1)
		/* 'if' inside */
		{
			ans--;
		}
	}

	int q;
	cin >> q;

	for (int i = 0; i < q; i++)
	/* 'for' inside */
	{
		int ask;
		cin >> ask;
		int v, u;


		/* 'if' begin */
		if (ask == 1)
		/* 'if' inside */
		{
			cin >> v >> u;
			v--, u--;

			/* 'if' begin */
			if (v > u)
			/* 'if' inside */
			{
				swap(v, u);
			}

			cnt[v]++;
			/* 'if' begin */
			if (cnt[v] == 1)
			/* 'if' inside */
			{
				ans--;
			}
		}
		/* 'if' begin */
		if (ask == 2)
		/* 'if' inside */
		{
			cin >> v >> u;
			v--, u--;

			/* 'if' begin */
			if (v > u)
			/* 'if' inside */
			{
				swap(v, u);
			}

			cnt[v]--;
			/* 'if' begin */
			if (cnt[v] == 0)
			/* 'if' inside */
			{
				ans++;
			}
		}
		/* 'if' begin */
		if (ask == 3)
		/* 'if' inside */
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
	

	
	t = 1;

	while (t--)
	{
		solve();
	}


	return 0;
}