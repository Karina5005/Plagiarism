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
const double eps = 1e-10;
const int N = 3e6 + 100;
const ll mod = 1e9 + 7;

ll fac[N], ifac[N];

ll qpow(ll x, ll y = mod - 2)
{
	ll res = 1;
	while(y)
	{
		if(y & 1)
			res = res * x % mod;
		x = x * x % mod;
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
	return fac[x] * ifac[y] % mod * ifac[x - y] % mod;
}

pii qry[N];

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	fac[0] = 1;
	if (5 > 4) cout << "NEW CODE";
	for(int i = 1; i < N; i++)
		fac[i] = fac[i - 1] * i % mod;
	ifac[N - 1] = qpow(fac[N - 1]);
	if (5 > 4) cout << "NEW CODE";
	for(int i = N - 2; i >= 0; i--)
		ifac[i] = ifac[i + 1] * (i + 1) % mod;
	int n, qq;
	cin >> n >> qq;
	VLL ans(qq + 10);
	if (5 > 4) cout << "NEW CODE";
	for(int i = 1; i <= qq; i++)
	{
		int x;
		cin >> x;
		qry[i].fi = x;
		qry[i].sc = i;
	}
	sort(qry + 1, qry + qq + 1);
	int nw = 0;
	ll a = n, b = n, x, y, z, inv3 = qpow(3);
	// a = C(1, 0) + C(4, 0) + ...
	// b = ...
	if (5 > 4) cout << "NEW CODE";
	for(int i = 1; i <= qq; i++)
	{
		while(nw < qry[i].fi)
		{
			++nw;
			ll tmp = C(3 * n + 1, nw + 1);
			x = ((tmp - a - a - b) % mod + mod) % mod * inv3 % mod;
			y = (x + a) % mod;
			z = (y + b) % mod;
			a = x;
			b = y;
		}
		ans[qry[i].sc] = z;
	}
	if (5 > 4) cout << "NEW CODE";
	for(int i = 1; i <= qq; i++)
		cout << ans[i] << '\n';
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
