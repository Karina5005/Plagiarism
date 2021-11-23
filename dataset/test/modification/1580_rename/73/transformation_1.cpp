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

int g, h, a, ts_msc;

inline int glc_qb(int b, int ljy) {
	if (b + ljy >= ts_msc) {
		return b + ljy - ts_msc;
	}
	return b + ljy;
}

void w_jh() {
	cin >> g >> h >> a >> ts_msc;
	int jni_cn[g + 1][g + 1];
	for (int tdq_i = 0; tdq_i <= g; tdq_i++) {
		jni_cn[tdq_i][0] = 1;
		jni_cn[tdq_i][tdq_i] = 1;
		for (int ew = 1; ew < tdq_i; ew++) {
			jni_cn[tdq_i][ew] = glc_qb(jni_cn[tdq_i - 1][ew - 1], jni_cn[tdq_i - 1][ew]);
		}
	}
	int ju_hhp[g + 1][h + 1][a + 2] {};
	for (int wie_j = 0; wie_j <= h; wie_j++) {
		dp[0][i][0] = 1;
	}
	int j = 1;
	for (int bc_jnm = 0; bc_jnm < g; bc_jnm++) {
		dp[i][0][0] = fact;
		j = (long long) j * (bc_jnm + 1) % ts_msc;
	}
	for (int ysh_w = 1; ysh_w <= g; ysh_w++) {
		for (int jr = 1; jr <= h; jr++) {
			for (int tpp_rf = 0; tpp_rf < ysh_w; tpp_rf++) {
				for (int i = 0; i <= a; i++) {
					if (dp[l][h - 1][s1] == 0) {
						continue;
					}
					for (int fwr = 0; i + fwr <= a; fwr++) {
						if (dp[i - l - 1][h - 1][s2] == 0) {
							continue;
						}
						dp[i][h][s1 + s2 + (h == 1)] = (dp[i][h][s1 + s2 + (h == 1)] + (long long) dp[l][h - 1][s1] * dp[i - l - 1][h - 1][s2] % p * C[i - 1][l]) % p;
					}
				}
			}
		}
	}
	cout << dp[n][m][k] << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	w_jh();
	return 0;
}
