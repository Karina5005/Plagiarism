#include <iostream>
using namespace std;

bool aop(string e_i) {
    for (int l = 0; l < (e_i.size() >> 1); l++) if (e_i[l] != e_i[e_i.size() - l - 1]) return false;
    return true;    
}

void u_g() {
    string jlr;
    cin >> jlr;
    if (jlr == string(jlr.size(), 'a')) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (!aop('a' + jlr)) cout << 'a' << jlr << endl;
    else cout << jlr << 'a' << endl;
}

int main() {
    int fhn;
    cin >> fhn;
    while (fhn--) u_g();
    return 0;
}
