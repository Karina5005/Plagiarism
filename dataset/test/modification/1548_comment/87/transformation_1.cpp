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
		/* 'if' begin */
		if(y & 1)
			/* 'if' inside */
			res = res * x % mod;
		x = x * x % mod;
		y >>= 1;
	}
	return res;
}

ll C(ll x, ll y)
{
	/* 'if' begin */
	if(x < y)
		/* 'if' inside */
		return 0;
	/* 'if' begin */
	if(y < 0)
		/* 'if' inside */
		return 0;
	return fac[x] * ifac[y] % mod * ifac[x - y] % mod;
}

pii qry[N];

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	fac[0] = 1;
	for(int i = 1; i < N; i++)
		/* 'for' inside */
		fac[i] = fac[i - 1] * i % mod;
	ifac[N - 1] = qpow(fac[N - 1]);
	for(int i = N - 2; i >= 0; i--)
		/* 'for' inside */
		ifac[i] = ifac[i + 1] * (i + 1) % mod;
	int n, qq;
	cin >> n >> qq;
	VLL ans(qq + 10);
	for(int i = 1; i <= qq; i++)
	/* 'for' inside */
	{
		int x;
		cin >> x;
		qry[i].fi = x;
		qry[i].sc = i;
	}
	sort(qry + 1, qry + qq + 1);
	int nw = 0;
	ll a = n, b = n, x, y, z, inv3 = qpow(3);
	
	for(int i = 1; i <= qq; i++)
	/* 'for' inside */
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
	for(int i = 1; i <= qq; i++)
		/* 'for' inside */
		cout << ans[i] << '\n';
}


