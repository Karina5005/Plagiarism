#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    
    while (t--) {
        
        int n; cin >> n;
        
        string a, b; cin >> a >> b;
        
        bool x = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1' && b[i] == '1') {
                x = false;
                break;
            }
        }
        
        cout << (x ? "YES" : "NO") << "\n";
    }

}