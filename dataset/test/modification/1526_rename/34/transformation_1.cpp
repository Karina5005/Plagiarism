/**
 *  author: andychen
 *  created: 12.31.2021 20:43:43
**/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int sdd_oyq;
    cin >> sdd_oyq;
    while (sdd_oyq--){
        int tj_ccb;
        cin >> tj_ccb;

        bool y = false;
        for (int pub_be = 0; pub_be * 11 <= tj_ccb; pub_be++){
            int dx = tj_ccb - pub_be * 11;
            if (dx % 111 == 0){
                y = true;
                break;
            }
        }

        cout << (y ? "YES\n" : "NO\n");
    }

    return 0;
}
