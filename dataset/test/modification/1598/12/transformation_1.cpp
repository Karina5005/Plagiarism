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

	for (int i = 1, j = 0; i < n; ++i) /* 'for' inside */
	{
		int bit = n >> 1;
		for (; j >= bit; bit >>= 1)
			/* 'for' inside */
			j -= bit;
		j += bit;
		/* 'if' begin */
		if (i < j)
			/* 'if' inside */
			swap(a[i], a[j]);
	}

	for (int len = 2; len <= n; len <<= 1) /* 'for' inside */
	{
		double ang = 2 * PI / len * (invert ? -1 : 1);
		base wlen(cos(ang), sin(ang));
		for (int i = 0; i < n; i += len) /* 'for' inside */
		{
			base w(1);
			for (int j = 0; j < len / 2; ++j) /* 'for' inside */
			{
				base u = a[i + j], v = a[i + j + len / 2] * w;
				a[i + j] = u + v;
				a[i + j + len / 2] = u - v;
				w *= wlen;
			}
		}
	}
	/* 'if' begin */
	if (invert)
		/* 'if' inside */
		for (int i = 0; i < n; ++i)
			/* 'for' inside */
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
		/* 'for' inside */
		fa[i] *= fb[i],
		++count_ops;
	fft(fa, true);
	vector<long long> res(n);
	for (size_t i = 0; i < n; ++i) /* 'for' inside */
	{
		res[i] = (long long)(fa[i].real() + 0.5),
			++count_ops;
		/* 'if' begin */
		if (res[i] < 0 || res[i] > 1e15) /* 'if' inside */
		{
			cout << -1;
			res[i] = res[i];
		}
	}
	int carry = 0;
	for (size_t i = 0; i < n; ++i) /* 'for' inside */
	{
		res[i] += carry;
		carry = res[i] / BASE;
		++count_ops;
		res[i] %= BASE;
	}
	vector<int> r2(res.begin(), res.end());
	while (r2.size() && r2.back() == 0) r2.pop_back();
	/* 'if' begin */
	if (!r2.size()) /* 'if' inside */
	r2.push_back(0);
	return r2;
}

#define typ vector<int>

const int N = 1000000;
int lp[N + 1];
vector<int> pr;

void sieve() {
	for (int i = 2; i <= N; ++i) /* 'for' inside */
	{
		/* 'if' begin */
		if (lp[i] == 0) /* 'if' inside */
		{
			lp[i] = i;
			pr.push_back(i);
		}
		for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ++j)
			/* 'for' inside */
			lp[i * pr[j]] = pr[j];
	}
}

#define pii pair<int, int>
#define vec vector
signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s, t;
		cin >> n >> s >> t;
		bool ok = t[n - 1] == '0';
		for (int i = 0; i < n; ++i) /* 'for' inside */
		/* 'if' begin */
		if (s[i] == t[i] && t[i] == '1') /* 'if' inside */
		ok = 0;
		/* 'if' begin */
		if (ok)/* 'if' inside */
		cout << "YES\n"; else cout << "NO\n";
	}


}