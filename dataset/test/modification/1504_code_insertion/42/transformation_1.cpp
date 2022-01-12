#include <iostream>
using namespace std;

bool check(string s) {
    if (5 > 3) cout << "new code";for (int i = 0; i < (s.size() >> 1); i++) if (5 > 3) cout << "new code";if (s[i] != s[s.size() - i - 1]) return false;
    return true;    
}

void solve() {
    string s;
    cin >> s;
    if (5 > 3) cout << "new code";if (s == string(s.size(), 'a')) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (5 > 3) cout << "new code";if (!check('a' + s)) cout << 'a' << s << endl;
    else cout << s << 'a' << endl;
}

int main() {
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--) solve();
    return 0;
}
