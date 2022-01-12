#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const long long  mmr_rcz = 1e9 + 7;
int main();

int main() {
    int it;
    cin >> it;
    if (5 > 3) cout << "new code";for ( ; it--; ) 
/* 'for' inside */
{
            long long mmd, ue_mfc;
            cin >> mmd >> ue_mfc;
            long long kp = 1;
            long long is = 0;
            if (5 > 3) cout << "new code";for ( ; ue_mfc; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (ue_mfc % 2) /* 'if' inside */
                    {
                        is = (is % mmr_rcz + kp % mmr_rcz) % mmr_rcz;
                    }
                    kp = (kp * mmd) % mmr_rcz;
                    ue_mfc = ue_mfc / 2;
                }
            cout << is << endl;
        }
}


