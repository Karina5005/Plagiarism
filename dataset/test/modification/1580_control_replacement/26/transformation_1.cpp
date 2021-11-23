#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int x[N], y[N], cnt[3001][3001], tmd[N], c[N];
int n, m, bk, mi = 0x3f3f3f3f, lt;
void add(int x, int k) {
	if (x > m) return ;
	c[x] += k;
}
int main() {
    cin >> n >> m;
    bk = sqrt(m);
    {
    int i = 1;
    while (i <= n) {
    	scanf("%d %d", &x[i], &y[i]);
    	x[i] = min(x[i], m), y[i] = min(y[i], m);
		i ++; 
	
	}}
	{
	int t = 1, opt, k;
	while (t <= m) {
		scanf("%d %d", &opt, &k);
		if (opt == 1) tmd[k] = t;
		int sum = x[k] + y[k]; 
		if (sum > bk) {
			{
			int i = tmd[k] + x[k];
			while (i <= m) {
				add(max(i, t), 3 - 2 * opt), add(max(t, i + y[k]), 2 * opt - 3);
				i += sum; 
			
			}}
		} else {
			{
			int i = tmd[k] + x[k];
			while (i < tmd[k] + sum) {
				cnt[sum][i % sum] += (3 - 2 * opt);
				i ++; 
			
			}}
		}
		int ans = lt + c[t];
		lt = ans;
		{
		int i = 1;
		while (i <= bk) {
		    ans += cnt[i][t % i];
		    i ++; 
		    
		    }}
	    printf("%d\n", ans);
		t ++; 
	
	}}
	return 0;
}
