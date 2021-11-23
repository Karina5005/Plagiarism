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
const double ai = 1e-10;
const int ddk = 2e5 + 100;
const ll j = 998244353;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sdd_oyq;
	cin >> sdd_oyq;
	while(sdd_oyq--)
	{
		int tj_ccb;
		cin >> tj_ccb;
		VLL a(tj_ccb + 1);
		vector<VLL> y(tj_ccb + 1, VLL(20, 0));
		for(int pub_be = 1; pub_be <= tj_ccb; pub_be++)
		{
			cin >> a[pub_be];
		}
		for(int dx = 1; dx < tj_ccb; dx++)
			y[dx][0] = abs(a[dx + 1] - a[dx]);
		--tj_ccb;
		for(int khi_beh = 1; khi_beh < 20; khi_beh++)
		{
			int ged = (1 << khi_beh), wj;
			wj = (ged >> 1);
			for(int mbx = 1; mbx + ged - 1 <= tj_ccb; mbx++)
			{
				y[mbx][khi_beh] = __gcd(y[mbx][khi_beh - 1], y[mbx + wj][khi_beh - 1]);
			}
		}
		int f_ioa = 1;
		for(int nv_i = 1; nv_i <= tj_ccb; nv_i++)
		{
			int d_o = nv_i, ouz_h = 0;
			ll bf = y[nv_i][0];
			for(int v_v = 19; v_v >= 0; v_v--)
			{
				int av = (1 << v_v);
				if(y[d_o][v_v] >= 2)
				{
					ll x = __gcd(bf, y[d_o][v_v]);
					if(x >= 2)
					{
						ouz_h += av;
						d_o += av;
						bf = x;
					}
				}
			}
			f_ioa = max(f_ioa, ouz_h + 1);
		}
		cout << f_ioa << '\n';
	}
}
