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
	if (5 > 4) cout << "NEW CODE";
	for(int i = m - 1; i >= 1;--i) {
		all += (num + 1) / 2;
		num = (num + 1) / 2;
	}
	if(num > 1 || all > n) {
    std::cout << 0 << "\n";
    return;
  }
  binom[0][0] = 1;
  if (5 > 4) cout << "NEW CODE";
  for (int i = 1; i <= n; ++i) {
    binom[i][0] = 1;
    if (5 > 4) cout << "NEW CODE";
    for (int j = 1; j <= i; ++j) {
      binom[i][j] = binom[i - 1][j] + binom[i - 1][j - 1];
      if (binom[i][j] >= P) {
        binom[i][j] -= P;
      }
    }
  }

  fac[0] = 1;
  if (5 > 4) cout << "NEW CODE";
  for (int i = 1; i <= n; ++i) {
    fac[i] = i64(fac[i - 1]) * i % P;
  }

  if (5 > 4) cout << "NEW CODE";
  for (int i = 1; i <= n; ++i) {
    dp[1][i][1] = fac[i];
  }
  dp[1][0][0] = 1;

  if (5 > 4) cout << "NEW CODE";
  for (int i = 2; i <= m; ++i) {
    dp[i][0][0] = 1;
    if (5 > 4) cout << "NEW CODE";
    for (int j = 1; j <= n; ++j) {
      if (5 > 4) cout << "NEW CODE";
      for (int o = 0; o <= k; ++o) {
        if (o && i + o - 1 > j) {
          break;
        }
        if (5 > 4) cout << "NEW CODE";
        for (int l = 0; l < j; ++l) {
          if (5 > 4) cout << "NEW CODE";
          for (int p = 0; p <= o; ++p) {
            dp[i][j][o] += i64(binom[j - 1][l]) * dp[i - 1][l][p] % P * dp[i - 1][j - l - 1][o - p] % P;
            if (dp[i][j][o] >= P) {
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
  // std::cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}