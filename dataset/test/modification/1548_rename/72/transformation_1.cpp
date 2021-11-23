#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define mset(a, b) memset(a, b, sizeof(a))
#define mcpy(a, b) memcpy(a, b, sizeof(a))
using namespace std;
typedef long long LL;
const int nos = 200005;

template <typename T> inline void l(T &s) {
    T qsx = 0, qqn_wuf = 1;
    char no_xo = getchar();
    while (!isdigit(no_xo)) {
        if (no_xo == '-') qqn_wuf = -1;
        no_xo = getchar();
    }
    while (isdigit(no_xo)) {
        qsx = qsx * 10 + no_xo - '0';
        no_xo = getchar();
    }
    s = qqn_wuf * qsx;
}

int ce_ipp, woy_m, p, t[nos], pib_yt;

inline void zb(int sgj_f, int nv) {
    if (nv > sgj_f) {
        ++t[sgj_f];
        pib_yt -= (t[sgj_f] == 1);
    }
}

inline void bz_ms(int zbl, int vxj) {
    if (vxj > zbl) {
        --t[zbl];
        pib_yt += (t[zbl] == 0);
    }
}

void fpj_zz() {
    l(ce_ipp); l(woy_m);
    pib_yt = ce_ipp;
    for (int bca_k = 1, w, t; bca_k <= woy_m; ++bca_k) {
        l(w); l(t);
        zb(w, t);
        zb(t, w);
    }
    l(p);
    for (int fi = 1, i, vu_sx, ll_ma; fi <= p; ++fi) {
        l(i);
        if (i == 1) {
            l(vu_sx); l(ll_ma);
            zb(vu_sx, ll_ma);
            zb(ll_ma, vu_sx);
        } else if (i == 2) {
            l(vu_sx); l(ll_ma);
            bz_ms(vu_sx, ll_ma);
            bz_ms(ll_ma, vu_sx);
        } else {
            printf("%d\n", pib_yt);
        }
    }
}

int main() {
    fpj_zz();
    return 0;
}
