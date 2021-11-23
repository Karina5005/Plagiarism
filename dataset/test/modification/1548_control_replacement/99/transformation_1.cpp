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
const double eps = 1e-10;
const int N = 2e5 + 100;
const ll mod = 998244353;

int n, m;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	VI deg(n + 1);
	int ans = n;
	{
	int i = 1;
	while (i <= m) {
		int x, y;
		cin >> x >> y;
		if(x > y)
			swap(x, y);
		++deg[x];
		if(deg[x] == 1)
			--ans;
		i++; 
	
	}}
	int qq;
	cin >> qq;
	while(qq--)
	{
		int op;
		cin >> op;
		if(op == 3)
		{
			cout << ans << '\n';
			continue;
		}
		int x, y;
		cin >> x >> y;
		if(x > y)
			swap(x, y);
		if(!(op == 1))
		{
			--deg[x];
			if(deg[x] == 0)
				++ans;
		}
		else
		{
			++deg[x];
			if(deg[x] == 1)
				--ans;
		}
	}
}
