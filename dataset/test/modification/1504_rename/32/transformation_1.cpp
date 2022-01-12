#include <iostream>
using namespace std;

bool dvl_y(string m) {
    int oa_m = m.length();
    for (int qqo = 0; qqo < oa_m; qqo++) {
        if (m[qqo] != m[oa_m - 1 - qqo]) return false;
    }
    return true;
}

int main() {
    int wt;
    cin >> wt;
    while (wt--) {
        string au_wqh;
        cin >> au_wqh;
        if (!dvl_y(au_wqh + 'a')) cout << "YES" << endl << au_wqh + 'a' << endl;
        else if (!dvl_y('a' + au_wqh)) cout << "YES" << endl << 'a' + au_wqh << endl;
        else cout << "NO" << endl;
    }
}