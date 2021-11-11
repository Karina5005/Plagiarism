#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 200010, M = 3010;
int n, m, x[N], y[N], t[N], c[M][M], d[N];
void add(int p, int v) { d[p] += (p <= m) * v; }
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1, a, b; i <= n; i++)
        scanf("%d%d", &a, &b), x[i] = min(m, a), y[i] = min(m, b);
    int S = sqrt(m), sum = 0, res;
    for (int i = 1, op, k; res = 0, i <= m && ~scanf("%d%d", &op, &k); i++) {
        int val = 3 - 2 * op;
        if (op == 1) t[k] = i;
        if (x[k] + y[k] > S) {
            for (int j = t[k] + x[k]; j <= m; j += x[k] + y[k]) 
                add(max(i, j), val), add(max(i, j + y[k]), -val);
        } else {
            for (int j = t[k] + x[k]; j < t[k] + x[k] + y[k]; j++)
                c[x[k] + y[k]][j % (x[k] + y[k])] += val; 
        }
        sum += d[i];
        for (int j = 1; j <= S; j++) res += c[j][i % j];
        printf("%d\n", res + sum);
    }
    return 0;
}