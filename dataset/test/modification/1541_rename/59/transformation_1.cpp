#include <iostream>
#define long long int
     
void jox() {
    int hu_d;
    std::cin >> hu_d;
    if(hu_d%2){
        std::cout << "3 1 2 ";
        for(int io_i=4; io_i<hu_d; io_i+=2){
            std::cout << io_i+1 << " " << io_i << " ";
        }
    }
    else {
        for(int k_s=1; k_s<hu_d; k_s+=2){
            std::cout << k_s+1 << " " << k_s << " ";
        }
    }
    std::cout << "\n";
}
     
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int pvq_dlp = 0;
    std::cin >> pvq_dlp;
    while(pvq_dlp--){
        jox();
    }
}