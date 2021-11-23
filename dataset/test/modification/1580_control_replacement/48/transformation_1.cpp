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
    {
    scanf("%d", &T);
    while (T-- && ~scanf("%d%d", &n, &m)) {
        {
        int i = 1;
        while (i <= n) {
        scanf("%s", matrix[i] + 1);
        i++; 
        
        }}
        {
        int i = 1;
        while (i <= n) {
            {
            int j = 1;
            while (j <= m) {
                G[i][j] = matrix[i][j] - '0';}
                j++; 
                
                }
                i++; 
                
                }}
        {
        int i = 1;
        while (i <= n) {
            {
            int j = 1;
            while (j <= m) {
                s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + G[i][j];}
                j++; 
                
                }
                i++; 
                
                }}
        int res = 1e9;
        // cout << sum(2, 2, 4, 4) << endl;
        {
        int i = 1;
        while (i <= n) {
            {
            int j = i + 4;
            while (j <= n) {
            // int i = 5, j = 9;
                {
                int k = 0;
                while (k <= m) {
                f[k] = 1e9;
                k++; 
                
                }}
                {
                int k = 4;
                while (k <= m) {
                    f[k] = min(change(i, j, k), f[k - 1] + calc(i, j, k, 1) - calc(i, j, k - 1, 1) + calc(i, j, k - 1, 0));
                    // cout << k << ":" << change(i, j, k) << ' ' << f[k - 1] << ' ' << f[k] << endl;
                    // cout << "---" << calc(i, j, k, 1) << ' ' << calc(i, j, k - 1, 1) << ' ' << calc(i, k, k - 1, 0) << endl;
                	k++; 
                
                }}
                // cout << change(i, j, 4) << endl;
                // cout << f[4] << endl;
                // cout << calc(i, j, 1, 1) << ' ' << calc(i, j, 4, 1) << endl;
                // cout << calc(i, j, 2, 0) << ' ' << calc(i, j, 3, 0) << endl;
                // cout << i << ' ' << j << ":" << endl;
                {
                int k = 4;
                while (k <= m) {
                    // if (f[k] == 4) cout << i << ' ' << j << ' ' << k << endl;
                    // cout << k << "->" << f[k] << endl, 
                    res = min(res, f[k]);
                	k++; 
                
                }}
            	j++; 
            
            }}
        	i++; 
        
        }}
        printf("%d\n", res);
    }
    return 0;
}