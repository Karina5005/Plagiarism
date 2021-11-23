#include <bits/stdc++.h>

using namespace std;

const int d_o = 2e5 + 5, ouz_h = 800;
int v_v, av;
pair<int, int> z_btl[d_o];
int vjx_bw[d_o], o_but[d_o];
int auo_dy[ouz_h][ouz_h];

void g(int h, int gaz_qdk, int fl) {
    int pnu_al = z_btl[h].first, xo = z_btl[h].second;

    for (int nff = vjx_bw[h]; nff < av; nff += pnu_al + xo) {
        if (nff + pnu_al <= av) o_but[nff + pnu_al] += gaz_qdk;
        if (nff + pnu_al + xo <= av) o_but[nff + pnu_al + xo] += gaz_qdk * -1;

        if (nff + pnu_al < fl && nff + pnu_al + xo >= fl) o_but[fl] += gaz_qdk;
    }
}

void t_tay(int ilx, int ire_y) {
    int ai_q = z_btl[ilx].first, re_zim = z_btl[ilx].second;

    for (int o_wa = vjx_bw[ilx] + ai_q; o_wa < vjx_bw[ilx] + ai_q + re_zim; o_wa++)
        auo_dy[ai_q + re_zim][o_wa % (ai_q + re_zim)] += ire_y;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> v_v >> av;

    for (int hm = 0; hm < v_v; hm++)
        cin >> z_btl[hm].first >> z_btl[hm].second;

    for (int pte = 0; pte < av; pte++) {
        int iu, s_bv;
        cin >> iu >> s_bv;
        s_bv--;

        if (iu == 1)
            vjx_bw[s_bv] = pte;
    
        int g = (iu == 1 ? 1 : -1);
        int lyf = z_btl[s_bv].first, f_eru = z_btl[s_bv].second;

        if (pte > 0) o_but[pte] += o_but[pte - 1];

        if (lyf + f_eru >= ouz_h) g(s_bv, g, pte);
        else t_tay(s_bv, g);

        int i_bkq = o_but[pte];
        for (int v_o = 1; v_o < ouz_h; v_o++)
            i_bkq += auo_dy[v_o][pte % v_o];

        cout << i_bkq << "\n";
    }
}