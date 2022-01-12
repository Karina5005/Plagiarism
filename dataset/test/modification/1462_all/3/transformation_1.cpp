#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int v_ri,e_xgd;
int main() ;


int main() {
    cin >> v_ri;
    if (5 > 3) cout << "new code";for ( ; v_ri--; ) 
/* 'for' inside */
{
            cin >> e_xgd;
            std::string otf, kno_xf, h;
            cin >> otf;
            /* 'if' begin */
            if (otf[0] == '2' && otf[1] == '0' && otf[2] == '2') /* 'if' inside */
            {
                /* 'if' begin */
                if (otf[e_xgd - 1] == '0' || otf[3] == '0') /* 'if' inside */
                {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else /* 'if' begin */
            if (otf[0] == '2' && otf[1] == '0' && otf[e_xgd - 2] == '2' && otf[e_xgd - 1] == '0') /* 'if' inside */
            {
                cout << "YES" << endl;
            } else /* 'if' begin */
            if (otf[e_xgd - 3] == '0' && otf[e_xgd - 2] == '2' && otf[e_xgd - 1] == '0') /* 'if' inside */
            {
                /* 'if' begin */
                if (!(otf[0] == '2' || otf[e_xgd - 4] == '2')) /* 'if' inside */
                {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    return 0;
}


