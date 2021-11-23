
#include <bits/stdc++.h>

using namespace std;

struct CRD {
	long long C; 
	long long R;
	long long D;
};

int vzk, rg_kmn, ah_jj;
long long rf;
vector<vector<CRD>> mg; 
vector<vector<bool>> jb;

void h_nn(int p_z, int unn, int hi_mow) {
	if (p_z < 0 || unn < 0 || jb[p_z][unn] == true) return;
	if (hi_mow == 0) {
		rf -= mg[p_z][unn].R;
		mg[p_z][unn].R = mg[p_z][unn + 1].C + mg[p_z][unn + 1].D;
		rf += mg[p_z][unn].R;
		h_nn(p_z - 1, unn, 1);
	}
	else {
		rf -= mg[p_z][unn].D;
		mg[p_z][unn].D = mg[p_z + 1][unn].C + mg[p_z + 1][unn].R;
		rf += mg[p_z][unn].D;
		h_nn(p_z, unn - 1, 0);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> vzk >> rg_kmn >> ah_jj;
	mg = vector<vector<CRD>> (vzk, vector<CRD> (rg_kmn));
	rf = 0;
	for (int s = vzk - 1; s >= 0; s--) {
		for (int bb = rg_kmn - 1; bb >= 0; bb--) {
			mg[s][bb].C = 1;
			if (bb == rg_kmn - 1) {
				mg[s][bb].R = 0;
			}
			else {
				mg[s][bb].R = mg[s][bb + 1].C + mg[s][bb + 1].D;
			}
			if (s == vzk - 1) {
				mg[s][bb].D = 0;
			}
			else {
				mg[s][bb].D = mg[s + 1][bb].C + mg[s + 1][bb].R;
			}

			rf += mg[s][bb].C + mg[s][bb].R + mg[s][bb].D; 
		}
	}

	jb = vector<vector<bool>> (vzk, vector<bool> (rg_kmn, false));
	while (ah_jj--) {
		int gp_bfv, dg_h;
		cin >> gp_bfv >> dg_h;
		gp_bfv--;
		dg_h--;
		if (jb[gp_bfv][dg_h] == true) {
			jb[gp_bfv][dg_h] = false;
			mg[gp_bfv][dg_h].C = 1;
			if (gp_bfv == vzk - 1) mg[gp_bfv][dg_h].D = 0; 
			else mg[gp_bfv][dg_h].D = mg[gp_bfv + 1][dg_h].C + mg[gp_bfv + 1][dg_h].R;
			if (dg_h == rg_kmn - 1) mg[gp_bfv][dg_h].R = 0;
			else mg[gp_bfv][dg_h].R = mg[gp_bfv][dg_h + 1].C + mg[gp_bfv][dg_h + 1].D;
			rf += mg[gp_bfv][dg_h].C + mg[gp_bfv][dg_h].R + mg[gp_bfv][dg_h].D;
			h_nn(gp_bfv, dg_h - 1, 0);
			h_nn(gp_bfv - 1, dg_h, 1);
		}
		else {
			jb[gp_bfv][dg_h] = true;
			rf -= mg[gp_bfv][dg_h].C + mg[gp_bfv][dg_h].R + mg[gp_bfv][dg_h].D;
			mg[gp_bfv][dg_h] = {0, 0, 0};
			h_nn(gp_bfv, dg_h - 1, 0);
			h_nn(gp_bfv - 1, dg_h, 1);
		}
		cout << rf << "\n";
	}
	return 0;
}


