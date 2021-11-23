#include <bits/stdc++.h>

using namespace std;

//#define int long long

int to0(vector<vector<int>> &pref, int r1, int c1, int r2, int c2)
{
	return pref[r2][c2] - pref[r1-1][c2] - pref[r2][c1-1] + pref[r1-1][c1-1];
}

int to1(vector<vector<int>> &pref, int r1, int c1, int r2, int c2)
{
	return (r2-r1+1) * (c2-c1+1) - to0(pref, r1, c1, r2, c2);
}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int>> vec(n+1, vector<int>(m+1));
		vector<vector<int>> pref(n+1, vector<int>(m+1, 0));
		string s;
		for(int i=1; i<=n; i++)
		{
			cin>>s;
			for(int j=1; j<=m; j++)
				vec[i][j] = (s[j-1] - '0');
		}

		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++)
				pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + vec[i][j];

		int ans = 1000000;

		for(int l=1; l<=m; l++)
		{
			for(int r=l+3; r<=m; r++)
			{
				int prevMin = 1000000, currMin = 1000000;
				for(int row = 5; row<=n; row++)
				{
					int lastRowCost = 0;
					lastRowCost += to1(pref,row,l+1,row,r-1);

					int prev4Cost = 0;
					prev4Cost += to1(pref, row-4, l+1, row-4, r-1);
					prev4Cost += to1(pref, row-3, l, row-1, l) + to1(pref, row-3, r, row-1, r);
					prev4Cost += to0(pref, row-3, l+1, row-1, r-1);

					currMin = min(prevMin + lastRowCost, prev4Cost + lastRowCost);
					ans = min(ans, currMin);

					prevMin = currMin;
					prevMin -= to1(pref, row, l+1, row, r-1);
					prevMin += to0(pref, row, l+1, row, r-1) + to1(pref, row, l, row, l) + to1(pref, row, r, row, r);
				}
			}
		}

		cout<<ans<<endl;
	}

    return 0;
}
