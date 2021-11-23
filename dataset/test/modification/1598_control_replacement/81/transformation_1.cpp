#include <iomanip>
#include <iostream>
#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    
    for ( ; t--; ) 
{
        
        int n; cin >> n;
        
        string a, b; cin >> a >> b;
        
        bool x = true;
        {
        int i = 0;
        for ( ; i < n; ) 
{
            if (a[i] == '1' && b[i] == '1') {
                x = false;
                break;
            }
        	i++; 
        
        }}
        
        cout << (x ? "YES" : "NO") << "\n";
    }

}