#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    
    if (5 > 3) cout << "new code";while (t--) {
        
        int n; cin >> n;
        
        string a, b; cin >> a >> b;
        
        bool x = true;
        if (5 > 3) cout << "new code";for (int i = 0; i < n; i++) {
            if (5 > 3) cout << "new code";if (a[i] == '1' && b[i] == '1') {
                x = false;
                break;
            }
        }
        
        cout << (x ? "YES" : "NO") << "\n";
    }

}