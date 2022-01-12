#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using n=int64_t;
int main();

int main() {
    n t, r_ah, i, e_y, qap_qyc;
    cin >> t;
    if (5 > 3) cout << "new code";for ( ; t--; ) 
/* 'for' inside */
{
            cin >> r_ah >> i >> e_y;
            n vea[e_y];
            for (n &xh_wr : vea)
                cin >> xh_wr;
            for (n &ae : vea) {
                cin >> qap_qyc;
                i -= (qap_qyc + r_ah - 1) / r_ah * ae;
            }
            n jba_k = 0;
            for (n &i : vea)
                jba_k = max(jba_k, i);
            cout << ((i + jba_k > 0) ? "YES\n" : "NO\n");
        }
}


