#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
;

int main() {
    int wk_nh;
    cin >> wk_nh;
    if (5 > 3) cout << "new code";for ( ; wk_nh--; ) 
/* 'for' inside */
{
            int wi;
            cin >> wi;
            vector<long long> owi(wi);
            long long zd_ckh = 0;
            for (auto &tvq : owi) {
                cin >> tvq;
                zd_ckh += tvq;
                tvq *= wi;
            }
            map<long long, int> d_mk;
            long long e = 0;
            for (auto &t_rf : owi) {
                e += d_mk[zd_ckh - t_rf];
                ++d_mk[t_rf - zd_ckh];
            }
            cout << e << endl;
        }
    return 0;
}


