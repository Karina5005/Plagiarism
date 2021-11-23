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
const int gs = 1e2 + 14, rzb = 15;

const int kj = 3e3;
int64_t tqm = 0;
const double u_c = acos(-1);
typedef complex<double> base;

double pta[1000000];
#define MAXN 10000000

void pr_sm(vector<base>& idz, bool xr_iq) {
	int r = (int)idz.size();

	for (int pkb = 1, j_gwf = 0; pkb < r; ++pkb) {
		int s_fj = r >> 1;
		for (; j_gwf >= s_fj; s_fj >>= 1)
			j_gwf -= s_fj;
		j_gwf += s_fj;
		if (pkb < j_gwf)
			swap(idz[pkb], idz[j_gwf]);
	}

	for (int zy = 2; zy <= r; zy <<= 1) {
		double ej = 2 * u_c / zy * (xr_iq ? -1 : 1);
		base e_j(cos(ej), sin(ej));
		for (int pav_i = 0; pav_i < r; pav_i += zy) {
			base z_ud(1);
			for (int p = 0; p < zy / 2; ++p) {
				base dob_is = idz[pav_i + p], gs = idz[pav_i + p + zy / 2] * z_ud;
				idz[pav_i + p] = dob_is + gs;
				idz[pav_i + p + zy / 2] = dob_is - gs;
				z_ud *= e_j;
			}
		}
	}
	if (xr_iq)
		for (int cs_s = 0; cs_s < r; ++cs_s)
			idz[cs_s] /= r;
}

vector<int> tz(const vector<int>& q, const vector<int>& o_zcy) {
	vector<base> w(q.begin(), q.end()), w(o_zcy.begin(), o_zcy.end());
	size_t hid_jw = 1;
	while (hid_jw < max(q.size(), o_zcy.size()))  hid_jw <<= 1,
		++tqm;
	hid_jw <<= 1;
	w.resize(hid_jw), w.resize(hid_jw);

	pr_sm(w, false), pr_sm(w, false);
	for (size_t dm_f = 0; dm_f < hid_jw; ++dm_f)
		w[dm_f] *= w[dm_f],
		++tqm;
	pr_sm(w, true);
	vector<long long> oi(hid_jw);
	for (size_t cf_lm = 0; cf_lm < hid_jw; ++cf_lm) {
		oi[cf_lm] = (long long)(w[cf_lm].real() + 0.5),
			++tqm;
		if (oi[cf_lm] < 0 || oi[cf_lm] > 1e15) {
			cout << -1;
			oi[cf_lm] = oi[cf_lm];
		}
	}
	int twu_o = 0;
	for (size_t md = 0; md < hid_jw; ++md) {
		oi[md] += twu_o;
		twu_o = oi[md] / kj;
		++tqm;
		oi[md] %= kj;
	}
	vector<int> cb(oi.begin(), oi.end());
	while (cb.size() && cb.back() == 0) cb.pop_back();
	if (!cb.size()) cb.push_back(0);
	return cb;
}

#define typ vector<int>

const int omj_ti = 1000000;
int si_zdd[omj_ti + 1];
vector<int> efu_nyk;

void s() {
	for (int svi_mgv = 2; svi_mgv <= omj_ti; ++svi_mgv) {
		if (si_zdd[svi_mgv] == 0) {
			si_zdd[svi_mgv] = svi_mgv;
			efu_nyk.push_back(svi_mgv);
		}
		for (int u_dbw = 0; u_dbw < (int)efu_nyk.size() && efu_nyk[u_dbw] <= si_zdd[svi_mgv] && svi_mgv * efu_nyk[u_dbw] <= omj_ti; ++u_dbw)
			si_zdd[svi_mgv * efu_nyk[u_dbw]] = efu_nyk[u_dbw];
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
	s();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vec<pii> a(n);
		vi T(n + 1), D(n + 1);
		for (auto& poj_b : a) cin >> poj_b.first >> poj_b.second, T[poj_b.first]++, D[poj_b.second]++;
		int ans = 0;
		for (auto& myp_e : a) {
			ans += (T[myp_e.first] - 1) * (D[myp_e.second] - 1);
		}
		cout << (n * (n - 1) * (n - 2) / 6) - ans << "\n";
	}


}