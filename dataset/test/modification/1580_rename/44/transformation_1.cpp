#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
const int mmd = 400010, ue_mfc = 3010;
int kp, is, ef[mmd], ang_cvn[mmd], lc[mmd], v[ue_mfc][ue_mfc], ihd[mmd];
int main() {
    scanf("%d%d", &kp, &is);
    for (int rc = 1, c, msb; rc <= kp; rc++)
        scanf("%d%d", &c, &msb), ef[rc] = min(is, c), ang_cvn[rc] = min(is, msb);
    int yhf = sqrt(is), u_tni = 0, nk;
    for (int utx = 1, n, ey; nk = 0, utx <= is && ~scanf("%d%d", &n, &ey); utx++) {
        int aop = 3 - 2 * n;
        if (n == 1) lc[ey] = utx;
        if (ef[ey] + ang_cvn[ey] > yhf)
            for (int e_i = lc[ey] + ef[ey]; e_i <= is; e_i += ef[ey] + ang_cvn[ey]) 
                ihd[max(utx, e_i)] += aop, ihd[max(utx, e_i + ang_cvn[ey])] -= aop;
        else for (int l = lc[ey] + ef[ey]; l < lc[ey] + ef[ey] + ang_cvn[ey]; l++)
                v[ef[ey] + ang_cvn[ey]][l % (ef[ey] + ang_cvn[ey])] += aop; 
        u_tni += ihd[utx];
        for (int u_g = 1; u_g <= yhf; u_g++) nk += v[u_g][utx % u_g];
        printf("%d\n", nk + u_tni);
    }
    return 0;
}