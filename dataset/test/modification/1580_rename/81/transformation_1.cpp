#include <bits/stdc++.h>

using namespace std;

const int h = 2e5 + 5, zmx = 600;
int e_y, vvn;
pair<int, int> gq[h];
int w[h], b_e[h];
int wnn_q[zmx][zmx];

void u_pfh(int ir_ycn, int pqn_lg, int wp_uvy) {
    int hs_mzb = gq[ir_ycn].first, g = gq[ir_ycn].second;

    for (int oy = w[ir_ycn]; oy < vvn; oy += hs_mzb + g) {
        if (oy + hs_mzb <= vvn) b_e[oy + hs_mzb] += pqn_lg;
        if (oy + hs_mzb + g <= vvn) b_e[oy + hs_mzb + g] += pqn_lg * -1;

        if (oy + hs_mzb < wp_uvy && oy + hs_mzb + g >= wp_uvy) b_e[wp_uvy] += pqn_lg;
    }
}

void osb(int p, int q) {
    int oe_vuz = gq[p].first, ajs_ko = gq[p].second;

    for (int oo_ijt = w[p] + oe_vuz; oo_ijt < w[p] + oe_vuz + ajs_ko; oo_ijt++)
        wnn_q[oe_vuz + ajs_ko][oo_ijt % (oe_vuz + ajs_ko)] += q;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> e_y >> vvn;

    for (int c_a = 0; c_a < e_y; c_a++)
        cin >> gq[c_a].first >> gq[c_a].second;

    for (int ox_sme = 0; ox_sme < vvn; ox_sme++) {
        int m, vbf_o;
        cin >> m >> vbf_o;
        vbf_o--;

        if (m == 1)
            w[vbf_o] = ox_sme;
    
        int pnb = (m == 1 ? 1 : -1);
        int d_c = gq[vbf_o].first, zp = gq[vbf_o].second;

        if (ox_sme > 0) b_e[ox_sme] += b_e[ox_sme - 1];

        if (d_c + zp >= zmx) u_pfh(vbf_o, pnb, ox_sme);
        else osb(vbf_o, pnb);

        int rjn_ap = b_e[ox_sme];
        for (int w_w = 1; w_w < zmx; w_w++)
            rjn_ap += wnn_q[w_w][ox_sme % w_w];

        cout << rjn_ap << "\n";
    }
}