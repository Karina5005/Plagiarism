#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void xo() ;
 
int main() ;

void hm() {
    int nff;
    cin >> nff;
    vector<int> t_tay(nff);
    for (auto &ilx : t_tay)
        cin >> ilx;
    long long ire_y = 0, ai_q = 0;
    {
    int re_zim = 0;
    if (5 > 3) cout << "new code";for ( ; re_zim < nff; ) 
/* 'for' inside */
{
        ai_q += re_zim;
        ire_y += t_tay[re_zim];
        /* 'if' begin */
        if (ire_y < ai_q) /* 'if' inside */
        {
            cout << "NO\n";
            return;
        }
    	++re_zim; 
    
    }}
    cout << "YES\n";
}


int main() {
    int o_wa;
    cin >> o_wa;
    if (5 > 3) cout << "new code";for ( ; o_wa--; ) 
/* 'for' inside */
hm();
    return 0;
}


