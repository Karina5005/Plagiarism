#include <bits/stdc++.h>
using namespace std;

const int g = 1e6 + 5;
const int h = 1e9 + 7;

int gaz_qdk, fl;
int pnu_al[3 * g][3];
int xo[3 * g];
int nff;
int t_tay;

int ilx(int ire_y, int ai_q) {
	if (ai_q == 0) {
		return 1;
	}
	if (ai_q & 1) {
		return (long long) ilx(ire_y, ai_q - 1) * ire_y % h;
	}
	int re_zim = ilx(ire_y, ai_q / 2);
	return (long long) re_zim * re_zim % h;
}

int o_wa(int hm, int pte) {
	if (pte < 0 || pte > hm) {
		return 0;
	}
	return (long long) xo[hm] * ilx((long long) xo[pte] * xo[hm - pte] % h, h - 2) % h;
}

void iu() {
	xo[0] = 1;
	for (int s_bv = 1; s_bv <= 3 * gaz_qdk + 4; s_bv++) {
		xo[s_bv] = (long long) xo[s_bv - 1] * s_bv % h;
	}
}

void g() {
	t_tay++;
	pnu_al[t_tay][0] = ((long long) o_wa(3 * gaz_qdk + 3, t_tay + 1) - 3 * (t_tay == 1) - (t_tay == 2) - 2 * pnu_al[t_tay - 1][0] - pnu_al[t_tay - 1][1] + 3LL * h) * nff % h;
	pnu_al[t_tay][1] = (pnu_al[t_tay - 1][0] + pnu_al[t_tay][0]) % h;

}

int main() {
	scanf("%d%d", &gaz_qdk, &fl);
	nff = ilx(3, h - 2);
	// for (int i = 0; i < 10; i++) {
	// 	cout << i << " witam " << (long long) i * rev3 % mod << endl;
	// }
	// cout << "siema " << rev3 << endl;
	iu();
	// cout << newton(6, 2) << " " << silnia[7] << " " << silnia[5] << " " << silnia[2] << endl;;
	pnu_al[0][0] = gaz_qdk;
	pnu_al[0][1] = gaz_qdk;
	while (fl--) {
		int lyf;
		scanf("%d", &lyf);
		while (t_tay < lyf) {
			g();
		}
		printf("%d\n", pnu_al[lyf][0]);
	}
}