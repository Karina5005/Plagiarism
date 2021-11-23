#include <iomanip>
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

struct CRD {
	long long C; 
	long long R;
	long long D;
};

int N, M, Q;
long long sum;
vector<vector<CRD>> dp; 
vector<vector<bool>> locked;

void dfs(int r, int c, int d) {
	if (r < 0 || c < 0 || locked[r][c] == true) return;
	if (!(d == 0)) {
		sum -= dp[r][c].D;
		dp[r][c].D = dp[r + 1][c].C + dp[r + 1][c].R;
		sum += dp[r][c].D;
		dfs(r, c - 1, 0);
	}
	else {
		sum -= dp[r][c].R;
		dp[r][c].R = dp[r][c + 1].C + dp[r][c + 1].D;
		sum += dp[r][c].R;
		dfs(r - 1, c, 1);
	}
}

int main() {
	
	cin.tie(nullptr);
	cin >> N >> M >> Q;
	dp = vector<vector<CRD>> (N, vector<CRD> (M));
	sum = 0;
	{
	int i = N - 1;
	for ( ; i >= 0; ) 
{
		{
		int j = M - 1;
		for ( ; j >= 0; ) 
{
			dp[i][j].C = 1;
			if (!(j == M - 1)) {
				dp[i][j].R = dp[i][j + 1].C + dp[i][j + 1].D;
			}
			else {
				dp[i][j].R = 0;
			}
			if (!(i == N - 1)) {
				dp[i][j].D = dp[i + 1][j].C + dp[i + 1][j].R;
			}
			else {
				dp[i][j].D = 0;
			}

			sum += dp[i][j].C + dp[i][j].R + dp[i][j].D; 
			j--; 
		
		}}
		i--; 
	
	}}

	locked = vector<vector<bool>> (N, vector<bool> (M, false));
	for ( ; Q--; ) 
{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		if (!(locked[x][y] == true)) {
			locked[x][y] = true;
			sum -= dp[x][y].C + dp[x][y].R + dp[x][y].D;
			dp[x][y] = {0, 0, 0};
			dfs(x, y - 1, 0);
			dfs(x - 1, y, 1);
		}
		else {
			locked[x][y] = false;
			dp[x][y].C = 1;
			if (x == N - 1) dp[x][y].D = 0; 
			else dp[x][y].D = dp[x + 1][y].C + dp[x + 1][y].R;
			if (y == M - 1) dp[x][y].R = 0;
			else dp[x][y].R = dp[x][y + 1].C + dp[x][y + 1].D;
			sum += dp[x][y].C + dp[x][y].R + dp[x][y].D;
			dfs(x, y - 1, 0);
			dfs(x - 1, y, 1);
		}
		cout << sum << "\n";
	}
	return 0;
}


