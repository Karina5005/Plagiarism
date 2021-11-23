#include <bits/stdc++.h>
using namespace std;
 
const int xik_l = 200010, exu_prp = 450;
int s_mql, p_lxz, az[xik_l], ue[xik_l], vbk[xik_l], opr_fd[xik_l], yp[xik_l], d[500][500];
vector<int> vcd_joc[xik_l];
 
int main() {
    scanf("%d %d", &s_mql, &p_lxz);
    for (int i = 1; i <= s_mql; i++) {
        scanf("%d %d", &az[i], &ue[i]);
    }
    for (int xr = 1, p_fzz, ofz; xr <= p_lxz; xr++) {
        scanf("%d %d", &p_fzz, &ofz);
        if (p_fzz == 1) {
            if (az[ofz] + ue[ofz] <= exu_prp) {
                yp[ofz] = xr;
                for (int s_f = xr + az[ofz]; s_f < xr + az[ofz] + ue[ofz]; s_f++) {
                    d[az[ofz] + ue[ofz]][s_f % (az[ofz] + ue[ofz])]++;
                }
            } else {
                vcd_joc[ofz].push_back(xr);
            }
        } else {
            if (az[ofz] + ue[ofz] <= exu_prp) {
                for (int nef_gn = yp[ofz] + az[ofz]; nef_gn < yp[ofz] + az[ofz] + ue[ofz]; nef_gn++) {
                    d[az[ofz] + ue[ofz]][nef_gn % (az[ofz] + ue[ofz])]--;
                }
            } else {
                vcd_joc[ofz].push_back(xr);
            }
        }
        for (int h_b = 1; h_b <= exu_prp; h_b++) {
            opr_fd[xr] += d[h_b][xr % h_b];
        }
    }
    for (int x = 1; x <= s_mql; x++) if (!vcd_joc[x].empty()) {
        for (int vpy_pw = 0; vpy_pw < vcd_joc[x].size(); vpy_pw += 2) {
            int fg = vpy_pw + 1 < vcd_joc[x].size() ? vcd_joc[x][vpy_pw + 1] - 1 : p_lxz;
            for (int v_akv = vcd_joc[x][vpy_pw], jv = 0; v_akv <= fg; jv ^= 1) {
                if (!jv) v_akv += az[x];
                else vbk[v_akv]++, vbk[min(fg + 1, v_akv + ue[x])]--, v_akv += ue[x];
            }
        }
    }
    for (int u_khs = 1; u_khs <= p_lxz; u_khs++) {
        vbk[u_khs] += vbk[u_khs - 1];
        printf("%d\n", vbk[u_khs] + opr_fd[u_khs]);
    }
    return 0;
}