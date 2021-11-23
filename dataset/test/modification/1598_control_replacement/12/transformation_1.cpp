#include <iomanip>
#include <iostream>
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

	{
	int i = 1, j = 0;
	for ( ; i < n; ) 
{
		int bit = n >> 1;
		for ( ; j >= bit; ) 
{
			j -= bit;
			bit >>= 1; 
			}
		j += bit;
		if (i < j)
			swap(a[i], a[j]);
		++i; 
	
	}}

	{
	int len = 2;
	for ( ; len <= n; ) 
{
		double ang = 2 * PI / len * (invert ? -1 : 1);
		base wlen(cos(ang), sin(ang));
		{
		int i = 0;
		for ( ; i < n; ) 
{
			base w(1);
			{
			int j = 0;
			for ( ; j < len / 2; ) 
{
				base u = a[i + j], v = a[i + j + len / 2] * w;
				a[i + j] = u + v;
				a[i + j + len / 2] = u - v;
				w *= wlen;
				++j; 
			
			}}
			i += len; 
		
		}}
		len <<= 1; 
	
	}}
	if (invert)
		{
		int i = 0;
		for ( ; i < n; ) 
{
			a[i] /= n;
			++i; 
			
			}}
}

vector<int> multiply(const vector<int>& a, const vector<int>& b) {
	vector<base> fa(a.begin(), a.end()), fb(b.begin(), b.end());
	size_t n = 1;
	for ( ; n < max(a.size(), b.size()); ) 
n <<= 1,
		++count_ops;
	n <<= 1;
	fa.resize(n), fb.resize(n);

	fft(fa, false), fft(fb, false);
	{
	size_t i = 0;
	for ( ; i < n; ) 
{
		fa[i] *= fb[i],
		++count_ops;
		++i; 
		
		}}
	fft(fa, true);
	vector<long long> res(n);
	{
	size_t i = 0;
	for ( ; i < n; ) 
{
		res[i] = (long long)(fa[i].real() + 0.5),
			++count_ops;
		if (res[i] < 0 || res[i] > 1e15) {
			cout << -1;
			res[i] = res[i];
		}
		++i; 
	
	}}
	int carry = 0;
	{
	size_t i = 0;
	for ( ; i < n; ) 
{
		res[i] += carry;
		carry = res[i] / BASE;
		++count_ops;
		res[i] %= BASE;
		++i; 
	
	}}
	vector<int> r2(res.begin(), res.end());
	for ( ; r2.size() && r2.back() == 0; ) 
r2.pop_back();
	if (!r2.size()) r2.push_back(0);
	return r2;
}

#define typ vector<int>

const int N = 1000000;
int lp[N + 1];
vector<int> pr;

void sieve() {
	{
	int i = 2;
	for ( ; i <= N; ) 
{
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back(i);
		}
		{
		int j = 0;
		for ( ; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ) 
{
			lp[i * pr[j]] = pr[j];
			++j; 
			
			}}
		++i; 
	
	}}
}

#define pii pair<int, int>
#define vec vector
signed main() {
	cin.tie(0);
	cout.tie(0);
	
	sieve();
	int t;
	cin >> t;
	for ( ; t--; ) 
{
		int n;
		string s, t;
		cin >> n >> s >> t;
		bool ok = t[n - 1] == '0';
		{
		int i = 0;
		for ( ; i < n; ) 
{
		if (s[i] == t[i] && t[i] == '1') ok = 0;
		++i; 
		
		}}
		if (!(ok))cout << "NO\n"; else cout << "YES\n";
	}


}