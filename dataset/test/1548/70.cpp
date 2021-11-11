#include <bits/stdc++.h>
#define mset(a, b) memset(a, b, sizeof(a))
#define mcpy(a, b) memcpy(a, b, sizeof(a))
using namespace std;
typedef long long LL;
const int MAXN = 3000006;

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

namespace ModCalculator {
	const int MOD = 1e9 + 7;
	inline void Inc(int &x, int y) {
		x += y; if (x >= MOD) x -= MOD;
	}
	inline void Dec(int &x, int y) {
		x -= y; if (x < 0) x += MOD;
	}
	inline int Add(int x, int y) {
		Inc(x, y); return x;
	}
	inline int Sub(int x, int y) {
		Dec(x, y); return x;
	}
	inline int Mul(int x, int y) {
		return 1LL * x * y % MOD;
	}
	inline int Ksm(int x, int k) {
		int ret = 1;
		for (; k; k >>= 1) {
			if (k & 1) ret = Mul(ret, x);
			x = Mul(x, x);
		}
		return ret;
	}
	inline int Inv(int x) {
		return Ksm(x, MOD - 2);
	}
}
using namespace ModCalculator;

int n, q, fac[MAXN], finv[MAXN], f[3][MAXN];

inline int C(int x, int y) {
    if (x < y) return 0;
    return Mul(fac[x], Mul(finv[y], finv[x - y]));
}

void solve() {
    read(n); read(q);
    int m = n * 3;
    fac[0] = 1;
    for (int i = 1; i <= m; ++i) {
        fac[i] = Mul(fac[i - 1], i);
    }
    finv[m] = Inv(fac[m]);
    for (int i = m; i >= 1; --i) {
        finv[i - 1] = Mul(finv[i], i);
    }
    int INV3 = Inv(3);
    f[0][0] = f[1][0] = f[2][0] = n;
    for (int i = 1; i <= n * 3; ++i) {
        int tmp = C(n * 3, i + 1);
        Dec(tmp, f[1][i - 1]);
        Dec(tmp, Mul(2, f[0][i - 1]));
        f[0][i] = Mul(tmp, INV3);
        f[1][i] = Add(f[0][i], f[0][i - 1]);
        f[2][i] = Add(f[1][i], f[1][i - 1]);
    }
    for (int i = 1; i <= q; ++i) {
        int x; read(x);
        printf("%d\n", Add(f[0][x], C(n * 3, x)));
    }
}

int main() {
    solve();
    return 0;
}
