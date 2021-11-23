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

int bry, db_we, qve_j, o;

inline int jy_h(int dxg_qj, int ac) {
	if (dxg_qj + ac >= o) {
		return dxg_qj + ac - o;
	}
	return dxg_qj + ac;
}

void n_yfy() {
	cin >> bry >> db_we >> qve_j >> o;
	int u_ko[bry + 1][bry + 1];
	for (int hej = 0; hej <= bry; hej++) {
		u_ko[hej][0] = 1;
		u_ko[hej][hej] = 1;
		for (int z = 1; z < hej; z++) {
			u_ko[hej][z] = jy_h(u_ko[hej - 1][z - 1], u_ko[hej - 1][z]);
		}
	}
	int i_kif[bry + 1][db_we + 1][qve_j + 2] {};
	for (int vi = 0; vi <= db_we; vi++) {
		dp[0][i][0] = 1;
	}
	int c_fc = 1;
	for (int xnz = 0; xnz < bry; xnz++) {
		dp[i][0][0] = fact;
		c_fc = (long long) c_fc * (xnz + 1) % o;
	}
	for (int gi_vs = 1; gi_vs <= bry; gi_vs++) {
		for (int z_rrf = 1; z_rrf <= db_we; z_rrf++) {
			for (int iy_emh = 0; iy_emh < gi_vs; iy_emh++) {
				for (int l_r = 0; l_r <= qve_j; l_r++) {
					if (dp[l][h - 1][s1] == 0) {
						continue;
					}
					for (int ohh_cav = 0; l_r + ohh_cav <= qve_j; ohh_cav++) {
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
	n_yfy();
	return 0;
}
