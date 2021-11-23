#define _CRT_SECURE_NO_WARNINGS
#pragma GCC Optimize("Ofast")
#include <string.h>
#include <iostream>
#include <vector>
#include <set>
#include <chrono>
#include <string>
#include <time.h>
#include <unordered_set>
#include <iomanip>
#include <cmath>
#include <map>
#include <queue>
#include <numeric>
#include <unordered_map>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <cmath>
#include <complex>
#include <array>
using namespace std;
typedef long long ll;
const int v = 1e2 + 14, dvh = 15;

const int edb_ttp = 3e3;
int64_t hg_vf = 0;
const double wqh = acos(-1);
typedef complex<double> base;

double a_cq[1000000];
#define MAXN 10000000

void b_fcl(vector<base>& os, bool m) {
	int hs_ftf = (int)os.size();

	for (int k_r = 1, ge = 0; k_r < hs_ftf; ++k_r) {
		int h_rc = hs_ftf >> 1;
		for (; ge >= h_rc; h_rc >>= 1)
			ge -= h_rc;
		ge += h_rc;
		if (k_r < ge)
			swap(os[k_r], os[ge]);
	}

	for (int xfi_e = 2; xfi_e <= hs_ftf; xfi_e <<= 1) {
		double st_puc = 2 * wqh / xfi_e * (m ? -1 : 1);
		base wk_nh(cos(st_puc), sin(st_puc));
		for (int wi = 0; wi < hs_ftf; wi += xfi_e) {
			base owi(1);
			for (int zd_ckh = 0; zd_ckh < xfi_e / 2; ++zd_ckh) {
				base tvq = os[wi + zd_ckh], d_mk = os[wi + zd_ckh + xfi_e / 2] * owi;
				os[wi + zd_ckh] = tvq + d_mk;
				os[wi + zd_ckh + xfi_e / 2] = tvq - d_mk;
				owi *= wk_nh;
			}
		}
	}
	if (m)
		for (int e = 0; e < hs_ftf; ++e)
			os[e] /= hs_ftf;
}

vector<int> t_rf(const vector<int>& dor_tkw, const vector<int>& z_w) {
	vector<base> wwk_ras(dor_tkw.begin(), dor_tkw.end()), du_v(z_w.begin(), z_w.end());
	size_t s = 1;
	while (s < max(dor_tkw.size(), z_w.size()))  s <<= 1,
		++hg_vf;
	s <<= 1;
	wwk_ras.resize(s), du_v.resize(s);

	b_fcl(wwk_ras, false), b_fcl(du_v, false);
	for (size_t kz = 0; kz < s; ++kz)
		wwk_ras[kz] *= du_v[kz],
		++hg_vf;
	b_fcl(wwk_ras, true);
	vector<long long> pm(s);
	for (size_t r = 0; r < s; ++r) {
		pm[r] = (long long)(wwk_ras[r].real() + 0.5),
			++hg_vf;
		if (pm[r] < 0 || pm[r] > 1e15) {
			cout << -1;
			pm[r] = pm[r];
		}
	}
	int lr = 0;
	for (size_t gt = 0; gt < s; ++gt) {
		pm[gt] += lr;
		lr = pm[gt] / edb_ttp;
		++hg_vf;
		pm[gt] %= edb_ttp;
	}
	vector<int> bim(pm.begin(), pm.end());
	while (bim.size() && bim.back() == 0) bim.pop_back();
	if (!bim.size()) bim.push_back(0);
	return bim;
}

#define typ vector<int>

const int kzz_za = 1000000;
int za_c[kzz_za + 1];
vector<int> ew_tgu;

void rx() {
	for (int dvl_y = 2; dvl_y <= kzz_za; ++dvl_y) {
		if (za_c[dvl_y] == 0) {
			za_c[dvl_y] = dvl_y;
			ew_tgu.push_back(dvl_y);
		}
		for (int m = 0; m < (int)ew_tgu.size() && ew_tgu[m] <= za_c[dvl_y] && dvl_y * ew_tgu[m] <= kzz_za; ++m)
			za_c[dvl_y * ew_tgu[m]] = ew_tgu[m];
	}
}

#define pii pair<int, int>
#define vec vector
signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	rx();
	int oa_m;
	cin >> oa_m;
	while (oa_m--) {
		int qqo;
		string wt, au_wqh;
		cin >> qqo >> wt >> au_wqh;
		bool fz_jbw = au_wqh[qqo - 1] == '0';
		for (int w_hd = 0; w_hd < qqo; ++w_hd) if (wt[w_hd] == au_wqh[w_hd] && au_wqh[w_hd] == '1') fz_jbw = 0;
		if (fz_jbw)cout << "YES\n"; else cout << "NO\n";
	}


}