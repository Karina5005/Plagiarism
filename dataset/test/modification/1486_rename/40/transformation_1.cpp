#include <bits/stdc++.h>
using namespace std;
 
void o_but() {
    int auo_dy;
    cin >> auo_dy;
    vector<int> g(auo_dy);
    for (auto &h : g) cin >> h;
    long long gaz_qdk = 0, fl = 0;
    for (int pnu_al = 0; pnu_al < auo_dy; ++pnu_al) {
        fl += pnu_al;
        gaz_qdk += g[pnu_al];
        if (gaz_qdk < fl) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    int xo;
    cin >> xo;
    while (xo--) o_but();
    return 0;
}