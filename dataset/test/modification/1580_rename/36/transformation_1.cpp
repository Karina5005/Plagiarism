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

int py_vi, n_ap;

vector<int> qqc_n, omw_h, bys, tn, oym;
vector<vector<long long>> yty;

void v_iy(int nmg_y) {
	oym[nmg_y] = 1;
	if (omw_h[nmg_y] != -1) {
		v_iy(omw_h[nmg_y]);
		for (int p_b = min(n_ap, oym[nmg_y]); p_b >= 0; p_b--) {
			for (int k = min(n_ap, oym[omw_h[nmg_y]]); k >= 0; k--) {
				yty[nmg_y][p_b + k] = max(yty[nmg_y][p_b + k], yty[nmg_y][p_b] + yty[omw_h[nmg_y]][k] + (long long) k * (n_ap - k) * (qqc_n[omw_h[nmg_y]] - qqc_n[nmg_y]));
			}
		}
		oym[nmg_y] += oym[omw_h[nmg_y]];
	}
	if (bys[nmg_y] != -1) {
		v_iy(bys[nmg_y]);
		for (int vc_xrs = min(n_ap, oym[nmg_y]); vc_xrs >= 0; vc_xrs--) {
			for (int hsw_in = min(n_ap, oym[bys[nmg_y]]); hsw_in >= 0; hsw_in--) {
				yty[nmg_y][vc_xrs + hsw_in] = max(yty[nmg_y][vc_xrs + hsw_in], yty[nmg_y][vc_xrs] + yty[bys[nmg_y]][hsw_in] + (long long) hsw_in * (n_ap - hsw_in) * (qqc_n[bys[nmg_y]] - qqc_n[nmg_y]));
			}
		}
		oym[nmg_y] += oym[bys[nmg_y]];
	}
}

void v_k() {
	cin >> py_vi >> n_ap;
	qqc_n.resize(py_vi);
	omw_h.resize(py_vi, -1);
	bys.resize(py_vi, -1);
	tn.resize(py_vi, -1);
	oym.resize(py_vi);
	yty.resize(py_vi, vector<long long>(py_vi + 1));
	int ziy = 0;
	for (int v = 0; v < py_vi; v++) {
		cin >> qqc_n[v];
		if (qqc_n[v] < qqc_n[ziy]) {
			ziy = v;
		}
		int z_lba = -1, zv_bnq = v - 1;
		while (zv_bnq != -1 && qqc_n[v] < qqc_n[zv_bnq]) {
			z_lba = zv_bnq;
			zv_bnq = tn[zv_bnq];
		}
		if (zv_bnq != -1) {
			bys[zv_bnq] = v;
			tn[v] = zv_bnq;
		}
		omw_h[v] = z_lba;
	}
	v_iy(ziy);
	cout << yty[ziy][n_ap];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	v_k();
	return 0;
}
