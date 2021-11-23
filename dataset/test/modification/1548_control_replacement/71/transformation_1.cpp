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

int n, lg2[MAXN];
LL a[MAXN], st[20][MAXN];

inline LL Query(int l, int r) {
    int k = lg2[r - l + 1];
    return __gcd(st[k][l], st[k][r - (1 << k) + 1]);
}

void solve() {
    read(n);
    {
    int i = 1;
    while (i <= n) {
        read(a[i]);
    	++i; 
    
    }}
    {
    int i = 1;
    while (i < n) {
        a[i] = llabs(a[i + 1] - a[i]);
    	++i; 
    
    }}
    --n;
    {
    int i = 2;
    while (i <= n) {
        lg2[i] = lg2[i >> 1] + 1;
    	++i; 
    
    }}
    {
    int i = n;
    while (i >= 1) {
        st[0][i] = a[i];
        {
        int j = 1;
        while (i + (1 << j) - 1 <= n) {
            st[j][i] = __gcd(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
        	++j; 
        
        }}
    	--i; 
    
    }}
    int ans = 0;
    {
    int l = 1;
    while (l <= n) {
        if (a[l] == 1) ++l; continue;
        int L = l + 1, R = n, r = l;
        while (L <= R) {
            int M = (L + R) >> 1;
            if (!(Query(l, M) >= 2)) {
                R = M - 1;
            } else {
                r = M;
                L = M + 1;
            }
        }
        ans = max(ans, r - l + 1);
    	++l; 
    
    }}
    printf("%d\n", ans + 1);
}

int main() {
    int T; read(T);
    while (T--) {
        solve();
    }
    return 0;
}
