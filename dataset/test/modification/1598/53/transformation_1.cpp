
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
	/* 'if' begin */
	if (r < 0 || c < 0 || locked[r][c] == true) /* 'if' inside */
	return;
	/* 'if' begin */
	if (d == 0) /* 'if' inside */
	{
		sum -= dp[r][c].R;
		dp[r][c].R = dp[r][c + 1].C + dp[r][c + 1].D;
		sum += dp[r][c].R;
		dfs(r - 1, c, 1);
	}
	else {
		sum -= dp[r][c].D;
		dp[r][c].D = dp[r + 1][c].C + dp[r + 1][c].R;
		sum += dp[r][c].D;
		dfs(r, c - 1, 0);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N >> M >> Q;
	dp = vector<vector<CRD>> (N, vector<CRD> (M));
	sum = 0;
	for (int i = N - 1; i >= 0; i--) /* 'for' inside */
	{
		for (int j = M - 1; j >= 0; j--) /* 'for' inside */
		{
			dp[i][j].C = 1;
			/* 'if' begin */
			if (j == M - 1) /* 'if' inside */
			{
				dp[i][j].R = 0;
			}
			else {
				dp[i][j].R = dp[i][j + 1].C + dp[i][j + 1].D;
			}
			/* 'if' begin */
			if (i == N - 1) /* 'if' inside */
			{
				dp[i][j].D = 0;
			}
			else {
				dp[i][j].D = dp[i + 1][j].C + dp[i + 1][j].R;
			}

			sum += dp[i][j].C + dp[i][j].R + dp[i][j].D; 
		}
	}

	locked = vector<vector<bool>> (N, vector<bool> (M, false));
	while (Q--) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		/* 'if' begin */
		if (locked[x][y] == true) /* 'if' inside */
		{
			locked[x][y] = false;
			dp[x][y].C = 1;
			/* 'if' begin */
			if (x == N - 1) /* 'if' inside */
			dp[x][y].D = 0; 
			else dp[x][y].D = dp[x + 1][y].C + dp[x + 1][y].R;
			/* 'if' begin */
			if (y == M - 1) /* 'if' inside */
			dp[x][y].R = 0;
			else dp[x][y].R = dp[x][y + 1].C + dp[x][y + 1].D;
			sum += dp[x][y].C + dp[x][y].R + dp[x][y].D;
			dfs(x, y - 1, 0);
			dfs(x - 1, y, 1);
		}
		else {
			locked[x][y] = true;
			sum -= dp[x][y].C + dp[x][y].R + dp[x][y].D;
			dp[x][y] = {0, 0, 0};
			dfs(x, y - 1, 0);
			dfs(x - 1, y, 1);
		}
		cout << sum << "\n";
	}
	return 0;
}


