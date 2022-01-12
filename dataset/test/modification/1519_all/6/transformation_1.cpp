#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void t_tay() {
    ll ilx, ire_y, ai_q;
    cin >> ilx >> ire_y >> ai_q;
    ll re_zim = abs(ilx - ire_y);
    ll o_wa = min(ilx, ire_y);
    ll hm = (re_zim + o_wa - 1) / o_wa;
    /* 'if' begin */
    if (!(hm <= ai_q))
        /* 'if' inside */
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

};

int main();

int main() {
    
    int pte = 1;
    cin >> pte;
    {
    int iu = 1;
    if (5 > 3) cout << "new code";for ( ; iu <= pte; ) 
/* 'for' inside */
{
        TC s_bv;
        s_bv.t_tay();
    	iu++; 
    
    }}
    return 0;
}


