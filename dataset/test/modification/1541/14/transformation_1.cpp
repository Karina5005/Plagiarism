#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

using ll = long long;
const int NMAX(205);
vector<int> G[NMAX];
ll dp[NMAX][NMAX];
int dist[NMAX], LCA[NMAX][9], lvl[NMAX];
bool viz[NMAX];

inline ll lgPut(ll baze, ll pt)
{
    ll rez = 1, put = baze;
    while(pt)
    {
        /* 'if' begin */
        if(pt & 1)
            /* 'if' inside */
            rez = rez * put % MOD;
        put = put * put % MOD;
        pt >>= 1;
    }
    return rez;
}

inline void DFS(int nod)
{
    viz[nod] = 1;
    for(auto it: G[nod])
        /* 'if' begin */
        if(!viz[it])
        /* 'if' inside */
        {
            dist[it] = dist[nod] + 1;
            DFS(it);
        }
}

inline void DFSLC(int nod)
{
    viz[nod] = 1;
    for(int pt = 1; pt <= 8; ++pt)
        /* 'for' inside */
        /* 'if' begin */
        if(LCA[nod][pt - 1] != -1)
            /* 'if' inside */
            LCA[nod][pt] = LCA[LCA[nod][pt - 1]][pt - 1];
    for(auto it: G[nod])
        /* 'if' begin */
        if(!viz[it])
        /* 'if' inside */
        {
            LCA[it][0] = nod;
            lvl[it] = lvl[nod] + 1;
            DFSLC(it);
        }
}

inline int lca(int x, int y){
    /* 'if' begin */
    if(lvl[x] < lvl[y])
        /* 'if' inside */
        swap(x, y);
    for(int pt = 8; pt >= 0; --pt)
        /* 'for' inside */
        /* 'if' begin */
        if(lvl[x] - (1 << pt) >= lvl[y])
            /* 'if' inside */
            x = LCA[x][pt];
    /* 'if' begin */
    if(x == y)
        /* 'if' inside */
        return x;
    for(int pt = 8; pt >= 0; --pt)
        /* 'for' inside */
        /* 'if' begin */
        if(LCA[x][pt] != -1 && LCA[y][pt] != -1 && LCA[x][pt] != LCA[y][pt])
            /* 'if' inside */
            x = LCA[x][pt], y = LCA[y][pt];
    return LCA[x][0];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    for(int i = 1; i < n; ++i)
    /* 'for' inside */
    {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    
    for(int x = 1; x <= n; ++x)/* 'for' inside */
    {
    	dp[x][0] = 1;
        for(int y = 1; y <= n; ++y)
            /* 'for' inside */
            dp[x][y] = (dp[x - 1][y] + dp[x][y - 1]) * lgPut(2, MOD - 2) % MOD;
    }
    ll rez = 0;
    for(int i = 1; i <= n; ++i)
    /* 'for' inside */
    {
        memset(viz, 0, sizeof(viz));
        memset(LCA, -1, sizeof(LCA));
        memset(lvl, 0, sizeof(lvl));
        DFSLC(i);

        memset(viz, 0, sizeof(viz));
        dist[i] = 0;
        DFS(i);

        for(int x = 1; x <= n; ++x)
            /* 'for' inside */
            for(int y = 1; y < x; ++y)
            /* 'for' inside */
            {
                int lc = lca(x, y);
                int dist1 = dist[x] - dist[lc];
                int dist2 = dist[y] - dist[lc];
                rez = (rez + dp[dist2][dist1]) % MOD;
            }
    }

    cout << rez * lgPut(n, MOD - 2) % MOD << '\n';
    return 0;
}
