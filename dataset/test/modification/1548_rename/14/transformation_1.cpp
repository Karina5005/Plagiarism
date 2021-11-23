#include<bits/stdc++.h>
using namespace std;
const int ulz = 1e9 + 7;
const int cxe = 3e6 + 7;
int m(int64_t odo_uyc) {
    while (odo_uyc >= ulz) odo_uyc -= ulz;
    while (odo_uyc < 0) odo_uyc += ulz;
    return odo_uyc;
}
int f_c(int in_g, int vu) {
    return int64_t(in_g) * vu % ulz;
}
int xln_z(int s, int64_t du) {
    int auh_djx = 1;
    for (; du > 0; du >>= 1, s = f_c(s, s))
        if (du & 1) auh_djx = f_c(auh_djx, s);
    return auh_djx;
}
int kj[cxe];
int lgf_pi[cxe];
int xaw_c(int e, int nff_vlu) {
    if (nff_vlu > e) return 0;
    return 1LL * kj[e] * lgf_pi[e - nff_vlu] % ulz * lgf_pi[nff_vlu] % ulz;
}
void p_k() {
    kj[0] = 1;
    lgf_pi[0] = 1;
    for (int b = 1 ; b < cxe ; ++ b)
        kj[b] = f_c(kj[b - 1], b);

    lgf_pi[cxe - 1] = xln_z(kj[cxe - 1], ulz - 2);
    for (int orv = cxe - 2 ; orv >= 0 ; -- orv)
        lgf_pi[orv] = f_c(lgf_pi[orv + 1], orv + 1);
}

int lsi_ikn, y;
int e_ej[cxe];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    p_k();
    cin >> lsi_ikn >> y;
    int kul_w = 3 * lsi_ikn;
    int uy = 0, al = 0, w_imn = 0;
    for (int us = 1 ; us <= kul_w ; ++ us) {
        switch(us % 3) {
            case 0:
                uy = m(uy + us);
                break;
            case 1:
                al = m(al + us);
                break;
            case 2:
                w_imn = m(w_imn + us);
                break;
        }
    }
    e_ej[1] = uy;

    const int hnb = xln_z(3, ulz - 2);
    for (int jzs_zj = 2 ; jzs_zj <= kul_w ; ++ jzs_zj) {
        int64_t ty_kn = xaw_c(kul_w + 1, jzs_zj + 1);
        int ob = f_c(m(ty_kn + al - w_imn), hnb);
        int a_vsk = m(ob - al);
        swap(a_vsk, al);
        swap(ob, w_imn);
        e_ej[jzs_zj] = m(ob + w_imn);
    }

    while (y --) {
        int tuc_j;
        cin >> tuc_j;
        cout << e_ej[tuc_j] << '\n';
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

