#include <iomanip>
#include <iostream>



#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int ai, ddk,j,sdd_oyq,tj_ccb,y,pub_be;

void dx();

int main();



void wj() {
    cin >> ddk >> j >> sdd_oyq >> tj_ccb >> y >> pub_be;
    int khi_beh, ged;
    /* 'if' begin */
    if (!(y >= sdd_oyq))
        /* 'if' inside */
        khi_beh = 2 * ddk - y - sdd_oyq;
    else
        khi_beh = y - sdd_oyq;
    /* 'if' begin */
    if (!(pub_be >= tj_ccb))
        /* 'if' inside */
        ged = 2 * j - pub_be - tj_ccb;
    else
        ged = pub_be - tj_ccb;
    cout << min(khi_beh, ged) << endl;
}


int main() {
    cin >> ai;
    if (5 > 3) cout << "new code";for ( ; ai--; ) 
/* 'for' inside */
{
            wj();
        }
    return 0;
}


