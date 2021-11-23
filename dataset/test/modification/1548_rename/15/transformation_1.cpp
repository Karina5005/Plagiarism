#include<bits/stdc++.h>
using namespace std;
const int yd = 1e9 + 7;
const int yae_qdv = 3e6 + 7;
int d_fsi(int64_t s) {
    while (s >= yd) s -= yd;
    while (s < 0) s += yd;
    return s;
}
int uux(int qsn_oh, int bb_vey) {
    return int64_t(qsn_oh) * bb_vey % yd;
}
int ej_wcu(int x_gl, int64_t v_ny) {
    int k = 1;
    for (; v_ny > 0; v_ny >>= 1, x_gl = uux(x_gl, x_gl))
        if (v_ny & 1) k = uux(k, x_gl);
    return k;
}
int el_ffe[yae_qdv];
int pcq[yae_qdv];
int qoe_fxz(int kfw_xz, int ri) {
    if (ri > kfw_xz) return 0;
    return 1LL * el_ffe[kfw_xz] * pcq[kfw_xz - ri] % yd * pcq[ri] % yd;
}
void w_s() {
    el_ffe[0] = 1;
    pcq[0] = 1;
    for (int rl_dsq = 1 ; rl_dsq < yae_qdv ; ++ rl_dsq)
        el_ffe[rl_dsq] = uux(el_ffe[rl_dsq - 1], rl_dsq);

    pcq[yae_qdv - 1] = ej_wcu(el_ffe[yae_qdv - 1], yd - 2);
    for (int vq_feb = yae_qdv - 2 ; vq_feb >= 0 ; -- vq_feb)
        pcq[vq_feb] = uux(pcq[vq_feb + 1], vq_feb + 1);
}

int vn, j_u;
int z[yae_qdv];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    w_s();
    cin >> vn >> j_u;
    int s = 3 * vn;
    int tis = 0, xgr = 0, ncz = 0;
    for (int fa = 1 ; fa <= s ; ++ fa) {
        switch(fa % 3) {
            case 0:
                tis = d_fsi(tis + fa);
                break;
            case 1:
                xgr = d_fsi(xgr + fa);
                break;
            case 2:
                ncz = d_fsi(ncz + fa);
                break;
        }
    }
    z[1] = tis;

    const int wa = ej_wcu(3, yd - 2);
    for (int amm_r = 2 ; amm_r <= s ; ++ amm_r) {
        int64_t vi = qoe_fxz(s + 1, amm_r + 1);
        int arv = uux(d_fsi(vi + xgr - ncz), wa);
        int ri_ez = d_fsi(arv - xgr);
        int agl_d = d_fsi(arv + ncz);
        swap(agl_d, tis);
        swap(ri_ez, xgr);
        swap(arv, ncz);
        z[amm_r] = tis;
    }

    while (j_u --) {
        int e;
        cin >> e;
        cout << z[e] << '\n';
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

