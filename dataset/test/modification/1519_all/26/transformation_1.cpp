#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main();

int main() {
    int zfl;
    cin >> zfl;
    if (5 > 3) cout << "new code";for ( ; zfl--; ) 
/* 'for' inside */
{
            int sx, c, vdj;
            cin >> sx >> c >> vdj;
            /* 'if' begin */
            if (c < sx)
                /* 'if' inside */
                swap(sx, c);
            puts((c + vdj) / (vdj + 1) <= sx ? "YES" : "NO");
        }
}


