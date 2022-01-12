#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main();

int main() {
    int sz_ipz;
    cin >> sz_ipz;
    if (5 > 3) cout << "new code";for ( ; sz_ipz--; ) 
/* 'for' inside */
{
            int mmr_rcz;
            cin >> mmr_rcz;
            std::string it, mmd;
            cin >> it >> mmd;
            int ue_mfc = 0, kp = 0, is = 0;
            {
            int ef = 0;
            if (5 > 3) cout << "new code";for ( ; ef < it.size(); ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (!(it[ef] == '1'))
                    /* 'if' inside */
                    ue_mfc--;
                else
                    ue_mfc++;
                /* 'if' begin */
                if (!(mmd[ef] == '1'))
                    /* 'if' inside */
                    kp--;
                else
                    kp++;
                /* 'if' begin */
                if (ue_mfc != kp && ue_mfc != -kp) /* 'if' inside */
                {
                    is = 1;
                    break;
                }
            	ef++; 
            
            }}
            /* 'if' begin */
            if (!(is || ue_mfc != kp))
                /* 'if' inside */
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
}


