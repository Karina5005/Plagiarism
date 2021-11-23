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
const int ol_x = 1e2 + 14, g_h = 15;

const int bqo = 3e3;
int64_t m = 0;
const double usq = acos(-1);
typedef complex<double> base;

double w[1000000];
#define MAXN 10000000

void ay_zum(vector<base>& rx, bool qk_jr) {
	int m_txt = (int)rx.size();

	for (int jwu_kbn = 1, oui = 0; jwu_kbn < m_txt; ++jwu_kbn) {
		int k_eq = m_txt >> 1;
		for (; oui >= k_eq; k_eq >>= 1)
			oui -= k_eq;
		oui += k_eq;
		if (jwu_kbn < oui)
			swap(rx[jwu_kbn], rx[oui]);
	}

	for (int huu = 2; huu <= m_txt; huu <<= 1) {
		double hgi = 2 * usq / huu * (qk_jr ? -1 : 1);
		base rtb_he(cos(hgi), sin(hgi));
		for (int ahk_ncj = 0; ahk_ncj < m_txt; ahk_ncj += huu) {
			base gh_pbl(1);
			for (int p = 0; p < huu / 2; ++p) {
				base mpb = rx[ahk_ncj + p], ofo_p = rx[ahk_ncj + p + huu / 2] * gh_pbl;
				rx[ahk_ncj + p] = mpb + ofo_p;
				rx[ahk_ncj + p + huu / 2] = mpb - ofo_p;
				gh_pbl *= rtb_he;
			}
		}
	}
	if (qk_jr)
		for (int qb_qn = 0; qb_qn < m_txt; ++qb_qn)
			rx[qb_qn] /= m_txt;
}

vector<int> q_q(const vector<int>& ek, const vector<int>& xj) {
	vector<base> djk(ek.begin(), ek.end()), z(xj.begin(), xj.end());
	size_t zb_cf = 1;
	while (zb_cf < max(ek.size(), xj.size()))  zb_cf <<= 1,
		++m;
	zb_cf <<= 1;
	djk.resize(zb_cf), z.resize(zb_cf);

	ay_zum(djk, false), ay_zum(z, false);
	for (size_t ujq = 0; ujq < zb_cf; ++ujq)
		djk[ujq] *= z[ujq],
		++m;
	ay_zum(djk, true);
	vector<long long> nsf(zb_cf);
	for (size_t dg_gy = 0; dg_gy < zb_cf; ++dg_gy) {
		nsf[dg_gy] = (long long)(djk[dg_gy].real() + 0.5),
			++m;
		if (nsf[dg_gy] < 0 || nsf[dg_gy] > 1e15) {
			cout << -1;
			nsf[dg_gy] = nsf[dg_gy];
		}
	}
	int zb_m = 0;
	for (size_t rs_djg = 0; rs_djg < zb_cf; ++rs_djg) {
		nsf[rs_djg] += zb_m;
		zb_m = nsf[rs_djg] / bqo;
		++m;
		nsf[rs_djg] %= bqo;
	}
	vector<int> i_uqz(nsf.begin(), nsf.end());
	while (i_uqz.size() && i_uqz.back() == 0) i_uqz.pop_back();
	if (!i_uqz.size()) i_uqz.push_back(0);
	return i_uqz;
}

#define typ vector<int>

const int k = 1000000;
int wt_ny[k + 1];
vector<int> h;

void la_fa() {
	for (int ni = 2; ni <= k; ++ni) {
		if (wt_ny[ni] == 0) {
			wt_ny[ni] = ni;
			h.push_back(ni);
		}
		for (int kty = 0; kty < (int)h.size() && h[kty] <= wt_ny[ni] && ni * h[kty] <= k; ++kty)
			wt_ny[ni * h[kty]] = h[kty];
	}
}

#define pii pair<int, int>
#define vec vector
#define vi vector<int>

signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	la_fa();
	int tb_jd;
	cin >> tb_jd;
	while (tb_jd--) {
		int e;
		cin >> e;
		vec<short> m(e);
		for (auto& y : m) {
			int p;
			for (int w_n = 0; w_n < 5; ++w_n) cin >> p, y |= p << w_n;
		}
		sort(m.begin(), m.end());
		bool z_s = 0;
		for (int ed = 0; ed < 5; ++ed) {
			for (int l_m = 0; l_m < 5; ++l_m) {
				if (l_m == ed) continue;
				int pey = 0;
				int oun = 0, xeq_eo = 0;
				for (int gc_l = 0; gc_l < e; ++gc_l) {
					if (m[gc_l] & ((1 << ed)) && m[gc_l] & (1 << l_m)) ++pey;
					else if (m[gc_l] & ((1 << ed))) ++oun;
					else if (m[gc_l] & ((1 << l_m))) ++xeq_eo;
				}
				if (oun > e / 2 || xeq_eo > e / 2 || oun + xeq_eo + pey != e) continue;
				z_s = 1;
				break;
			}
		}
		if (z_s) cout << "YES\n"; else cout << "NO\n";
	}


}