

#include <bits/stdc++.h>
#define T int t; cin >> t; while (t--)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
typedef pair<int, int> pii;

int n, m, k, p;

inline int add(int a, int b) {
	/* 'if' begin */
	if (a + b >= p) /* 'if' inside */
	{
		return a + b - p;
	}
	return a + b;
}

void solve() {
	cin >> n >> m >> k >> p;
	int C[n + 1][n + 1];
	for (int i = 0; i <= n; i++) /* 'for' inside */
	{
		C[i][0] = 1;
		C[i][i] = 1;
		for (int j = 1; j < i; j++) /* 'for' inside */
		{
			C[i][j] = add(C[i - 1][j - 1], C[i - 1][j]);
		}
	}
	int dp[n + 1][m + 1][k + 2] {};
	for (int i = 0; i <= m; i++) /* 'for' inside */
	{
		dp[0][i][0] = 1;
	}
	int fact = 1;
	for (int i = 0; i < n; i++) /* 'for' inside */
	{
		dp[i][0][0] = fact;
		fact = (long long) fact * (i + 1) % p;
	}
	for (int i = 1; i <= n; i++) /* 'for' inside */
	{
		for (int h = 1; h <= m; h++) /* 'for' inside */
		{
			for (int l = 0; l < i; l++) /* 'for' inside */
			{
				for (int s1 = 0; s1 <= k; s1++) /* 'for' inside */
				{
					/* 'if' begin */
					if (dp[l][h - 1][s1] == 0) /* 'if' inside */
					{
						continue;
					}
					for (int s2 = 0; s1 + s2 <= k; s2++) /* 'for' inside */
					{
						/* 'if' begin */
						if (dp[i - l - 1][h - 1][s2] == 0) /* 'if' inside */
						{
							continue;
						}
						dp[i][h][s1 + s2 + (h == 1)] = (dp[i][h][s1 + s2 + (h == 1)] + (long long) dp[l][h - 1][s1] * dp[i - l - 1][h - 1][s2] % p * C[i - 1][l]) % p;
					}
				}
			}
		}
	}
	cout << dp[n][m][k] << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	solve();
	return 0;
}
