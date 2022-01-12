#include <iostream>
using namespace std;

bool check(string s) {
    for (int i = 0; i < (s.size() >> 1); i++) if (s[i] != s[s.size() - i - 1]) return false;
    return true;    
}

void solve() {
    string s;
    cin >> s;
    if (s == string(s.size(), 'a')) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (!check('a' + s)) cout << 'a' << s << endl;
    else cout << s << 'a' << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
