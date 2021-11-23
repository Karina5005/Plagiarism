#include<bits/stdc++.h>
using namespace std;
const int zqi_ifn = 1e9 + 7;
const int ebe = 333333336;
const int lx_z = 3e6 + 7;
int ka(int sr_dg) {
    while (sr_dg >= zqi_ifn) sr_dg -= zqi_ifn;
    while (sr_dg < 0) sr_dg += zqi_ifn;
    return sr_dg;
}
int rts(int xk, int v_ri) {
    return int64_t(xk) * v_ri % zqi_ifn;
}
int e_xgd(int otf, int64_t kno_xf) {
    int h = 1;
    for (; kno_xf > 0; kno_xf >>= 1, otf = rts(otf, otf))
        if (kno_xf & 1) h = rts(h, otf);
    return h;
}
int trk[lx_z];
int jox[lx_z];
int hu_d(int io_i, int k_s) {
    if (k_s > io_i) return 0;
    return 1LL * trk[io_i] * jox[io_i - k_s] % zqi_ifn * jox[k_s] % zqi_ifn;
}
void pvq_dlp() {
    trk[0] = 1;
    jox[0] = 1;
    for (int i_r = 1 ; i_r < lx_z ; ++ i_r)
        trk[i_r] = rts(trk[i_r - 1], i_r);

    jox[lx_z - 1] = e_xgd(trk[lx_z - 1], zqi_ifn - 2);
    for (int av = lx_z - 2 ; av >= 0 ; -- av)
        jox[av] = rts(jox[av + 1], av + 1);
}

int cxp_e, eq_d;
int yb[lx_z];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    pvq_dlp();
    cin >> cxp_e >> eq_d;
    int qf_ux = 3 * cxp_e;
    int yjm = cxp_e, fve = cxp_e, cd_v = cxp_e;

    yb[1] = yjm;

    for (int exe_mj = 1 ; exe_mj <= qf_ux ; ++ exe_mj) {
        int cp = hu_d(qf_ux + 1, exe_mj + 1);
        int z_yg = rts(ka(cp + fve - cd_v), ebe);
        yb[exe_mj] = ka(z_yg + cd_v);
        fve = ka(z_yg - fve);
        swap(z_yg, cd_v);
    }

    int h;
    while (eq_d --) {
        cin >> h;
        cout << yb[h] << '\n';
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

