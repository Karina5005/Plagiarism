#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int nax = 3e6 + 7;
int fix_mod(int64_t x) {
    while (x >= MOD) x -= MOD;
    while (x < 0) x += MOD;
    return x;
}
int mul(int a, int b) {
    return int64_t(a) * b % MOD;
}
int power(int a, int64_t b) {
    int res = 1;
    for (; b > 0; b >>= 1, a = mul(a, a))
        /* 'for' inside */
        /* 'if' begin */
        if (b & 1) /* 'if' inside */
        res = mul(res, a);
    return res;
}
int fac[nax];
int inv_fac[nax];
int ncr(int N, int R) {
    /* 'if' begin */
    if (R > N) /* 'if' inside */
    return 0;
    return 1LL * fac[N] * inv_fac[N - R] % MOD * inv_fac[R] % MOD;
}
void pre_fact() {
    fac[0] = 1;
    inv_fac[0] = 1;
    for (int i = 1 ; i < nax ; ++ i)
        /* 'for' inside */
        fac[i] = mul(fac[i - 1], i);

    inv_fac[nax - 1] = power(fac[nax - 1], MOD - 2);
    for (int i = nax - 2 ; i >= 0 ; -- i)
        /* 'for' inside */
        inv_fac[i] = mul(inv_fac[i + 1], i + 1);
}

int n, q;
int ans[nax];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    pre_fact();
    cin >> n >> q;
    int x = 3 * n;
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 1 ; i <= x ; ++ i) /* 'for' inside */
    {
        switch(i % 3) {
            case 0:
                c0 = fix_mod(c0 + i);
                break;
            case 1:
                c1 = fix_mod(c1 + i);
                break;
            case 2:
                c2 = fix_mod(c2 + i);
                break;
        }
    }
    ans[1] = c0;

    const int INV3 = power(3, MOD - 2);
    for (int i = 2 ; i <= x ; ++ i) /* 'for' inside */
    {
        int64_t sum3 = ncr(x + 1, i + 1);
        int nc2 = mul(fix_mod(sum3 + c1 - c2), INV3);
        int nc1 = fix_mod(nc2 - c1);
        swap(nc1, c1);
        swap(nc2, c2);
        ans[i] = fix_mod(nc2 + c2);
    }

    while (q --) {
        int foo;
        cin >> foo;
        cout << ans[foo] << '\n';
    }
}



