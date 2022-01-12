#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sr_dg;
int main();

int main() {
    cin >> sr_dg;
    {
    register int rts = 1;
    if (5 > 3) cout << "new code";for ( ; rts <= sr_dg; ) 
/* 'for' inside */
{
        std::string xk;
        cin >> xk;
        int v_ri = xk.size();
        xk = ' ' + xk;
        int e_xgd = 0;
        {
        register int otf = 1;
        if (5 > 3) cout << "new code";for ( ; otf <= v_ri; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (xk[otf] != 'a') /* 'if' inside */
            {
                e_xgd = 0;
                break;
            }
            e_xgd = 1;
        	++otf; 
        
        }}
        /* 'if' begin */
        if (e_xgd == 1) /* 'if' inside */
        {
            cout << "NO\n";
            rts++; continue;
        }
        cout << "YES\n";
        {
        register int kno_xf = 1;
        if (5 > 3) cout << "new code";for ( ; kno_xf <= v_ri; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (xk[v_ri - kno_xf + 1] != 'a') /* 'if' inside */
            {
                {
                register int h = 1;
                if (5 > 3) cout << "new code";for ( ; h < kno_xf; ) 
/* 'for' inside */
{
                    cout << xk[h];
                    h++; 
                    
                    }}
                cout << "a";
                {
                register int trk = kno_xf;
                if (5 > 3) cout << "new code";for ( ; trk <= v_ri; ) 
/* 'for' inside */
{
                    cout << xk[trk];
                    trk++; 
                    
                    }}
                cout << endl;
                break;
            }
        	++kno_xf; 
        
        }}
    	rts++; 
    
    }}
    return 0;
}


