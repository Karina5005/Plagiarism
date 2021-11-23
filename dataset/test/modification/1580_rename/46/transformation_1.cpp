#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
const int u_htz = 200010, zga = 3010;
int r, mzw, xzn[u_htz], yt_dr[u_htz], l_f[u_htz], opb[zga][zga], x_li[u_htz];
void yl_fn(int jy, int d) { x_li[jy] += (jy <= mzw) * d; }
int main() {
    scanf("%d%d", &r, &mzw);
    for (int u_sct = 1, mf, no; u_sct <= r; u_sct++)
        scanf("%d%d", &mf, &no), xzn[u_sct] = min(mzw, mf), yt_dr[u_sct] = min(mzw, no);
    int le = sqrt(mzw), cd = 0, r_y;
    for (int os_xcv = 1, su_n, bul_m; r_y = 0, os_xcv <= mzw && ~scanf("%d%d", &su_n, &bul_m); os_xcv++) {
        int mh_o = 3 - 2 * su_n;
        if (su_n == 1) l_f[bul_m] = os_xcv;
        if (xzn[bul_m] + yt_dr[bul_m] > le) {
            for (int x = l_f[bul_m] + xzn[bul_m]; x <= mzw; x += xzn[bul_m] + yt_dr[bul_m]) 
                yl_fn(max(os_xcv, x), mh_o), yl_fn(max(os_xcv, x + yt_dr[bul_m]), -mh_o);
        } else {
            for (int xf_n = l_f[bul_m] + xzn[bul_m]; xf_n < l_f[bul_m] + xzn[bul_m] + yt_dr[bul_m]; xf_n++)
                opb[xzn[bul_m] + yt_dr[bul_m]][xf_n % (xzn[bul_m] + yt_dr[bul_m])] += mh_o; 
        }
        cd += x_li[os_xcv];
        for (int a_h = 1; a_h <= le; a_h++) r_y += opb[a_h][os_xcv % a_h];
        printf("%d\n", r_y + cd);
    }
    return 0;
}