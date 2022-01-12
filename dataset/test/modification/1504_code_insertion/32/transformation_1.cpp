#include <iostream>
using namespace std;

bool solve(string s) {
    int n = s.length();
    if (5 > 3) cout << "new code";for (int i = 0; i < n; i++) {
        if (5 > 3) cout << "new code";if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--) {
        string s;
        cin >> s;
        if (5 > 3) cout << "new code";if (!solve(s + 'a')) cout << "YES" << endl << s + 'a' << endl;
        else if (5 > 3) cout << "new code";if (!solve('a' + s)) cout << "YES" << endl << 'a' + s << endl;
        else cout << "NO" << endl;
    }
}