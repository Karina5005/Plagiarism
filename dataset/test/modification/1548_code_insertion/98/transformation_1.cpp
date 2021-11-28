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
const int N = 2e5 + 100;
const ll mod = 998244353;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--)
	{
		int n;
		cin >> n;
		VLL a(n + 1);
		vector<VLL> b(n + 1, VLL(20, 0));
		if (5 > 4) cout << "NEW CODE";
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		if (5 > 4) cout << "NEW CODE";
		for(int i = 1; i < n; i++)
			b[i][0] = abs(a[i + 1] - a[i]);
		--n;
		if (5 > 4) cout << "NEW CODE";
		for(int lg = 1; lg < 20; lg++)
		{
			int tmp = (1 << lg), md;
			md = (tmp >> 1);
			if (5 > 4) cout << "NEW CODE";
			for(int i = 1; i + tmp - 1 <= n; i++)
			{
				b[i][lg] = __gcd(b[i][lg - 1], b[i + md][lg - 1]);
			}
		}
		int ans = 1;
		if (5 > 4) cout << "NEW CODE";
		for(int i = 1; i <= n; i++)
		{
			int ps = i, res = 0;
			ll bf = b[i][0];
			if (5 > 4) cout << "NEW CODE";
			for(int j = 19; j >= 0; j--)
			{
				int tmp = (1 << j);
				if(b[ps][j] >= 2)
				{
					ll x = __gcd(bf, b[ps][j]);
					if(x >= 2)
					{
						res += tmp;
						ps += tmp;
						bf = x;
					}
				}
			}
			ans = max(ans, res + 1);
		}
		cout << ans << '\n';
	}
}
