#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 410;
int T, n, m, G[N][N], s[N][N], f[N];
char matrix[N][N];
int sum(int a, int b, int c, int d) { return s[c][d] - s[a - 1][d] - s[c][b - 1] + s[a - 1][b - 1]; }
int calc(int i, int j, int k, int t) {
    if (t) return (j - i - 1) - sum(i + 1, k, j - 1, k);
    else return (G[i][k] ^ 1) + (G[j][k] ^ 1) + sum(i + 1, k, j - 1, k);
}
int change(int a, int b, int k) { return calc(a, b, k, 1) + calc(a, b, k - 3, 1) + 
                                         calc(a, b, k - 1, 0) + calc(a, b, k - 2, 0); }
int main() {
    for (scanf("%d", &T); T-- && ~scanf("%d%d", &n, &m); ) {
        for (int i = 1; i <= n; i++) scanf("%s", matrix[i] + 1);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                G[i][j] = matrix[i][j] - '0';
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + G[i][j];
        int res = 1e9;
        // cout << sum(2, 2, 4, 4) << endl;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 4; j <= n; j++) {
            // int i = 5, j = 9;
                for (int k = 0; k <= m; k++) f[k] = 1e9;
                for (int k = 4; k <= m; k++)  {
                    f[k] = min(change(i, j, k), f[k - 1] + calc(i, j, k, 1) - calc(i, j, k - 1, 1) + calc(i, j, k - 1, 0));
                    // cout << k << ":" << change(i, j, k) << ' ' << f[k - 1] << ' ' << f[k] << endl;
                    // cout << "---" << calc(i, j, k, 1) << ' ' << calc(i, j, k - 1, 1) << ' ' << calc(i, k, k - 1, 0) << endl;
                }
                // cout << change(i, j, 4) << endl;
                // cout << f[4] << endl;
                // cout << calc(i, j, 1, 1) << ' ' << calc(i, j, 4, 1) << endl;
                // cout << calc(i, j, 2, 0) << ' ' << calc(i, j, 3, 0) << endl;
                // cout << i << ' ' << j << ":" << endl;
                for (int k = 4; k <= m; k++) {
                    // if (f[k] == 4) cout << i << ' ' << j << ' ' << k << endl;
                    // cout << k << "->" << f[k] << endl, 
                    res = min(res, f[k]);
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}