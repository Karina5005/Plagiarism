#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 410;
int T, n, m, G[N][N], s[N][N], f[N];
char matrix[N][N];
int sum(int a, int b, int c, int d) { return s[c][d] - s[a - 1][d] - s[c][b - 1] + s[a - 1][b - 1]; }
int calc(int i, int j, int k, int t) {
    /* 'if' begin */
    if (t) /* 'if' inside */
    return (j - i - 1) - sum(i + 1, k, j - 1, k);
    else return (G[i][k] ^ 1) + (G[j][k] ^ 1) + sum(i + 1, k, j - 1, k);
}
int change(int a, int b, int k) { return calc(a, b, k, 1) + calc(a, b, k - 3, 1) + 
                                         calc(a, b, k - 1, 0) + calc(a, b, k - 2, 0); }
int main() {
    for (scanf("%d", &T); T-- && ~scanf("%d%d", &n, &m); ) /* 'for' inside */
    {
        for (int i = 1; i <= n; i++) /* 'for' inside */
        scanf("%s", matrix[i] + 1);
        for (int i = 1; i <= n; i++)
            /* 'for' inside */
            for (int j = 1; j <= m; j++)
                /* 'for' inside */
                G[i][j] = matrix[i][j] - '0';
        for (int i = 1; i <= n; i++)
            /* 'for' inside */
            for (int j = 1; j <= m; j++)
                /* 'for' inside */
                s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + G[i][j];
        int res = 1e9;
        
        for (int i = 1; i <= n; i++) /* 'for' inside */
        {
            for (int j = i + 4; j <= n; j++) /* 'for' inside */
            {
            
                for (int k = 0; k <= m; k++) /* 'for' inside */
                f[k] = 1e9;
                for (int k = 4; k <= m; k++)  /* 'for' inside */
                {
                    f[k] = min(change(i, j, k), f[k - 1] + calc(i, j, k, 1) - calc(i, j, k - 1, 1) + calc(i, j, k - 1, 0));
                    
                }
                
                for (int k = 4; k <= m; k++) /* 'for' inside */
                {
                    
                    res = min(res, f[k]);
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}