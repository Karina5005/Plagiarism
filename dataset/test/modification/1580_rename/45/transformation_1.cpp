#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
const int rb = 400010, f_nz = 3010;
int kj, hei_yna, uw[rb], f_fbk[rb], e_i[rb], zeq_ipk[f_nz][f_nz], b_gia[rb];
void j(int s, int vq) { b_gia[s] += vq; }
int main() {
    scanf("%d%d", &kj, &hei_yna);
    for (int swz = 1, j, j_dft; swz <= kj; swz++)
        scanf("%d%d", &j, &j_dft), uw[swz] = min(hei_yna, j), f_fbk[swz] = min(hei_yna, j_dft);
    int qeo = sqrt(hei_yna), fp_xic = 0, f_vv;
    for (int aqr_yr = 1, uy, u; f_vv = 0, aqr_yr <= hei_yna && ~scanf("%d%d", &uy, &u); aqr_yr++) {
        int a_cs = 3 - 2 * uy;
        if (uy == 1) e_i[u] = aqr_yr;
        if (uw[u] + f_fbk[u] > qeo) {
            for (int h = e_i[u] + uw[u]; h <= hei_yna; h += uw[u] + f_fbk[u]) 
                j(max(aqr_yr, h), a_cs), j(max(aqr_yr, h + f_fbk[u]), -a_cs);
        } else {
            for (int cf = e_i[u] + uw[u]; cf < e_i[u] + uw[u] + f_fbk[u]; cf++)
                zeq_ipk[uw[u] + f_fbk[u]][cf % (uw[u] + f_fbk[u])] += a_cs; 
        }
        fp_xic += b_gia[aqr_yr];
        for (int fsa = 1; fsa <= qeo; fsa++) f_vv += zeq_ipk[fsa][aqr_yr % fsa];
        printf("%d\n", f_vv + fp_xic);
    }
    return 0;
}