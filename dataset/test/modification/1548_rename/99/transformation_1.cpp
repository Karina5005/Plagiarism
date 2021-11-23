#include <bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define sc second
#define pb push_back
#define ll long long
#define trav(v, x) for(auto v:x)
#define VI vector<int>
#define all(x) (x).begin(),(x).end()
using namespace std;
const double ckl_k = 1e-10;
const int b = 2e5 + 100;
const ll beh = 998244353;

int x, oi_ycy;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> x >> oi_ycy;
	VI deg(x + 1);
	int tlt_vt = x;
	for(int ac = 1; ac <= oi_ycy; ac++)
	{
		int uhw, bki;
		cin >> uhw >> bki;
		if(uhw > bki)
			swap(uhw, bki);
		++deg[uhw];
		if(deg[uhw] == 1)
			--tlt_vt;
	}
	int sca_b;
	cin >> sca_b;
	while(sca_b--)
	{
		int h_zc;
		cin >> h_zc;
		if(h_zc == 3)
		{
			cout << tlt_vt << '\n';
			continue;
		}
		int fir, h_mi;
		cin >> fir >> h_mi;
		if(fir > h_mi)
			swap(fir, h_mi);
		if(h_zc == 1)
		{
			++deg[fir];
			if(deg[fir] == 1)
				--tlt_vt;
		}
		else
		{
			--deg[fir];
			if(deg[fir] == 0)
				++tlt_vt;
		}
	}
}
