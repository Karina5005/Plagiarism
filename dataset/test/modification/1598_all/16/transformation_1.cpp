#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
;

int main() {
    int aop;
    cin >> aop;
    if (5 > 3) cout << "new code";for ( ; aop--; ) 
/* 'for' inside */
{
            int e_i;
            cin >> e_i;
            vector<long long> l(e_i);
            long long u_g = 0;
            for (auto &jlr : l) {
                cin >> jlr;
                u_g += jlr;
                jlr *= e_i;
            }
            long long fhn = 0;
            map<long long, int> j;
            for (auto &zn_m : l) {
                fhn += j[u_g - zn_m];
                j[zn_m - u_g]++;
            }
            cout << fhn << endl;
        }
    return 0;
}


