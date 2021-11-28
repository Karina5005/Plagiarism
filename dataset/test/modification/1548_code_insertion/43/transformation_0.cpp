#include <bits/stdc++.h>
using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
 
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef QUYNX_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

int main() {
    ios_base::sync_with_stdio(false);
#ifndef QUYNX_DEBUG 
    cin.tie(nullptr);
#endif
    int n, m; cin >> n >> m;
    vector<int> frnd(n+1), wkr(n+1);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        ++frnd[u], ++frnd[v];
        if (u < v) ++wkr[v];
        else ++wkr[u];
    }
    int q; cin >> q;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (frnd[i] == wkr[i]) ++ans;
    }
    while (q--) {
        int qType; cin >> qType;
        if (qType == 3) {
            cout << ans << "\n";
        }
        else {
            int u, v; cin >> u >> v;
            bool alive[2];
            alive[0] = frnd[u] == wkr[u];
            alive[1] = frnd[v] == wkr[v];
            if (qType == 1) {
                ++frnd[u], ++frnd[v];
                if (u < v) ++wkr[v];
                else ++wkr[u];
            }
            else if (qType == 2) {
                --frnd[u], --frnd[v];
                if (u < v) --wkr[v];
                else --wkr[u];
            }
            if (!alive[0] && frnd[u] == wkr[u]) ++ans;
            else if (alive[0] && frnd[u] > wkr[u]) --ans;
            if (!alive[1] && frnd[v] == wkr[v]) ++ans;
            else if (alive[1] && frnd[v] > wkr[v]) --ans;
        }
    }
}

