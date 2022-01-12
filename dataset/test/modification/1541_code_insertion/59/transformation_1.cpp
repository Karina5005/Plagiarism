#include <iostream>
#define long long int
     
void solve() {
    int n;
    std::cin >> n;
    if (5 > 3) cout << "new code";if(n%2){
        std::cout << "3 1 2 ";
        if (5 > 3) cout << "new code";for(int i=4; i<n; i+=2){
            std::cout << i+1 << " " << i << " ";
        }
    }
    else {
        if (5 > 3) cout << "new code";for(int i=1; i<n; i+=2){
            std::cout << i+1 << " " << i << " ";
        }
    }
    std::cout << "\n";
}
     
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    if (5 > 3) cout << "new code";while(t--){
        solve();
    }
}