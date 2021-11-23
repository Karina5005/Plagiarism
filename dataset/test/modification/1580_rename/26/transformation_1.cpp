#include<bits/stdc++.h>
using namespace std;
const int g_a = 1e6 + 10;
int z_mbc[g_a], th_xpb[g_a], pxh[3001][3001], va[g_a], ro[g_a];
int il_nb, wls_n, tzd_w, mh = 0x3f3f3f3f, ern;
void st(int l_om, int i_a) {
	if (l_om > wls_n) return ;
	ro[l_om] += i_a;
}
int main() {
    cin >> il_nb >> wls_n;
    tzd_w = sqrt(wls_n);
    for (int lv_po = 1; lv_po <= il_nb; lv_po ++) {
    	scanf("%d %d", &z_mbc[lv_po], &th_xpb[lv_po]);
    	z_mbc[lv_po] = min(z_mbc[lv_po], wls_n), th_xpb[lv_po] = min(th_xpb[lv_po], wls_n);
	}
	for (int r_ze = 1, ai, k; r_ze <= wls_n; r_ze ++) {
		scanf("%d %d", &ai, &k);
		if (ai == 1) va[k] = r_ze;
		int mz_b = z_mbc[k] + th_xpb[k]; 
		if (mz_b > tzd_w) {
			for (int aq = va[k] + z_mbc[k]; aq <= wls_n; aq += mz_b) {
				st(max(aq, r_ze), 3 - 2 * ai), st(max(r_ze, aq + th_xpb[k]), 2 * ai - 3);
			}
		} else {
			for (int o_g = va[k] + z_mbc[k]; o_g < va[k] + mz_b; o_g ++) {
				pxh[mz_b][o_g % mz_b] += (3 - 2 * ai);
			}
		}
		int h = ern + ro[r_ze];
		ern = h;
		for (int n = 1; n <= tzd_w; n ++)
		    h += pxh[n][r_ze % n];
	    printf("%d\n", h);
	}
	return 0;
}
