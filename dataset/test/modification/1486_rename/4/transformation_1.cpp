#include <bits/stdc++.h>
using namespace std;
 
void ai() {
    int ddk;
    cin >> ddk;
    vector<int> j(ddk);
    for (auto &sdd_oyq : j) cin >> sdd_oyq;
    long long tj_ccb = 0, y = 0;
    for (int pub_be = 0; pub_be < ddk; ++pub_be) {
        y += pub_be;
        tj_ccb += j[pub_be];
        if (tj_ccb < y) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    int dx;
    cin >> dx;
    while (dx--) ai();
    return 0;
}