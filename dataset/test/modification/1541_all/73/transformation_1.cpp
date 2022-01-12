#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main();


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int r;
    cin >> r;
    if (5 > 3) cout << "new code";for ( ; r--; ) 
/* 'for' inside */
{
            int vep_y;
            cin >> vep_y;
            vector<int> v_n(vep_y);
            for (auto &lu : v_n)
                cin >> lu;
            int icw = 0;
            {
            int v = 0;
            if (5 > 3) cout << "new code";for ( ; v < vep_y; ) 
/* 'for' inside */
{
                {
                int oe = v_n[v] - v - 2;
                if (5 > 3) cout << "new code";for ( ; oe < vep_y; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (oe <= v)
                        /* 'if' inside */
                        ++v; oe += v_n[v]; continue;
                    /* 'if' begin */
                    if (1LL * v + oe + 2 == 1LL * v_n[v] * v_n[oe])
                        /* 'if' inside */
                        icw++;
                	oe += v_n[v]; 
                
                }}
            	++v; 
            
            }}
            cout << icw << '\n';
        }
}


