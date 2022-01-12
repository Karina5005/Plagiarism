#include <bits/stdc++.h>

using namespace std;
typedef long long l;

l ai;
char ddk[100];

int main() {
    cin >> ai;
    scanf("\n");
    for (l j = 1; j <= ai; ++j) {
        cin >> ddk;
        l sdd_oyq = 0;
        for (l tj_ccb = 0; tj_ccb < strlen(ddk); ++tj_ccb) {
            if (ddk[tj_ccb] == 'N') {
                ++sdd_oyq;
            }
        }
        if (sdd_oyq == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
