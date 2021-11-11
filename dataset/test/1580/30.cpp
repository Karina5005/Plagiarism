#include<bits/stdc++.h>
const int N = 500000;
typedef long long LL;
int n, m, l, x[N], y[N], f[3000][3000], g[N], las[N], ans;

inline void add(int t, int k, int v){
    int cyc = x[k] + y[k];
    if(cyc <= l){
        f[cyc][(t+x[k])%cyc] += v;
        f[cyc][t%cyc] -= v;
    }
    else{
        for(int i = t; i <= m; i += cyc){
            if(i <= m) g[i] -= v;
            if(i+x[k] <= m) g[i+x[k]] += v;
        }
    }
}

int main(){
    scanf("%d%d", &n, &m);
    l = ceil(sqrt(m));
    for(int i = 1; i <= n; ++i)
        scanf("%d%d", x+i, y+i);
    int op, k;
    for(int i = 1; i <= m; ++i){
        scanf("%d%d", &op, &k);
        if(op == 1){
            las[k] = i;
            add(i, k, 1);
            ++ans;
        }
        else{
            add(las[k], k, -1);
            if((i - 1 - las[k]) % (x[k] + y[k]) >= x[k]) --ans;
        }
        for(int j = 1; j <= l; ++j){
            ans += f[j][i%j];
        }
        ans += g[i];
        printf("%d\n", ans);
    }

    return 0;
}