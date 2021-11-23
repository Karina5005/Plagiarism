#include<bits/stdc++.h>
using namespace std;
const int i = 1e3 + 10;
int qkl_kl, ulh, fku_zc[i + 5][i + 5], xxe_qrt;
inline int tvj_adr (int gej, int jz, int j_djn, int hw_oys){
	return fku_zc[j_djn][hw_oys] - fku_zc[gej - 1][hw_oys] - fku_zc[j_djn][jz - 1] + fku_zc[gej - 1][jz - 1];
}
inline int jc_hd (int u, int neg_ahh, int ak, int xt) {
	return (ak - u + 1) * (xt - neg_ahh + 1) - tvj_adr(u, neg_ahh, ak, xt);
}
int main() {
	int uq;
	cin >> uq;
	while(uq --) {
		scanf ("%d %d", &qkl_kl, &ulh);
		for (int nlk_th = 1; nlk_th <= qkl_kl; nlk_th ++) {
			string um;
			cin >> um;
        	for (int rne_yiz = 1; rne_yiz <= ulh; rne_yiz ++)
        		fku_zc[nlk_th][rne_yiz] = (um[rne_yiz - 1] == '1');
		}
		xxe_qrt = 5000000;
		for (int r = 1; r <= qkl_kl; r ++)
        	for (int h_x = 1; h_x <= ulh; h_x ++)
				fku_zc[r][h_x] = fku_zc[r][h_x] + fku_zc[r - 1][h_x] + fku_zc[r][h_x - 1] - fku_zc[r - 1][h_x - 1]; 
		for (int vf_mf = 1; vf_mf <= qkl_kl; vf_mf ++)
			for (int o_sqy = 1; o_sqy <= ulh; o_sqy ++)
				for (int d = vf_mf + 4; d <= qkl_kl; d ++)
					for (int kji_u = o_sqy + 3; kji_u <= ulh; kji_u ++) {
						int c_k = jc_hd (vf_mf, o_sqy + 1, vf_mf, kji_u - 1) + jc_hd (vf_mf + 1, o_sqy, d - 1, o_sqy);
						int r = jc_hd (vf_mf + 1, kji_u, d - 1, kji_u) + jc_hd (d, o_sqy + 1, d, kji_u - 1);
						int ehd = tvj_adr (vf_mf + 1, o_sqy + 1, d - 1, kji_u - 1);
						if (xxe_qrt < c_k + ehd) break;
						xxe_qrt = min (xxe_qrt, c_k + r + ehd); 
					}
		printf("%d\n",xxe_qrt);
	}
	 return 0;
}
 