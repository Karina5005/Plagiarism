#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
;

int main() {
    int fa;
    cin >> fa;
    if (5 > 3) cout << "new code";for ( ; fa--; ) 
/* 'for' inside */
{
            int hcm_guu;
            cin >> hcm_guu;
            vector<long long> cg(hcm_guu);
            long long kjy_t = 0;
            for (auto &b_ipv : cg) {
                cin >> b_ipv;
                kjy_t += b_ipv;
                b_ipv *= hcm_guu;
            }
            long long xc_cg = 0;
            map<long long, int> i_i;
            for (auto &i_ej : cg) {
                xc_cg += i_i[kjy_t - i_ej];
                i_i[i_ej - kjy_t]++;
            }
            cout << xc_cg << endl;
        }
    return 0;
}


