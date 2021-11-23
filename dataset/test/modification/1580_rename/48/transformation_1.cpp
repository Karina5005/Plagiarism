#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int o = 410;
int ckl_k, b, beh, x[o][o], oi_ycy[o][o], tlt_vt[o];
char ac[o][o];
int uhw(int bki, int sca_b, int h_zc, int fir) { return oi_ycy[h_zc][fir] - oi_ycy[bki - 1][fir] - oi_ycy[h_zc][sca_b - 1] + oi_ycy[bki - 1][sca_b - 1]; }
int h_mi(int mkg_zfv, int cwv, int m, int e) {
    if (e) return (cwv - mkg_zfv - 1) - uhw(mkg_zfv + 1, m, cwv - 1, m);
    else return (x[mkg_zfv][m] ^ 1) + (x[cwv][m] ^ 1) + uhw(mkg_zfv + 1, m, cwv - 1, m);
}
int pl_az(int ija_vv, int qh, int c_qbg) { return h_mi(ija_vv, qh, c_qbg, 1) + h_mi(ija_vv, qh, c_qbg - 3, 1) + 
                                         h_mi(ija_vv, qh, c_qbg - 1, 0) + h_mi(ija_vv, qh, c_qbg - 2, 0); }
int main() {
    for (scanf("%d", &ckl_k); ckl_k-- && ~scanf("%d%d", &b, &beh); ) {
        for (int n_yu = 1; n_yu <= b; n_yu++) scanf("%s", ac[n_yu] + 1);
        for (int dec = 1; dec <= b; dec++)
            for (int oi = 1; oi <= beh; oi++)
                x[dec][oi] = ac[dec][oi] - '0';
        for (int exa = 1; exa <= b; exa++)
            for (int b = 1; b <= beh; b++)
                oi_ycy[exa][b] = oi_ycy[exa][b - 1] + oi_ycy[exa - 1][b] - oi_ycy[exa - 1][b - 1] + x[exa][b];
        int ha = 1e9;
        // cout << sum(2, 2, 4, 4) << endl;
        for (int y_nhr = 1; y_nhr <= b; y_nhr++) {
            for (int qjv_yrm = y_nhr + 4; qjv_yrm <= b; qjv_yrm++) {
            // int i = 5, j = 9;
                for (int lvi = 0; lvi <= beh; lvi++) tlt_vt[lvi] = 1e9;
                for (int dn_bpv = 4; dn_bpv <= beh; dn_bpv++)  {
                    tlt_vt[dn_bpv] = min(pl_az(y_nhr, qjv_yrm, dn_bpv), tlt_vt[dn_bpv - 1] + h_mi(y_nhr, qjv_yrm, dn_bpv, 1) - h_mi(y_nhr, qjv_yrm, dn_bpv - 1, 1) + h_mi(y_nhr, qjv_yrm, dn_bpv - 1, 0));
                    // cout << k << ":" << change(i, j, k) << ' ' << f[k - 1] << ' ' << f[k] << endl;
                    // cout << "---" << calc(i, j, k, 1) << ' ' << calc(i, j, k - 1, 1) << ' ' << calc(i, k, k - 1, 0) << endl;
                }
                // cout << change(i, j, 4) << endl;
                // cout << f[4] << endl;
                // cout << calc(i, j, 1, 1) << ' ' << calc(i, j, 4, 1) << endl;
                // cout << calc(i, j, 2, 0) << ' ' << calc(i, j, 3, 0) << endl;
                // cout << i << ' ' << j << ":" << endl;
                for (int hi_rca = 4; hi_rca <= beh; hi_rca++) {
                    // if (f[k] == 4) cout << i << ' ' << j << ' ' << k << endl;
                    // cout << k << "->" << f[k] << endl, 
                    ha = min(ha, tlt_vt[hi_rca]);
                }
            }
        }
        printf("%d\n", ha);
    }
    return 0;
}