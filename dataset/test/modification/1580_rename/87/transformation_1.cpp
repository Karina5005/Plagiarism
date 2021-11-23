#include <bits/stdc++.h>
using namespace std;

const int lu = 400 + 10;

int bs, b_rnd;
int ty[lu][lu];
int rs_vt[lu];

int x(int l_kgj, int nbc, int u_tjs, int xax_m) {
    return ty[u_tjs][xax_m] - ty[u_tjs][nbc - 1] - ty[l_kgj - 1][xax_m] + ty[l_kgj - 1][nbc - 1];
}

void k() {
    cin >> bs >> b_rnd;
    for (int weg = 1; weg <= bs; ++weg) {
        for (int bb = 1; bb <= b_rnd; ++bb) {
            char emj;
            cin >> emj;
            ty[weg][bb] = emj - '0';
        }
    }

    for (int aj_wji = 1; aj_wji <= bs; ++aj_wji) {
        for (int ev_e = 1; ev_e <= b_rnd; ++ev_e) {
            ty[aj_wji][ev_e] += ty[aj_wji - 1][ev_e];
        }
    }

    for (int gl = 1; gl <= bs; ++gl) {
        for (int lw_x = 1; lw_x <= b_rnd; ++lw_x) {
            ty[gl][lw_x] += ty[gl][lw_x - 1];
        }
    }

    int s_fj = 1e9;

    for (int i = 1; i <= bs; ++i) {
        for (int u = i + 4; u <= bs; ++u) {
            for (int r = 4; r <= b_rnd; ++r) {
                rs_vt[r] = x(i + 1, 1, u - 1, r - 1);

                rs_vt[r] += 2 * (r - 1);
                rs_vt[r] -= x(i, 1, i, r - 1);
                rs_vt[r] -= x(u, 1, u, r - 1);

                rs_vt[r] += u - i - 1;
                rs_vt[r] -= x(i + 1, r, u - 1, r);
            }

            for (int rq_q = b_rnd - 1; rq_q >= 4; --rq_q) {
                rs_vt[rq_q] = min(rs_vt[rq_q], rs_vt[rq_q + 1]);
            }

            for (int uip_hz = 1; uip_hz + 3 <= b_rnd; ++uip_hz) {
                int euj_zfr = rs_vt[uip_hz + 3];

                euj_zfr -= x(i + 1, 1, u - 1, uip_hz);

                euj_zfr -= 2 * uip_hz;
                euj_zfr += x(i, 1, i, uip_hz);
                euj_zfr += x(u, 1, u, uip_hz);

                euj_zfr += (u - i - 1);
                euj_zfr -= x(i + 1, uip_hz, u - 1, uip_hz);

                s_fj = min(s_fj, euj_zfr);
            }
        }
    }

    cout << s_fj << "\n";
}

int main() {
    int rlz;
    cin >> rlz;
    while (rlz--) {
        k();
    }

    return 0;
}