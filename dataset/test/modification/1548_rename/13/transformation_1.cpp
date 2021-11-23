#include<bits/stdc++.h>
using namespace std;
const int i = 1e9 + 7;
const int tbz = 333333336;
const int m = 3e6 + 7;
int mg_p(int n_ksk) {
    while (n_ksk >= i) n_ksk -= i;
    while (n_ksk < 0) n_ksk += i;
    return n_ksk;
}
int qxr_zz(int n, int xf) {
    return int64_t(n) * xf % i;
}
int z_mq(int ti_ib, int64_t don) {
    int g = 1;
    for (; don > 0; don >>= 1, ti_ib = qxr_zz(ti_ib, ti_ib))
        if (don & 1) g = qxr_zz(g, ti_ib);
    return g;
}
int h_qde[m];
int coe[m];
int y_xd(int bor, int j_yfn) {
    if (j_yfn > bor) return 0;
    return 1LL * h_qde[bor] * coe[bor - j_yfn] % i * coe[j_yfn] % i;
}
void lo() {
    h_qde[0] = 1;
    coe[0] = 1;
    for (int kic = 1 ; kic < m ; ++ kic)
        h_qde[kic] = qxr_zz(h_qde[kic - 1], kic);

    coe[m - 1] = z_mq(h_qde[m - 1], i - 2);
    for (int k_y = m - 2 ; k_y >= 0 ; -- k_y)
        coe[k_y] = qxr_zz(coe[k_y + 1], k_y + 1);
}

int kd, ryh_rl;
int t_qmd[m];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    lo();
    cin >> kd >> ryh_rl;
    int dsj = 3 * kd;
    int ol_v = 0, a_gnh = 0, p = 0;
    for (int i = 1 ; i <= dsj ; ++ i) {
        switch(i % 3) {
            case 0:
                ol_v = mg_p(ol_v + i);
                break;
            case 1:
                a_gnh = mg_p(a_gnh + i);
                break;
            case 2:
                p = mg_p(p + i);
                break;
        }
    }
    t_qmd[1] = ol_v;

    for (int i_xv = 2 ; i_xv <= dsj ; ++ i_xv) {
        int rlw = y_xd(dsj + 1, i_xv + 1);
        int rm_p = qxr_zz(mg_p(rlw + a_gnh - p), tbz);
        t_qmd[i_xv] = mg_p(rm_p + p);
        a_gnh = mg_p(rm_p - a_gnh);
        swap(rm_p, p);
    }

    int b_a;
    while (ryh_rl --) {
        cin >> b_a;
        cout << t_qmd[b_a] << '\n';
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

