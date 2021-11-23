#include <bits/stdc++.h>

using namespace std;

const int r = 100 + 5;

int jgq_k, wc, unp_xy, ms;
int ey_kts[r], bwv_ea[r][r], om_jb[r][r][r];

int gbd(int hpu_i, int gqr) {
    return hpu_i + gqr < ms ? hpu_i + gqr : hpu_i + gqr - ms;
}

void ko(int b_zpm, int qx_np, int df) {
    if (om_jb[df][b_zpm][qx_np] != -1) return ;
    register int &em_f = om_jb[df][b_zpm][qx_np] = 0;
    if (!b_zpm) {
        em_f = 1;
        return ;
    }
    if ((wc - df < 7 && (1 << (wc - df)) < qx_np) || (qx_np && b_zpm < wc - df)) return ;
    if (df == wc) {
        em_f = (qx_np == 1 ? ey_kts[b_zpm] : 0);
        return ;
    }
    for (int wi_bq = 0; wi_bq < b_zpm; wi_bq ++) {
        register int tvb = 0;
        register int *v = om_jb[df + 1][wi_bq], *kn_cf = om_jb[df + 1][b_zpm - wi_bq - 1];
        for (int lai = max(0, qx_np + wi_bq + 1 - b_zpm); lai <= min(qx_np, wi_bq); lai ++)
            if (v[lai] && kn_cf[qx_np - lai]) {
                ko(wi_bq, lai, df + 1);
                ko(b_zpm - wi_bq - 1, qx_np - lai, df + 1);
                tvb = (tvb + 1ll * v[lai] * kn_cf[qx_np - lai]) % ms;
            }
        em_f = (em_f + 1ll * tvb * bwv_ea[b_zpm - 1][wi_bq]) % ms;
    }
}

int main() {
    cin >> jgq_k >> wc >> unp_xy >> ms; wc --;
    for (int rm = bwv_ea[0][0] = ey_kts[0] = 1; rm <= jgq_k; rm ++) {
        bwv_ea[rm][0] = bwv_ea[rm][rm] = 1;
        ey_kts[rm] = 1ll * ey_kts[rm - 1] * rm % ms;
        for (int hm = 1; hm < rm; hm ++) bwv_ea[rm][hm] = gbd(bwv_ea[rm - 1][hm - 1], bwv_ea[rm - 1][hm]);
    }
    memset(om_jb, -1, sizeof(om_jb));
    ko(jgq_k, unp_xy, 0);
    cout << om_jb[0][jgq_k][unp_xy] << endl;
    return 0;
}