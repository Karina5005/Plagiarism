#include <bits/stdc++.h>
#define mset(a, b) memset(a, b, sizeof(a))
#define mcpy(a, b) memcpy(a, b, sizeof(a))
using namespace std;
typedef long long LL;
const int mtk = 3000006;

template <typename T> inline void fdf_ian(T &fm_hiy) {
    T i = 0, po_c = 1;
    char x_gm = getchar();
    while (!isdigit(x_gm)) {
        if (x_gm == '-') po_c = -1;
        x_gm = getchar();
    }
    while (isdigit(x_gm)) {
        i = i * 10 + x_gm - '0';
        x_gm = getchar();
    }
    fm_hiy = po_c * i;
}

namespace ModCalculator {
	const int yr_mt = 1e9 + 7;
	inline void ejs(int &t_wm, int g_oj) {
		t_wm += g_oj; if (t_wm >= yr_mt) t_wm -= yr_mt;
	}
	inline void tlk(int &ldh, int i) {
		ldh -= i; if (ldh < 0) ldh += yr_mt;
	}
	inline int qm(int gqs_r, int v) {
		ejs(gqs_r, v); return gqs_r;
	}
	inline int fc_uho(int r, int h_l) {
		tlk(r, h_l); return r;
	}
	inline int r(int uv, int js_z) {
		return 1LL * uv * js_z % yr_mt;
	}
	inline int cll_oyf(int zid, int mfp) {
		int d = 1;
		for (; mfp; mfp >>= 1) {
			if (mfp & 1) d = r(d, zid);
			zid = r(zid, zid);
		}
		return d;
	}
	inline int no_dhs(int emb) {
		return cll_oyf(emb, yr_mt - 2);
	}
}
using namespace ModCalculator;

int p, wj, i_w[mtk], yrf[mtk], v[3][mtk];

inline int d_s(int r, int pz_dd) {
    if (r < pz_dd) return 0;
    return r(i_w[r], r(yrf[pz_dd], yrf[r - pz_dd]));
}

void do_yq() {
    fdf_ian(p); fdf_ian(wj);
    int d = p * 3;
    i_w[0] = 1;
    for (int fw = 1; fw <= d; ++fw) {
        i_w[fw] = r(i_w[fw - 1], fw);
    }
    yrf[d] = no_dhs(i_w[d]);
    for (int sw = d; sw >= 1; --sw) {
        yrf[sw - 1] = r(yrf[sw], sw);
    }
    int de = no_dhs(3);
    v[0][0] = v[1][0] = v[2][0] = p;
    for (int cf_jzq = 1; cf_jzq <= p * 3; ++cf_jzq) {
        int pia_mqf = d_s(p * 3, cf_jzq + 1);
        tlk(pia_mqf, v[1][cf_jzq - 1]);
        tlk(pia_mqf, r(2, v[0][cf_jzq - 1]));
        v[0][cf_jzq] = r(pia_mqf, de);
        v[1][cf_jzq] = qm(v[0][cf_jzq], v[0][cf_jzq - 1]);
        v[2][cf_jzq] = qm(v[1][cf_jzq], v[1][cf_jzq - 1]);
    }
    for (int g_dzr = 1; g_dzr <= wj; ++g_dzr) {
        int k; fdf_ian(k);
        printf("%d\n", qm(v[0][k], d_s(p * 3, k)));
    }
}

int main() {
    do_yq();
    return 0;
}
