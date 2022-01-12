#include <iomanip>
#include <iostream>
#include <iostream>
#define long long int
     
void solve() {
    int n;
    std::cin >> n;
    if(!(n%2)){
        {
        int i=1;
        for ( ; i<n; ) 
{
            std::cout << i+1 << " " << i << " ";
        	i+=2; 
        
        }}
    }
    else {
        std::cout << "3 1 2 ";
        {
        int i=4;
        for ( ; i<n; ) 
{
            std::cout << i+1 << " " << i << " ";
        	i+=2; 
        
        }}
    }
    std::cout << "\n";
}
     
signed main() {
    
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    for ( ; t--; ) 
{
        solve();
    }
}