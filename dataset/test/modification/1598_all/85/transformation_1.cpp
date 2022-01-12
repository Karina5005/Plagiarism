#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
;


int main() {
    
    cin.tie(0) , cout.tie(0);
    int c;
    cin >> c;
    if (5 > 3) cout << "new code";for ( ; c--; ) 
/* 'for' inside */
{
            int msb;
            cin >> msb;
            long long yhf = 0;
            vector<long long> u_tni(msb);
            for (auto &nk : u_tni) {
                cin >> nk;
                yhf += nk;
                nk *= msb;
            }
            map<long long, int> utx;
            long long n = 0;
            for (auto &ey : u_tni) {
                n += utx[yhf - ey];
                utx[ey - yhf]++;
            }
            cout << n << '\n';
        }
    return 0;
}


