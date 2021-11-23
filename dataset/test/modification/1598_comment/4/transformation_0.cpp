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
const int maxn = 1e2 + 14, lg = 15;

const int BASE = 3e3;
int64_t count_ops = 0;
const double PI = acos(-1);
typedef complex<double> base;

double SIN[1000000];
#define MAXN 10000000

void fft(vector<base>& a, bool invert) {
	int n = (int)a.size();

	for (int i = 1, j = 0; i < n; ++i) {
		int bit = n >> 1;
		for (; j >= bit; bit >>= 1)
			j -= bit;
		j += bit;
		if (i < j)
			swap(a[i], a[j]);
	}

	for (int len = 2; len <= n; len <<= 1) {
		double ang = 2 * PI / len * (invert ? -1 : 1);
		base wlen(cos(ang), sin(ang));
		for (int i = 0; i < n; i += len) {
			base w(1);
			for (int j = 0; j < len / 2; ++j) {
				base u = a[i + j], v = a[i + j + len / 2] * w;
				a[i + j] = u + v;
				a[i + j + len / 2] = u - v;
				w *= wlen;
			}
		}
	}
	if (invert)
		for (int i = 0; i < n; ++i)
			a[i] /= n;
}

vector<int> multiply(const vector<int>& a, const vector<int>& b) {
	vector<base> fa(a.begin(), a.end()), fb(b.begin(), b.end());
	size_t n = 1;
	while (n < max(a.size(), b.size()))  n <<= 1,
		++count_ops;
	n <<= 1;
	fa.resize(n), fb.resize(n);

	fft(fa, false), fft(fb, false);
	for (size_t i = 0; i < n; ++i)
		fa[i] *= fb[i],
		++count_ops;
	fft(fa, true);
	vector<long long> res(n);
	for (size_t i = 0; i < n; ++i) {
		res[i] = (long long)(fa[i].real() + 0.5),
			++count_ops;
		if (res[i] < 0 || res[i] > 1e15) {
			cout << -1;
			res[i] = res[i];
		}
	}
	int carry = 0;
	for (size_t i = 0; i < n; ++i) {
		res[i] += carry;
		carry = res[i] / BASE;
		++count_ops;
		res[i] %= BASE;
	}
	vector<int> r2(res.begin(), res.end());
	while (r2.size() && r2.back() == 0) r2.pop_back();
	if (!r2.size()) r2.push_back(0);
	return r2;
}

#define typ vector<int>

const int N = 1000000;
int lp[N + 1];
vector<int> pr;

void sieve() {
	for (int i = 2; i <= N; ++i) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back(i);
		}
		for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ++j)
			lp[i * pr[j]] = pr[j];
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
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vec<pii> a(n);
		vi T(n + 1), D(n + 1);
		for (auto& e : a) cin >> e.first >> e.second, T[e.first]++, D[e.second]++;
		int ans = 0;
		for (auto& e : a) {
			ans += (T[e.first] - 1) * (D[e.second] - 1);
		}
		cout << (n * (n - 1) * (n - 2) / 6) - ans << "\n";
	}


}