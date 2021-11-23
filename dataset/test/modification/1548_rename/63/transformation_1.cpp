#include <bits/stdc++.h>
using namespace std;

const int gx = 1e6 + 5;
const int qo = 1e9 + 7;

int c_qti, f;
int zh_zp[3 * gx][3];
int w[3 * gx];
int oom;
int l_oz;

int l(int mo, int jdv) {
	if (jdv == 0) {
		return 1;
	}
	if (jdv & 1) {
		return (long long) l(mo, jdv - 1) * mo % qo;
	}
	int w = l(mo, jdv / 2);
	return (long long) w * w % qo;
}

int qz_tdq(int sz_ipz, int mmr_rcz) {
	if (mmr_rcz < 0 || mmr_rcz > sz_ipz) {
		return 0;
	}
	return (long long) w[sz_ipz] * l((long long) w[mmr_rcz] * w[sz_ipz - mmr_rcz] % qo, qo - 2) % qo;
}

void it() {
	w[0] = 1;
	for (int mmd = 1; mmd <= 3 * c_qti + 4; mmd++) {
		w[mmd] = (long long) w[mmd - 1] * mmd % qo;
	}
}

void ue_mfc() {
	l_oz++;
	zh_zp[l_oz][0] = ((long long) qz_tdq(3 * c_qti + 3, l_oz + 1) - 3 * (l_oz == 1) - (l_oz == 2) - 2 * zh_zp[l_oz - 1][0] - zh_zp[l_oz - 1][1] + 3LL * qo) * oom % qo;
	zh_zp[l_oz][1] = (zh_zp[l_oz - 1][0] + zh_zp[l_oz][0]) % qo;

}

int main() {
	scanf("%d%d", &c_qti, &f);
	oom = l(3, qo - 2);
	// for (int i = 0; i < 10; i++) {
	// 	cout << i << " witam " << (long long) i * rev3 % mod << endl;
	// }
	// cout << "siema " << rev3 << endl;
	it();
	// cout << newton(6, 2) << " " << silnia[7] << " " << silnia[5] << " " << silnia[2] << endl;;
	zh_zp[0][0] = c_qti;
	zh_zp[0][1] = c_qti;
	while (f--) {
		int kp;
		scanf("%d", &kp);
		while (l_oz < kp) {
			ue_mfc();
		}
		printf("%d\n", zh_zp[kp][0]);
	}
}