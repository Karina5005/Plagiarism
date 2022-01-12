#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int64_t a_xpe,iqo_dmo;
int zya,y;
int main() ;

int main() {
    
    cin.tie(0);
    cout.tie(0);
    cin >> y;
    if (5 > 3) cout << "new code";for ( ; y--; ) 
/* 'for' inside */
{
            cin >> a_xpe >> iqo_dmo >> zya;
            vector<int> h_qiv(zya);
            for (int &uva : h_qiv)
                cin >> uva;
            for (int at : h_qiv) {
                int pq;
                cin >> pq;
                iqo_dmo -= (pq + a_xpe - 1) / a_xpe * at;
            }
            cout << (iqo_dmo + * max_element(h_qiv.begin(), h_qiv.end()) > 0 ? "YES\n" : "NO\n");
        }
}


