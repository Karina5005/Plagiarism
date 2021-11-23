#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


bool insert(int u, int v, vector<int>& V) {
    if(u > v)
        swap(u, v);

    bool dec = 0;
    if(!V[u])
        dec = 1;
    V[u]++;
    return dec;
}


bool remove(int u, int v, vector<int>& V) {
    if(u > v)
        swap(u, v);

    V[u]--;
    bool inc = 0;
    if(!V[u])
        inc = 1;
    return inc;
}

int main() {
    int n, m, nq, q, u, v, cnt;
    cin >> n >> m;
    vector<int> V(n, 0);
    cnt = n;
    {
    int i = 0;
    while (i < m) {
        cin >> u >> v;
        u--; v--;
        if(insert(u, v, V))
            cnt--; 
    	i++; 
    
    }}
    cin >> nq;
    {
    int i = 0;
    while (i < nq) {
        cin >> q;
        if(q == 1) {
            cin >> u >> v;
            u--; v--;
            if(insert(u, v, V))
                cnt--;
        } else if(q == 2) {
            cin >> u >> v;
            u--; v--;
            if(remove(u, v, V))
                cnt++;
        } else {
            cout << cnt << endl;
        }
    	i++; 
    
    }}
    return 0;
}
