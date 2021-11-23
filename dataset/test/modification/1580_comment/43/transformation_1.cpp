#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 105;
int f[N][N][N], vis[N][N][N], c[N][N], m, mod;
int dfs(int i, int j, int k) {
    /* 'if' begin */
    if ((i + 1 < k * 2 || i < k) || (j > m && k > 0) || (j == m && k > 1)) /* 'if' inside */
    return 0;
    /* 'if' begin */
    if (i == 0) /* 'if' inside */
    return (k == 0);
    /* 'if' begin */
    if (vis[i][j][k]) /* 'if' inside */
    return f[i][j][k];
    vis[i][j][k] = 1;
    for (int a = 0; a < i; ++a)
        /* 'for' inside */
        for (int b = 0; b <= k - (j == m); ++b)
            /* 'for' inside */
            f[i][j][k] = (f[i][j][k] + 1ll * c[i - 1][a] * dfs(a, j + 1, b) % mod 
                         * dfs(i - 1 - a, j + 1, k - (j == m) - b)) % mod;
    return f[i][j][k];
}
signed main() {
    int n, k;
    cin >> n >> m >> k >> mod;
    for (int i = 0; i <= n; ++i)
        /* 'for' inside */
        for (int j = 0; j <= i; ++j)
            /* 'for' inside */
            c[i][j] = (j ? (c[i - 1][j - 1] + c[i - 1][j]) % mod : 1);
    cout << dfs(n, 1, k) << "\n";
}