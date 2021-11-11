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
	for(int i = 1; i <= m; i++)
	/* 'for' inside */
	{
		int x, y;
		cin >> x >> y;
		/* 'if' begin */
		if(x > y)
			/* 'if' inside */
			swap(x, y);
		++deg[x];
		/* 'if' begin */
		if(deg[x] == 1)
			/* 'if' inside */
			--ans;
	}
	int qq;
	cin >> qq;
	while(qq--)
	{
		int op;
		cin >> op;
		/* 'if' begin */
		if(op == 3)
		/* 'if' inside */
		{
			cout << ans << '\n';
			continue;
		}
		int x, y;
		cin >> x >> y;
		/* 'if' begin */
		if(x > y)
			/* 'if' inside */
			swap(x, y);
		/* 'if' begin */
		if(op == 1)
		/* 'if' inside */
		{
			++deg[x];
			/* 'if' begin */
			if(deg[x] == 1)
				/* 'if' inside */
				--ans;
		}
		else
		{
			--deg[x];
			/* 'if' begin */
			if(deg[x] == 0)
				/* 'if' inside */
				++ans;
		}
	}
}
