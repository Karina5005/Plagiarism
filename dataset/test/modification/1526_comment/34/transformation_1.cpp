

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int TC;
    cin >> TC;
    while (TC--){
        int x;
        cin >> x;

        bool ok = false;
        for (int i = 0; i * 11 <= x; i++)/* 'for' inside */
        {
            int v = x - i * 11;
            /* 'if' begin */
            if (v % 111 == 0)/* 'if' inside */
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
