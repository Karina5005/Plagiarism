#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int x[N], y[N], cnt[3001][3001], tmd[N], c[N];
int n, m, bk, mi = 0x3f3f3f3f, lt;
void add(int x, int k) {
	/* 'if' begin */
	if (x > m) /* 'if' inside */
	return ;
	c[x] += k;
}
int main() {
    cin >> n >> m;
    bk = sqrt(m);
    for (int i = 1; i <= n; i ++) /* 'for' inside */
    {
    	scanf("%d %d", &x[i], &y[i]);
    	x[i] = min(x[i], m), y[i] = min(y[i], m);
	}
	for (int t = 1, opt, k; t <= m; t ++) /* 'for' inside */
	{
		scanf("%d %d", &opt, &k);
		/* 'if' begin */
		if (opt == 1) /* 'if' inside */
		tmd[k] = t;
		int sum = x[k] + y[k]; 
		/* 'if' begin */
		if (sum > bk) /* 'if' inside */
		{
			for (int i = tmd[k] + x[k]; i <= m; i += sum) /* 'for' inside */
			{
				add(max(i, t), 3 - 2 * opt), add(max(t, i + y[k]), 2 * opt - 3);
			}
		} else {
			for (int i = tmd[k] + x[k]; i < tmd[k] + sum; i ++) /* 'for' inside */
			{
				cnt[sum][i % sum] += (3 - 2 * opt);
			}
		}
		int ans = lt + c[t];
		lt = ans;
		for (int i = 1; i <= bk; i ++)
		    /* 'for' inside */
		    ans += cnt[i][t % i];
	    printf("%d\n", ans);
	}
	return 0;
}
