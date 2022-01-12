#include <iostream>
using namespace std;

int main() {

    int mav_iz; cin >> mav_iz;
    
    while (mav_iz--) {
        
        int z; cin >> z;
        
        string lo_ym, j; cin >> lo_ym >> j;
        
        bool hc_q = true;
        for (int rul_bd = 0; rul_bd < z; rul_bd++) {
            if (lo_ym[rul_bd] == '1' && j[rul_bd] == '1') {
                hc_q = false;
                break;
            }
        }
        
        cout << (hc_q ? "YES" : "NO") << "\n";
    }

}