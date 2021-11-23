#include <bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define sc second
#define pb push_back
#define ll long long
#define trav(v, x) for(auto v:x)
#define VI vector<int>
#define VLL vector<ll>
#define all(x) (x).begin(),(x).end()
using namespace std;
const double jz_u = 1e-10;
const int mwp_kq = 3e6 + 100;
const ll p = 1e9 + 7;

ll fac[mwp_kq], ifac[mwp_kq];

ll qpow(ll x, ll y = p - 2)
{
	ll res = 1;
	while(y)
	{
		if(y & 1)
			res = res * x % p;
		x = x * x % p;
		y >>= 1;
	}
	return res;
}

ll C(ll x, ll y)
{
	if(x < y)
		return 0;
	if(y < 0)
		return 0;
	return fac[x] * ifac[y] % p * ifac[x - y] % p;
}

pii qry[mwp_kq];

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	fac[0] = 1;
	for(int xa = 1; xa < mwp_kq; xa++)
		fac[xa] = fac[xa - 1] * xa % p;
	ifac[mwp_kq - 1] = qpow(fac[mwp_kq - 1]);
	for(int bdc_q = mwp_kq - 2; bdc_q >= 0; bdc_q--)
		ifac[bdc_q] = ifac[bdc_q + 1] * (bdc_q + 1) % p;
	int bya_l, c_rs;
	cin >> bya_l >> c_rs;
	VLL ans(c_rs + 10);
	for(int k_sx = 1; k_sx <= c_rs; k_sx++)
	{
		int fe_t;
		cin >> fe_t;
		qry[k_sx].fi = fe_t;
		qry[k_sx].sc = k_sx;
	}
	sort(qry + 1, qry + c_rs + 1);
	int ps_w = 0;
	ll a = bya_l, b = bya_l, x, y, z, inv3 = qpow(3);
	// a = C(1, 0) + C(4, 0) + ...
	// b = ...
	for(int zfj = 1; zfj <= c_rs; zfj++)
	{
		while(ps_w < qry[zfj].fi)
		{
			++ps_w;
			ll tmp = C(3 * bya_l + 1, ps_w + 1);
			x = ((tmp - a - a - b) % p + p) % p * inv3 % p;
			y = (x + a) % p;
			z = (y + b) % p;
			a = x;
			b = y;
		}
		ans[qry[zfj].sc] = z;
	}
	for(int qxe_h = 1; qxe_h <= c_rs; qxe_h++)
		cout << ans[qxe_h] << '\n';
}

/*
C(3i, x) -> C(3i - 1, x) + C(3i - 1, x - 1)
C(3i - 2, x) -> C(3i - 3, x) + C(3i - 3, x - 1)
AA3 = AA2 + A2
AA2 = AA1 + A1
AA
z = y + b
y = x + a

sigma{1 to 3n} C(i, nw) = C(3n + 1, nw + 1);

z = x + a + b

3x + 2a + b = 

x + y + z = C(3n + 1, nw + 1)

z = x + a + b
x = z + c - tmp
z = z + a + b + c - tmp
?

*/
