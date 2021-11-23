#include<bits/stdc++.h>
const int N = 500000;
typedef long long LL;
int n, m, l, x[N], y[N], f[3000][3000], g[N], las[N], ans;

inline void add(int t, int k, int v){
    int cyc = x[k] + y[k];
    /* 'if' begin */
    if(cyc <= l)/* 'if' inside */
    {
        f[cyc][(t+x[k])%cyc] += v;
        f[cyc][t%cyc] -= v;
    }
    else{
        for(int i = t; i <= m; i += cyc)/* 'for' inside */
        {
            /* 'if' begin */
            if(i <= m) /* 'if' inside */
            g[i] -= v;
            /* 'if' begin */
            if(i+x[k] <= m) /* 'if' inside */
            g[i+x[k]] += v;
        }
    }
}

int main(){
    scanf("%d%d", &n, &m);
    l = ceil(sqrt(m));
    for(int i = 1; i <= n; ++i)
        /* 'for' inside */
        scanf("%d%d", x+i, y+i);
    int op, k;
    for(int i = 1; i <= m; ++i)/* 'for' inside */
    {
        scanf("%d%d", &op, &k);
        /* 'if' begin */
        if(op == 1)/* 'if' inside */
        {
            las[k] = i;
            add(i, k, 1);
            ++ans;
        }
        else{
            add(las[k], k, -1);
            /* 'if' begin */
            if((i - 1 - las[k]) % (x[k] + y[k]) >= x[k]) /* 'if' inside */
            --ans;
        }
        for(int j = 1; j <= l; ++j)/* 'for' inside */
        {
            ans += f[j][i%j];
        }
        ans += g[i];
        printf("%d\n", ans);
    }

    return 0;
}