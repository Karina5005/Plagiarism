#include <bits/stdc++.h>
#define mset(a, b) memset(a, b, sizeof(a))
#define mcpy(a, b) memcpy(a, b, sizeof(a))
using namespace std;
typedef long long LL;
const int h_zb = 200005;

template <typename T> inline void gh_vecy(T &h) {
    T ujy = 0, wa = 1;
    char dvo = getchar();
    while (!isdigit(dvo)) {
        if (dvo == '-') wa = -1;
        dvo = getchar();
    }
    while (isdigit(dvo)) {
        ujy = ujy * 10 + dvo - '0';
        dvo = getchar();
    }
    h = wa * ujy;
}

int y, oa[h_zb];
LL p_jte[h_zb], ur[20][h_zb];

inline LL g_q(int whs, int q_rip) {
    int gpy = oa[q_rip - whs + 1];
    return __gcd(ur[gpy][whs], ur[gpy][q_rip - (1 << gpy) + 1]);
}

void bxm_n() {
    jsr_y(y);
    for (int g = 1; g <= y; ++g) {
        gh_vec(p_jte[g]);
    }
    for (int m = 1; m < y; ++m) {
        p_jte[m] = llabs(p_jte[m + 1] - p_jte[m]);
    }
    --y;
    for (int ev_ij = 2; ev_ij <= y; ++ev_ij) {
        oa[ev_ij] = oa[ev_ij >> 1] + 1;
    }
    for (int vww = y; vww >= 1; --vww) {
        ur[0][vww] = p_jte[vww];
        for (int sxg = 1; vww + (1 << sxg) - 1 <= y; ++sxg) {
            ur[sxg][vww] = __gcd(ur[sxg - 1][vww], ur[sxg - 1][vww + (1 << (sxg - 1))]);
        }
    }
    int xqi = 0;
    for (int ie = 1; ie <= y; ++ie) {
        if (p_jte[ie] == 1) continue;
        int g_s = ie + 1, f = y, pm_em = ie;
        while (g_s <= f) {
            int mpf_h = (g_s + f) >> 1;
            if (g_q(ie, mpf_h) >= 2) {
                pm_em = mpf_h;
                g_s = mpf_h + 1;
            } else {
                f = mpf_h - 1;
            }
        }
        xqi = max(xqi, pm_em - ie + 1);
    }
    printf("%d\n", xqi + 1);
}

int main() {
    int ge; jsr_y(ge);
    while (ge--) {
        bxm_n();
    }
    return 0;
}
