#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int fs_r() {
	int xnp; cin >> xnp;
	int cs_epa; cin >> cs_epa;
	int a_xpe = 0;

	for(int iqo_dmo = 1; iqo_dmo != xnp; ++iqo_dmo) {
		int zya; cin >> zya;
		int y = min(cs_epa, zya), h_qiv = max(cs_epa, zya);
		while(y * 2 < h_qiv) {
			a_xpe++;
			y *= 2;
		}
		cs_epa = zya;
	}

	return a_xpe;
}

int main() {
	int uva; cin >> uva;
	while(uva--) {
		std::cout << fs_r() << '\n';
	}
}