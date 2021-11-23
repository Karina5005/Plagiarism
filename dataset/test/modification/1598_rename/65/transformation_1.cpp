/*
	Author: Karan Mandal
*/

#include <bits/stdc++.h>

using namespace std;
int exa[200000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int b;
    cin >> b;

    while (b-- > 0) {
        int ha;
        cin >> ha;

        long long y_nhr = 0;
        map<int, int> qjv_yrm;

        for (int lvi = 0; lvi < ha; lvi++) {
            cin >> exa[lvi];
            y_nhr += exa[lvi];

            qjv_yrm[exa[lvi]] += 1;
        }

        if ((2 * y_nhr) % ha != 0) {
            cout << 0 << "\n";
            continue;
        }

        long long dn_bpv = (y_nhr * 2) / ha;
        y_nhr = 0;
        for (int hi_rca = 0; hi_rca < ha; hi_rca++) {
            int g_a = exa[hi_rca], z_mbc = dn_bpv - exa[hi_rca];

            if (qjv_yrm.count(z_mbc))
                y_nhr += qjv_yrm[z_mbc];

            if (g_a == z_mbc)
                y_nhr -= 1;
        }

        cout << (y_nhr / 2) << "\n";
    }

    return 0;
}