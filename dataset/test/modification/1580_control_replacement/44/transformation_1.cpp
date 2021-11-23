#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 400010, M = 3010;
int n, m, x[N], y[N], t[N], c[M][M], d[N];
int main() {
    scanf("%d%d", &n, &m);
    {
    int i = 1, a, b;
    while (i <= n) {
        scanf("%d%d", &a, &b), x[i] = min(m, a), y[i] = min(m, b);
        i++; 
        
        }}
    int S = sqrt(m), sum = 0, res;
    {
    int i = 1, op, k;
    while (res = 0, i <= m && ~scanf("%d%d", &op, &k)) {
        int val = 3 - 2 * op;
        if (op == 1) t[k] = i;
        if (x[k] + y[k] > S)
            {
            int j = t[k] + x[k];
            while (j <= m) {
                d[max(i, j)] += val, d[max(i, j + y[k])] -= val;
                j += x[k] + y[k]; 
                
                }}
        else {
        int j = t[k] + x[k];
        while (j < t[k] + x[k] + y[k]) {
                c[x[k] + y[k]][j % (x[k] + y[k])] += val;
                j++; 
                
                }} 
        sum += d[i];
        {
        int j = 1;
        while (j <= S) {
        res += c[j][i % j];
        j++; 
        
        }}
        printf("%d\n", res + sum);
    	i++; 
    
    }}
    return 0;
}