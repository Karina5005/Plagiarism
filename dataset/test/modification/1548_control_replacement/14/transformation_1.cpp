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
    while (b > 0) {
        if (b & 1) res = mul(res, a);
        b >>= 1, a = mul(a, a); 
        }
    return res;
}
int fac[nax];
int inv_fac[nax];
int ncr(int N, int R) {
    if (R > N) return 0;
    return 1LL * fac[N] * inv_fac[N - R] % MOD * inv_fac[R] % MOD;
}
void pre_fact() {
    fac[0] = 1;
    inv_fac[0] = 1;
    {
    int i = 1 ;
    while (i < nax) {
        fac[i] = mul(fac[i - 1], i);
        ++ i; 
        
        }}

    inv_fac[nax - 1] = power(fac[nax - 1], MOD - 2);
    {
    int i = nax - 2 ;
    while (i >= 0) {
        inv_fac[i] = mul(inv_fac[i + 1], i + 1);
        -- i; 
        
        }}
}

int n, q;
int ans[nax];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    pre_fact();
    cin >> n >> q;
    int x = 3 * n;
    int c0 = 0, c1 = 0, c2 = 0;
    {
    int i = 1 ;
    while (i <= x) {
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
    	++ i; 
    
    }}
    ans[1] = c0;

    const int INV3 = power(3, MOD - 2);
    {
    int i = 2 ;
    while (i <= x) {
        int64_t sum3 = ncr(x + 1, i + 1);
        int nc2 = mul(fix_mod(sum3 + c1 - c2), INV3);
        int nc1 = fix_mod(nc2 - c1);
        swap(nc1, c1);
        swap(nc2, c2);
        ans[i] = fix_mod(nc2 + c2);
    	++ i; 
    
    }}

    while (q --) {
        int foo;
        cin >> foo;
        cout << ans[foo] << '\n';
    }
}

/***
    The details here, might not be 100% correct.
    m = 3 * n
    for x = 0 to m
    sum (x % 3 == 0) C(x, k) = c0
    sum (x % 3 == 1) C(x, k) = c1
    sum (x % 3 == 2) C(x, k) = c2
    c0 + c1 + c2 = C(m + 1, k + 1)
    (r, r) + (r + 1, r) = (r + 2, r + 1) + (r + 2, r) = (r + 3, r+1)...
    (3x-1, k) + (3x + 2, k) + ......
    (3x  , k) + (3x + 3, k) + ......
    difference = (3x - 1, k - 1) + (3x + 2, k - 1) + .... = c2
    (3x  , k) + (3x + 3, k) + ......
    (3x+1, k) + (3x + 4, k) + ......
    difference = (3x, k-1) + (3x + 3, k - 1) + .... = c0
*/

