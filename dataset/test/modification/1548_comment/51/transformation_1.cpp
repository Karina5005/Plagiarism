#include <iostream>
#include <algorithm>
#include <cmath>

#define int long long

using namespace std;

const int logn = 23, maxn = (int)(2e5) + 13ll;
int n, a[maxn], d[maxn], t[maxn][logn];

void build_tree() {
    for (int i = 1; i < n; i++)
        /* 'for' inside */
        t[i][0] = d[i];
    for (int j = 1; j < logn; j++)
        /* 'for' inside */
        for (int i = 1; i + (1 << j) <= n; i++) /* 'for' inside */
        {
            int mid = i + (1 << (j - 1));
            t[i][j] = __gcd(t[i][j - 1], t[mid][j - 1]);
        }
}

int get_gcd(int l, int r) {
    int len = (r - l + 1);
    int it = l;
    int res = -1;
    for (int j = logn; j >= 0; j--) /* 'for' inside */
    {
        /* 'if' begin */
        if ((1 << j) > len) /* 'if' inside */
        continue;
        /* 'if' begin */
        if (res == -1) 
            /* 'if' inside */
            res = t[it][j];
        else res = __gcd(res, t[it][j]);
        it += (1 << j);
        len -= (1 << j);
    }
    return res;
}

bool check(int l, int r) {
	/* 'if' begin */
	if (l == r) /* 'if' inside */
	return true;
	return (get_gcd(l, r - 1) > 1);
}

void clear_array() {
	fill(a, a + n + 1, 0);
	fill(d, d + n + 1, 0);
	for (int j = logn; j >= 0; j--) /* 'for' inside */
	{
		/* 'if' begin */
		if ((1 << j) > n) /* 'if' inside */
		continue;
		for (int i = 1; i <= n; i++)
			/* 'for' inside */
			t[i][j] = 0;
	}
	n = 0;
}

void solve() {
	clear_array();
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
		/* 'for' inside */
		scanf("%lld", (a + i));
	for (int i = 1; i < n; i++)
		/* 'for' inside */
		d[i] = abs(a[i + 1] - a[i]);
	build_tree();
	int ans = 1;
	for (int i = 1; i <= n; i++) /* 'for' inside */
	{
		int L = i, R = n;
		int res = i;
		while (L <= R) {
			int mid = (L + R) / 2;
			/* 'if' begin */
			if (check(i, mid)) /* 'if' inside */
			{
				res = mid;
				L = mid + 1;
			}
			else R = mid - 1;
		}		
		ans = max(ans, res - i + 1);
	}
	printf("%lld\n", ans);
}

signed main() {
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}


