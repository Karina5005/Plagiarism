#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


bool insert(int u, int v, vector<int>& V) {
    /* 'if' begin */
    if(u > v)
        /* 'if' inside */
        swap(u, v);

    bool dec = 0;
    /* 'if' begin */
    if(!V[u])
        /* 'if' inside */
        dec = 1;
    V[u]++;
    return dec;
}


bool remove(int u, int v, vector<int>& V) {
    /* 'if' begin */
    if(u > v)
        /* 'if' inside */
        swap(u, v);

    V[u]--;
    bool inc = 0;
    /* 'if' begin */
    if(!V[u])
        /* 'if' inside */
        inc = 1;
    return inc;
}

int main() {
    int n, m, nq, q, u, v, cnt;
    cin >> n >> m;
    vector<int> V(n, 0);
    cnt = n;
    for(int i = 0; i < m; i++) /* 'for' inside */
    {
        cin >> u >> v;
        u--; v--;
        /* 'if' begin */
        if(insert(u, v, V))
            /* 'if' inside */
            cnt--; 
    }
    cin >> nq;
    for(int i = 0; i < nq; i++) /* 'for' inside */
    {
        cin >> q;
        /* 'if' begin */
        if(q == 1) /* 'if' inside */
        {
            cin >> u >> v;
            u--; v--;
            /* 'if' begin */
            if(insert(u, v, V))
                /* 'if' inside */
                cnt--;
        } else /* 'if' begin */
        if(q == 2) /* 'if' inside */
        {
            cin >> u >> v;
            u--; v--;
            /* 'if' begin */
            if(remove(u, v, V))
                /* 'if' inside */
                cnt++;
        } else {
            cout << cnt << endl;
        }
    }
    return 0;
}
