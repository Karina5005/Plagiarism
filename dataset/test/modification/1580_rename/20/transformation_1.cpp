/*
 * @author: 0x404
 * @Date: 2021-11-10 15:04:36
 * @LastEditTime: 2021-11-10 17:22:14
 * @Description: 
 */
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int q_ze = 405, nkx = 1e9;

int qz_b[q_ze][q_ze], f[q_ze], vn_pi, p;

int t_i(int n_h, int rs_fof, int mw_i, int d_qc)
{
    return qz_b[mw_i][d_qc] - qz_b[n_h - 1][d_qc] - qz_b[mw_i][rs_fof - 1] + qz_b[n_h - 1][rs_fof - 1];
}

void msy()
{
    cin >> vn_pi >> p;
    memset(qz_b, 0, sizeof qz_b);
    for (int rrn_pq = 1; rrn_pq <= vn_pi; ++rrn_pq)
    {
        string p;
        cin >> p;
        for (int t = 1; t <= p; ++t)
            qz_b[rrn_pq][t] = p[t - 1] - '0';
    }
    for (int lw_oow = 1; lw_oow <= vn_pi; ++lw_oow)
        for (int kru_kvt = 1; kru_kvt <= p; ++kru_kvt)
            qz_b[lw_oow][kru_kvt] += qz_b[lw_oow - 1][kru_kvt] + qz_b[lw_oow][kru_kvt - 1] - qz_b[lw_oow - 1][kru_kvt - 1];
    
    int bnz_nmp = nkx;

    for (int hg = 1; hg <= vn_pi; ++hg)
        for (int etm = hg + 4; etm <= vn_pi; ++etm)
        {
            for (int r_x = 4; r_x <= p; ++r_x)
            {
                int qyf = t_i(hg + 1, 1, etm - 1, r_x - 1);
                int gn_ud = r_x - 1 - t_i(hg, 1, hg, r_x - 1);
                int x = r_x - 1 - t_i(etm, 1, etm, r_x - 1);
                int c_vgt = (etm - hg - 1) - t_i(hg + 1, r_x, etm - 1, r_x);
                f[r_x] = qyf + gn_ud + x + c_vgt;
            }
            for (int xvn_fmx = p - 1; xvn_fmx >= 4; --xvn_fmx) f[xvn_fmx] = min(f[xvn_fmx], f[xvn_fmx + 1]);
            for (int w_qfy = 1; w_qfy <= p; ++w_qfy)
            {
                if (w_qfy + 3 > p) break;
                int zqc = t_i(hg + 1, 1, etm - 1, w_qfy);
                int qmt_my = w_qfy - t_i(hg, 1, hg, w_qfy);
                int r_mq = w_qfy - t_i(etm, 1, etm, w_qfy);
                int loe_bz = (etm - hg - 1) - t_i(hg + 1, w_qfy, etm - 1, w_qfy);
                bnz_nmp = min(bnz_nmp, f[w_qfy + 3] - zqc - qmt_my - r_mq + loe_bz);
            }
        }
    cout << bnz_nmp << endl;
}

int main()
{
    int wws_xim;
    cin >> wws_xim;
    while (wws_xim--)
    {
        msy();
    }
    return 0;
}
