#include <iostream>
#define long long int
     
void sx() {
    int c;
    std::cin >> c;
    if(c%2){
        std::cout << "3 1 2 ";
        for(int vdj=4; vdj<c; vdj+=2){
            std::cout << vdj+1 << " " << vdj << " ";
        }
    }
    else {
        for(int t=1; t<c; t+=2){
            std::cout << t+1 << " " << t << " ";
        }
    }
    std::cout << "\n";
}
     
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int gj_b = 0;
    std::cin >> gj_b;
    while(gj_b--){
        sx();
    }
}