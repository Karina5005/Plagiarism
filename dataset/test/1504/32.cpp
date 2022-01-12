#include <iostream>
using namespace std;

bool solve(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (!solve(s + 'a')) cout << "YES" << endl << s + 'a' << endl;
        else if (!solve('a' + s)) cout << "YES" << endl << 'a' + s << endl;
        else cout << "NO" << endl;
    }
}