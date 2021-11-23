/*


 -----      |   |      ^      -----   ----      |\    |  -----   ----
   |        |   |     / \       |    |          | \   |    |    |
   |        |---|    /---\      |    |----      |  \  |    |    | -- 
   |        |   |   /     \     |    |          |   \ |    |    |   |
 -----      |   |  /       \    |     ----      |    \|  -----   ---


*/

#include <bits/stdc++.h>
#define T int t; cin >> t; while (t--)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
typedef pair<int, int> pii;

int n, m, k, p;

inline int add(int a, int b) {
	if (a + b >= p) {
		return a + b - p;
	}
	return a + b;
}

void solve() {
	cin >> n >> m >> k >> p;
	int C[n + 1][n + 1];
	{
	int i = 0;
	while (i <= n) {
		C[i][0] = 1;
		C[i][i] = 1;
		{
		int j = 1;
		while (j < i) {
			C[i][j] = add(C[i - 1][j - 1], C[i - 1][j]);
			j++; 
		
		}}
		i++; 
	
	}}
	int dp[n + 1][m + 1][k + 2] {};
	{
	int i = 0;
	while (i <= m) {
		dp[0][i][0] = 1;
		i++; 
	
	}}
	int fact = 1;
	{
	int i = 0;
	while (i < n) {
		dp[i][0][0] = fact;
		fact = (long long) fact * (i + 1) % p;
		i++; 
	
	}}
	{
	int i = 1;
	while (i <= n) {
		{
		int h = 1;
		while (h <= m) {
			{
			int l = 0;
			while (l < i) {
				{
				int s1 = 0;
				while (s1 <= k) {
					if (dp[l][h - 1][s1] == 0) {
						i++; h++; l++; s1++; continue;
					}
					{
					int s2 = 0;
					while (s1 + s2 <= k) {
						if (dp[i - l - 1][h - 1][s2] == 0) {
							i++; h++; l++; s1++; s2++; continue;
						}
						dp[i][h][s1 + s2 + (h == 1)] = (dp[i][h][s1 + s2 + (h == 1)] + (long long) dp[l][h - 1][s1] * dp[i - l - 1][h - 1][s2] % p * C[i - 1][l]) % p;
						s2++; 
					
					}}
					s1++; 
				
				}}
				l++; 
			
			}}
			h++; 
		
		}}
		i++; 
	
	}}
	cout << dp[n][m][k] << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	solve();
	return 0;
}
