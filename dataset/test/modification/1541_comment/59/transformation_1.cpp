#include <iostream>
#define long long int
     
void solve() {
    int n;
    std::cin >> n;
    /* 'if' begin */
    if(n%2)/* 'if' inside */
    {
        std::cout << "3 1 2 ";
        for(int i=4; i<n; i+=2)/* 'for' inside */
        {
            std::cout << i+1 << " " << i << " ";
        }
    }
    else {
        for(int i=1; i<n; i+=2)/* 'for' inside */
        {
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
    while(t--){
        solve();
    }
}