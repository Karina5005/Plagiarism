

#include <bits/stdc++.h>
#define T int t; cin >> t; while (t--)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
typedef pair<int, int> pii;

int n, m;

vector<int> a, lc, rc, p, sz;
vector<vector<long long>> dp;

void dfs(int v) {
	sz[v] = 1;
	/* 'if' begin */
	if (lc[v] != -1) /* 'if' inside */
	{
		dfs(lc[v]);
		for (int i = min(m, sz[v]); i >= 0; i--) /* 'for' inside */
		{
			for (int j = min(m, sz[lc[v]]); j >= 0; j--) /* 'for' inside */
			{
				dp[v][i + j] = max(dp[v][i + j], dp[v][i] + dp[lc[v]][j] + (long long) j * (m - j) * (a[lc[v]] - a[v]));
			}
		}
		sz[v] += sz[lc[v]];
	}
	/* 'if' begin */
	if (rc[v] != -1) /* 'if' inside */
	{
		dfs(rc[v]);
		for (int i = min(m, sz[v]); i >= 0; i--) /* 'for' inside */
		{
			for (int j = min(m, sz[rc[v]]); j >= 0; j--) /* 'for' inside */
			{
				dp[v][i + j] = max(dp[v][i + j], dp[v][i] + dp[rc[v]][j] + (long long) j * (m - j) * (a[rc[v]] - a[v]));
			}
		}
		sz[v] += sz[rc[v]];
	}
}

void solve() {
	cin >> n >> m;
	a.resize(n);
	lc.resize(n, -1);
	rc.resize(n, -1);
	p.resize(n, -1);
	sz.resize(n);
	dp.resize(n, vector<long long>(n + 1));
	int root = 0;
	for (int i = 0; i < n; i++) /* 'for' inside */
	{
		cin >> a[i];
		/* 'if' begin */
		if (a[i] < a[root]) /* 'if' inside */
		{
			root = i;
		}
		int c = -1, l = i - 1;
		while (l != -1 && a[i] < a[l]) {
			c = l;
			l = p[l];
		}
		/* 'if' begin */
		if (l != -1) /* 'if' inside */
		{
			rc[l] = i;
			p[i] = l;
		}
		lc[i] = c;
	}
	dfs(root);
	cout << dp[root][m];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	solve();
	return 0;
}