#include <iostream>
#include <algorithm>
#include <cmath>

#define int long long

using namespace std;

const int logn = 23, maxn = (int)(2e5) + 13ll;
int n, a[maxn], d[maxn], t[maxn][logn];

void build_tree() {
    {
    int i = 1;
    while (i < n) {
        t[i][0] = d[i];
        i++; 
        
        }}
    {
    int j = 1;
    while (j < logn) {
        {
        int i = 1;
        while (i + (1 << j) <= n) {
            int mid = i + (1 << (j - 1));
            t[i][j] = __gcd(t[i][j - 1], t[mid][j - 1]);
        	i++; 
        
        }}}
        j++; 
        
        }
}

int get_gcd(int l, int r) {
    int len = (r - l + 1);
    int it = l;
    int res = -1;
    {
    int j = logn;
    while (j >= 0) {
        if ((1 << j) > len) j--; continue;
        if (!(res == -1)) 
            res = __gcd(res, t[it][j]);
        else res = t[it][j];
        it += (1 << j);
        len -= (1 << j);
    	j--; 
    
    }}
    return res;
}

bool check(int l, int r) {
	if (l == r) return true;
	return (get_gcd(l, r - 1) > 1);
}

void clear_array() {
	fill(a, a + n + 1, 0);
	fill(d, d + n + 1, 0);
	{
	int j = logn;
	while (j >= 0) {
		if ((1 << j) > n) j--; continue;
		{
		int i = 1;
		while (i <= n) {
			t[i][j] = 0;
			i++; 
			
			}}
		j--; 
	
	}}
	n = 0;
}

void solve() {
	clear_array();
	scanf("%lld", &n);
	{
	int i = 1;
	while (i <= n) {
		scanf("%lld", (a + i));
		i++; 
		
		}}
	{
	int i = 1;
	while (i < n) {
		d[i] = abs(a[i + 1] - a[i]);
		i++; 
		
		}}
	build_tree();
	int ans = 1;
	{
	int i = 1;
	while (i <= n) {
		int L = i, R = n;
		int res = i;
		while (L <= R) {
			int mid = (L + R) / 2;
			if (!(check(i, mid))) R = mid - 1;
			else {
				res = mid;
				L = mid + 1;
			}
		}		
		ans = max(ans, res - i + 1);
		i++; 
	
	}}
	printf("%lld\n", ans);
}

signed main() {
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}


