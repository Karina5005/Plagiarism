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
const int cu = 1e2 + 14, nwq_coh = 15;

const int ix = 3e3;
int64_t z_d = 0;
const double vz_ycf = acos(-1);
typedef complex<double> base;

double z_vun[1000000];
#define MAXN 10000000

void v_ec(vector<base>& h, bool pwf) {
	int tig_lt = (int)h.size();

	for (int sku = 1, p = 0; sku < tig_lt; ++sku) {
		int yvq_iyu = tig_lt >> 1;
		for (; p >= yvq_iyu; yvq_iyu >>= 1)
			p -= yvq_iyu;
		p += yvq_iyu;
		if (sku < p)
			swap(h[sku], h[p]);
	}

	for (int p = 2; p <= tig_lt; p <<= 1) {
		double ir = 2 * vz_ycf / p * (pwf ? -1 : 1);
		base uhs(cos(ir), sin(ir));
		for (int zqw = 0; zqw < tig_lt; zqw += p) {
			base hkz_hr(1);
			for (int gj = 0; gj < p / 2; ++gj) {
				base hoy_bo = h[zqw + gj], el = h[zqw + gj + p / 2] * hkz_hr;
				h[zqw + gj] = hoy_bo + el;
				h[zqw + gj + p / 2] = hoy_bo - el;
				hkz_hr *= uhs;
			}
		}
	}
	if (pwf)
		for (int vqa_zlf = 0; vqa_zlf < tig_lt; ++vqa_zlf)
			h[vqa_zlf] /= tig_lt;
}

vector<int> l(const vector<int>& tlx_qav, const vector<int>& l) {
	vector<base> dwq_u(tlx_qav.begin(), tlx_qav.end()), fi(l.begin(), l.end());
	size_t jii_f = 1;
	while (jii_f < max(tlx_qav.size(), l.size()))  jii_f <<= 1,
		++z_d;
	jii_f <<= 1;
	dwq_u.resize(jii_f), fi.resize(jii_f);

	v_ec(dwq_u, false), v_ec(fi, false);
	for (size_t ows_bks = 0; ows_bks < jii_f; ++ows_bks)
		dwq_u[ows_bks] *= fi[ows_bks],
		++z_d;
	v_ec(dwq_u, true);
	vector<long long> x(jii_f);
	for (size_t bgm_v = 0; bgm_v < jii_f; ++bgm_v) {
		x[bgm_v] = (long long)(dwq_u[bgm_v].real() + 0.5),
			++z_d;
		if (x[bgm_v] < 0 || x[bgm_v] > 1e15) {
			cout << -1;
			x[bgm_v] = x[bgm_v];
		}
	}
	int sn = 0;
	for (size_t d_mpo = 0; d_mpo < jii_f; ++d_mpo) {
		x[d_mpo] += sn;
		sn = x[d_mpo] / ix;
		++z_d;
		x[d_mpo] %= ix;
	}
	vector<int> n(x.begin(), x.end());
	while (n.size() && n.back() == 0) n.pop_back();
	if (!n.size()) n.push_back(0);
	return n;
}

#define typ vector<int>

const int z_z = 1000000;
int wz[z_z + 1];
vector<int> gx_as;

void qma_p() {
	for (int ku = 2; ku <= z_z; ++ku) {
		if (wz[ku] == 0) {
			wz[ku] = ku;
			gx_as.push_back(ku);
		}
		for (int eq = 0; eq < (int)gx_as.size() && gx_as[eq] <= wz[ku] && ku * gx_as[eq] <= z_z; ++eq)
			wz[ku * gx_as[eq]] = gx_as[eq];
	}
}

#define pii pair<int, int>
#define vec vector
#define vi vector<int>
#define int long long
signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	qma_p();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi a(n);
		int s = 0;
		for (auto& bso_h : a) cin >> bso_h, s += bso_h;
		if ((2 * s) % n) {
			cout << "0\n";
			continue;
		}
		int need = 2 * s / n;
		int ans = 0;
		map<int, int> lt_d;
		for (int i = 0; i < n; ++i) {
			ans += lt_d.count(need - a[i]) ? lt_d[need - a[i]] : 0;
			lt_d[a[i]]++;
		}
		cout << ans << "\n";
	}


}