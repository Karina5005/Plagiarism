#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define mset(a, b) memset(a, b, sizeof(a))
#define mcpy(a, b) memcpy(a, b, sizeof(a))
using namespace std;
typedef long long LL;
const int MAXN = 200005;

template <typename T> inline void read(T &WOW) {
    T x = 0, flag = 1;
    char ch = getchar();
    while (!isdigit(ch)) {
        if (ch == '-') flag = -1;
        ch = getchar();
    }
    while (isdigit(ch)) {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    WOW = flag * x;
}

int n, m, q, cnt[MAXN], ans;

inline void Add(int u, int v) {
    if (v > u) {
        ++cnt[u];
        ans -= (cnt[u] == 1);
    }
}

inline void Del(int u, int v) {
    if (v > u) {
        --cnt[u];
        ans += (cnt[u] == 0);
    }
}

void solve() {
    read(n); read(m);
    ans = n;
    {
    int i = 1, u, v;
    while (i <= m) {
        read(u); read(v);
        Add(u, v);
        Add(v, u);
    	++i; 
    
    }}
    read(q);
    {
    int i = 1, t, u, v;
    while (i <= q) {
        read(t);
        if (t == 1) {
            read(u); read(v);
            Add(u, v);
            Add(v, u);
        } else if (t == 2) {
            read(u); read(v);
            Del(u, v);
            Del(v, u);
        } else {
            printf("%d\n", ans);
        }
    	++i; 
    
    }}
}

int main() {
    solve();
    return 0;
}
