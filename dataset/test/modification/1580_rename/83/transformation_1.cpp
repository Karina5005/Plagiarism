#include <bits/stdc++.h>

using namespace std;

const int wt_x = 2e5 + 5, pk = 460;
int rrm_e, ry;
pair<int, int> zj_e[wt_x];
int kuo[wt_x], xnn_n[wt_x];
int nrj[pk][pk];

void mx_iaz(int e_uxd, int hdw, int xl_iw) {
    int em = zj_e[e_uxd].first, pih = zj_e[e_uxd].second;

    for (int ytd = kuo[e_uxd]; ytd < ry; ytd += em + pih) {
        if (ytd + em <= ry) xnn_n[ytd + em] += hdw;
        if (ytd + em + pih <= ry) xnn_n[ytd + em + pih] += hdw * -1;

        if (ytd + em < xl_iw && ytd + em + pih >= xl_iw) xnn_n[xl_iw] += hdw;
    }
}

void d_k(int p, int cq_d) {
    int qj = zj_e[p].first, d_ean = zj_e[p].second;

    for (int juu = kuo[p] + qj; juu < kuo[p] + qj + d_ean; juu++)
        nrj[qj + d_ean][juu % (qj + d_ean)] += cq_d;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> rrm_e >> ry;

    for (int okn = 0; okn < rrm_e; okn++)
        cin >> zj_e[okn].first >> zj_e[okn].second;

    for (int ftg = 0; ftg < ry; ftg++) {
        int plo_smk, tb;
        cin >> plo_smk >> tb;
        tb--;

        if (plo_smk == 1)
            kuo[tb] = ftg;
    
        int mv = (plo_smk == 1 ? 1 : -1);
        int uu = zj_e[tb].first, dm = zj_e[tb].second;

        if (ftg > 0) xnn_n[ftg] += xnn_n[ftg - 1];

        if (uu + dm >= pk) mx_iaz(tb, mv, ftg);
        else d_k(tb, mv);

        int ok = xnn_n[ftg];
        for (int vsx_up = 1; vsx_up < pk; vsx_up++)
            ok += nrj[vsx_up][ftg % vsx_up];

        cout << ok << "\n";
    }
}