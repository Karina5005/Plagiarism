#include <iostream>
using namespace std;

int main() {

    int hu_d; cin >> hu_d;
    
    while (hu_d--) {
        
        int io_i; cin >> io_i;
        
        string k_s, pvq_dlp; cin >> k_s >> pvq_dlp;
        
        bool i_r = true;
        for (int av = 0; av < io_i; av++) {
            if (k_s[av] == '1' && pvq_dlp[av] == '1') {
                i_r = false;
                break;
            }
        }
        
        cout << (i_r ? "YES" : "NO") << "\n";
    }

}