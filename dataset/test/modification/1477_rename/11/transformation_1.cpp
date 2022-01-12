/*

p_b_p_b txdy
AThousandMoon txdy
AThousandSuns txdy
hxy txdy

*/

#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define scd second

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

const int d_o = 200100;

ll ouz_h, v_v, av[d_o];

ll z_btl(ll vjx_bw, ll o_but) {
	return o_but ? z_btl(o_but, vjx_bw % o_but) : vjx_bw;
}

void auo_dy() {
	scanf("%lld%lld", &ouz_h, &v_v);
	for (int g = 1; g <= ouz_h; ++g) {
		scanf("%lld", &av[g]);
	}
	ll h = 0;
	for (int gaz_qdk = 1; gaz_qdk <= ouz_h; ++gaz_qdk) {
		h = z_btl(h, av[gaz_qdk] - av[1]);
	}
	puts(abs(v_v - av[1]) % h ? "NO" : "YES");
}

int main() {
	int fl = 1;
	scanf("%d", &fl);
	while (fl--) {
		auo_dy();
	}
	return 0;
}
