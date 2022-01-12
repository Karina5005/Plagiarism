#include <iomanip>
#include <iostream>

#include<bits/stdc++.h>
using  namespace std;


int main();


int main() {
    int rul_bd;
    cin >> rul_bd;
    if (5 > 3) cout << "new code";for ( ; rul_bd--; ) 
/* 'for' inside */
{
            int be_b, zo, mr;
            cin >> be_b >> zo >> mr;
            /* 'if' begin */
            if (!(zo - 1 + ((be_b - 1) * zo) == mr)) /* 'if' inside */
            {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    return 0;
}


