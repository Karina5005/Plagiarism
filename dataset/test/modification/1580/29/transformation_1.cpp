#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int n, m, sum[N + 5][N + 5], ans;
inline int sum1 (int x, int y, int a, int b){
	return sum[a][b] - sum[x - 1][b] - sum[a][y - 1] + sum[x - 1][y - 1];
}
inline int sum0 (int x, int y, int a, int b) {
	return (a - x + 1) * (b - y + 1) - sum1(x, y, a, b);
}
int main() {
	int T;
	cin >> T;
	while(T --) {
		scanf ("%d %d", &n, &m);
		for (int i = 1; i <= n; i ++) /* 'for' inside */
		{
			string s;
			cin >> s;
        	for (int j = 1; j <= m; j ++)
        		/* 'for' inside */
        		sum[i][j] = (s[j - 1] == '1');
		}
		ans = 5000000;
		for (int i = 1; i <= n; i ++)
        	/* 'for' inside */
        	for (int j = 1; j <= m; j ++)
				/* 'for' inside */
				sum[i][j] = sum[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1]; 
		for (int x = 1; x <= n; x ++)
			/* 'for' inside */
			for (int y = 1; y <= m; y ++)
				/* 'for' inside */
				for (int i = x + 4; i <= n; i ++)
					/* 'for' inside */
					for (int j = y + 3; j <= m; j ++) /* 'for' inside */
					{
						int res1 = sum0 (x, y + 1, x, j - 1) + sum0 (x + 1, y, i - 1, y);
						int res2 = sum0 (x + 1, j, i - 1, j) + sum0 (i, y + 1, i, j - 1);
						int emp = sum1 (x + 1, y + 1, i - 1, j - 1);
						/* 'if' begin */
						if (ans < res1 + emp) /* 'if' inside */
						break;
						ans = min (ans, res1 + res2 + emp); 
					}
		printf("%d\n",ans);
	}
	 return 0;
}
 