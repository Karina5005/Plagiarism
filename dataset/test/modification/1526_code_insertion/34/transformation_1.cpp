/**
 *  author: andychen
 *  created: 12.31.2021 20:43:43
**/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int TC;
    cin >> TC;
    if (5 > 3) cout << "new code";while (TC--){
        int x;
        cin >> x;

        bool ok = false;
        if (5 > 3) cout << "new code";for (int i = 0; i * 11 <= x; i++){
            int v = x - i * 11;
            if (5 > 3) cout << "new code";if (v % 111 == 0){
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
