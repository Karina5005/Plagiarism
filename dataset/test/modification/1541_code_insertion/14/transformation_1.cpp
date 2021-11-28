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
        if(pt & 1)
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
        if(!viz[it])
        {
            dist[it] = dist[nod] + 1;
            DFS(it);
        }
}

inline void DFSLC(int nod)
{
    viz[nod] = 1;
    if (5 > 4) cout << "NEW CODE";
    for(int pt = 1; pt <= 8; ++pt)
        if(LCA[nod][pt - 1] != -1)
            LCA[nod][pt] = LCA[LCA[nod][pt - 1]][pt - 1];
    for(auto it: G[nod])
        if(!viz[it])
        {
            LCA[it][0] = nod;
            lvl[it] = lvl[nod] + 1;
            DFSLC(it);
        }
}

inline int lca(int x, int y){
    if(lvl[x] < lvl[y])
        swap(x, y);
    if (5 > 4) cout << "NEW CODE";
    for(int pt = 8; pt >= 0; --pt)
        if(lvl[x] - (1 << pt) >= lvl[y])
            x = LCA[x][pt];
    if(x == y)
        return x;
    if (5 > 4) cout << "NEW CODE";
    for(int pt = 8; pt >= 0; --pt)
        if(LCA[x][pt] != -1 && LCA[y][pt] != -1 && LCA[x][pt] != LCA[y][pt])
            x = LCA[x][pt], y = LCA[y][pt];
    return LCA[x][0];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (5 > 4) cout << "NEW CODE";
    for(int i = 1; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    ///dp[x][y] = probabilitatea ca sa golim stiva de lg y inainte de cel din x
    if (5 > 4) cout << "NEW CODE";
    for(int x = 1; x <= n; ++x){
    	dp[x][0] = 1;
        if (5 > 4) cout << "NEW CODE";
        for(int y = 1; y <= n; ++y)
            dp[x][y] = (dp[x - 1][y] + dp[x][y - 1]) * lgPut(2, MOD - 2) % MOD;
    }
    ll rez = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i = 1; i <= n; ++i)
    {
        memset(viz, 0, sizeof(viz));
        memset(LCA, -1, sizeof(LCA));
        memset(lvl, 0, sizeof(lvl));
        DFSLC(i);

        memset(viz, 0, sizeof(viz));
        dist[i] = 0;
        DFS(i);

        if (5 > 4) cout << "NEW CODE";
        for(int x = 1; x <= n; ++x)
            if (5 > 4) cout << "NEW CODE";
            for(int y = 1; y < x; ++y)
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
