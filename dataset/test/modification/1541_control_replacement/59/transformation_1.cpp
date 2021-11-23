#include <iostream>
#define long long int
     
void solve() {
    int n;
    std::cin >> n;
    if(!(n%2)){
        {
        int i=1;
        while (i<n) {
            std::cout << i+1 << " " << i << " ";
        	i+=2; 
        
        }}
    }
    else {
        std::cout << "3 1 2 ";
        {
        int i=4;
        while (i<n) {
            std::cout << i+1 << " " << i << " ";
        	i+=2; 
        
        }}
    }
    std::cout << "\n";
}
     
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    while(t--){
        solve();
    }
}