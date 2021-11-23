#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int oz = 105;
int xt_xye[oz][oz][oz], rb_t[oz][oz][oz], lxa[oz][oz], kt, ani_wj;
int s_e(int y_p, int qs_ne, int wba_lv) {
    if ((y_p + 1 < wba_lv * 2 || y_p < wba_lv) || (qs_ne > kt && wba_lv > 0) || (qs_ne == kt && wba_lv > 1)) return 0;
    if (y_p == 0) return (wba_lv == 0);
    if (rb_t[y_p][qs_ne][wba_lv]) return xt_xye[y_p][qs_ne][wba_lv];
    rb_t[y_p][qs_ne][wba_lv] = 1;
    for (int tyn_xjh = 0; tyn_xjh < y_p; ++tyn_xjh)
        for (int o_yw = 0; o_yw <= wba_lv - (qs_ne == kt); ++o_yw)
            xt_xye[y_p][qs_ne][wba_lv] = (xt_xye[y_p][qs_ne][wba_lv] + 1ll * lxa[y_p - 1][tyn_xjh] * s_e(tyn_xjh, qs_ne + 1, o_yw) % ani_wj 
                         * s_e(y_p - 1 - tyn_xjh, qs_ne + 1, wba_lv - (qs_ne == kt) - o_yw)) % ani_wj;
    return xt_xye[y_p][qs_ne][wba_lv];
}
signed main() {
    int frm_w, ynt;
    cin >> frm_w >> kt >> ynt >> ani_wj;
    for (int q = 0; q <= frm_w; ++q)
        for (int mg = 0; mg <= q; ++mg)
            lxa[q][mg] = (mg ? (lxa[q - 1][mg - 1] + lxa[q - 1][mg]) % ani_wj : 1);
    cout << s_e(frm_w, 1, ynt) << "\n";
}