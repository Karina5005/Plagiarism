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

int yy, o_cg;

vector<int> oe, e, bwq_rv, zk, t;
vector<vector<long long>> v_jcm;

void ukg_gu(int d) {
	t[d] = 1;
	if (e[d] != -1) {
		ukg_gu(e[d]);
		for (int yc = min(o_cg, t[d]); yc >= 0; yc--) {
			for (int y = min(o_cg, t[e[d]]); y >= 0; y--) {
				v_jcm[d][yc + y] = max(v_jcm[d][yc + y], v_jcm[d][yc] + v_jcm[e[d]][y] + (long long) y * (o_cg - y) * (oe[e[d]] - oe[d]));
			}
		}
		t[d] += t[e[d]];
	}
	if (bwq_rv[d] != -1) {
		ukg_gu(bwq_rv[d]);
		for (int v = min(o_cg, t[d]); v >= 0; v--) {
			for (int je_sl = min(o_cg, t[bwq_rv[d]]); je_sl >= 0; je_sl--) {
				v_jcm[d][v + je_sl] = max(v_jcm[d][v + je_sl], v_jcm[d][v] + v_jcm[bwq_rv[d]][je_sl] + (long long) je_sl * (o_cg - je_sl) * (oe[bwq_rv[d]] - oe[d]));
			}
		}
		t[d] += t[bwq_rv[d]];
	}
}

void vu_zn() {
	cin >> yy >> o_cg;
	oe.resize(yy);
	e.resize(yy, -1);
	bwq_rv.resize(yy, -1);
	zk.resize(yy, -1);
	t.resize(yy);
	v_jcm.resize(yy, vector<long long>(yy + 1));
	int ffq_wf = 0;
	for (int rl = 0; rl < yy; rl++) {
		cin >> oe[rl];
		if (oe[rl] < oe[ffq_wf]) {
			ffq_wf = rl;
		}
		int fb = -1, mut = rl - 1;
		while (mut != -1 && oe[rl] < oe[mut]) {
			fb = mut;
			mut = zk[mut];			
		}
		if (mut != -1) {
			bwq_rv[mut] = rl;
			zk[rl] = mut;
		}
		e[rl] = fb;
	}
	ukg_gu(ffq_wf);
	cout << v_jcm[ffq_wf][o_cg];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	vu_zn();
	return 0;
}
