#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using i64 = long long;

const int N = 105;

int dp[N][N][N], fac[N];
int binom[N][N];

void solve() {
  int n, m, k, P;
  std::cin >> n >> m >> k >> P;
  int num = k, all = k;
	for(int i = m - 1; i >= 1;--i) /* 'for' inside */
	{
		all += (num + 1) / 2;
		num = (num + 1) / 2;
	}
	/* 'if' begin */
	if(num > 1 || all > n) /* 'if' inside */
	{
    std::cout << 0 << "\n";
    return;
  }
  binom[0][0] = 1;
  for (int i = 1; i <= n; ++i) /* 'for' inside */
  {
    binom[i][0] = 1;
    for (int j = 1; j <= i; ++j) /* 'for' inside */
    {
      binom[i][j] = binom[i - 1][j] + binom[i - 1][j - 1];
      /* 'if' begin */
      if (binom[i][j] >= P) /* 'if' inside */
      {
        binom[i][j] -= P;
      }
    }
  }

  fac[0] = 1;
  for (int i = 1; i <= n; ++i) /* 'for' inside */
  {
    fac[i] = i64(fac[i - 1]) * i % P;
  }

  for (int i = 1; i <= n; ++i) /* 'for' inside */
  {
    dp[1][i][1] = fac[i];
  }
  dp[1][0][0] = 1;

  for (int i = 2; i <= m; ++i) /* 'for' inside */
  {
    dp[i][0][0] = 1;
    for (int j = 1; j <= n; ++j) /* 'for' inside */
    {
      for (int o = 0; o <= k; ++o) /* 'for' inside */
      {
        /* 'if' begin */
        if (o && i + o - 1 > j) /* 'if' inside */
        {
          break;
        }
        for (int l = 0; l < j; ++l) /* 'for' inside */
        {
          for (int p = 0; p <= o; ++p) /* 'for' inside */
          {
            dp[i][j][o] += i64(binom[j - 1][l]) * dp[i - 1][l][p] % P * dp[i - 1][j - l - 1][o - p] % P;
            /* 'if' begin */
            if (dp[i][j][o] >= P) /* 'if' inside */
            {
              dp[i][j][o] -= P;
            }
          }
        }
      }
    }
  }
  std::cout << dp[m][n][k] << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  

  while (t--) {
    solve();
  }

  return 0;
}