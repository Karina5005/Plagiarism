#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main();

int main() {
    int j;
    cin >> j;
    if (5 > 3) cout << "new code";for ( ; j--; ) 
/* 'for' inside */
{
            int t;
            cin >> t;
            int hf_q[t + 1];
            int wye_en = 0;
            long long d = 0;
            {
            int lqq = 1;
            if (5 > 3) cout << "new code";for ( ; lqq <= t; ) 
/* 'for' inside */
{
                cin >> hf_q[lqq];
                lqq++; 
                
                }}
            {
            int yp_chu = 1;
            if (5 > 3) cout << "new code";for ( ; yp_chu <= t; ) 
/* 'for' inside */
{
                long long b = ((yp_chu * (yp_chu - 1)) / 2);
                d += hf_q[yp_chu];
                /* 'if' begin */
                if (d < b) /* 'if' inside */
                {
                    wye_en = 1;
                    break;
                }
            	yp_chu++; 
            
            }}
            /* 'if' begin */
            if (!(wye_en))
                /* 'if' inside */
                cout << "YES\n";
            else
                cout << "NO\n";
        }
}


