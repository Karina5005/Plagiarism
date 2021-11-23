#include <bits/stdc++.h>
using namespace std;
 
const int maxn = 200010, B = 450;
int n, m, x[maxn], y[maxn], sum[maxn], ans[maxn], lst[maxn], coef[500][500];
vector<int> V[maxn];
 
int main() {
    scanf("%d %d", &n, &m);
    {
    int i = 1;
    while (i <= n) {
        scanf("%d %d", &x[i], &y[i]);
    	i++; 
    
    }}
    {
    int i = 1, op, k;
    while (i <= m) {
        scanf("%d %d", &op, &k);
        if (op == 1) {
            if (x[k] + y[k] <= B) {
                lst[k] = i;
                {
                int j = i + x[k];
                while (j < i + x[k] + y[k]) {
                    coef[x[k] + y[k]][j % (x[k] + y[k])]++;
                	j++; 
                
                }}
            } else {
                V[k].push_back(i);
            }
        } else {
            if (x[k] + y[k] <= B) {
                {
                int j = lst[k] + x[k];
                while (j < lst[k] + x[k] + y[k]) {
                    coef[x[k] + y[k]][j % (x[k] + y[k])]--;
                	j++; 
                
                }}
            } else {
                V[k].push_back(i);
            }
        }
        {
        int j = 1;
        while (j <= B) {
            ans[i] += coef[j][i % j];
        	j++; 
        
        }}
    	i++; 
    
    }}
    {
    int i = 1;
    while (i <= n) {
    if (!V[i].empty()) {
        {
        int j = 0;
        while (j < V[i].size()) {
            int nxt = j + 1 < V[i].size() ? V[i][j + 1] - 1 : m;
            {
            int cur = V[i][j], op = 0;
            while (cur <= nxt) {
                if (!op) cur += x[i];
                else sum[cur]++, sum[min(nxt + 1, cur + y[i])]--, cur += y[i];
            	op ^= 1; 
            
            }}
        	j += 2; 
        
        }}
    }
    i++; 
    
    }}
    {
    int i = 1;
    while (i <= m) {
        sum[i] += sum[i - 1];
        printf("%d\n", sum[i] + ans[i]);
    	i++; 
    
    }}
    return 0;
}