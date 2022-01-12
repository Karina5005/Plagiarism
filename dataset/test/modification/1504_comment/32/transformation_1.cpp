#include <iostream>
using namespace std;

bool solve(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if (s[i] != s[n - 1 - i]) /* 'if' inside */
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        /* 'if' begin */
        if (!solve(s + 'a')) /* 'if' inside */
        cout << "YES" << endl << s + 'a' << endl;
        else /* 'if' begin */
        if (!solve('a' + s)) /* 'if' inside */
        cout << "YES" << endl << 'a' + s << endl;
        else cout << "NO" << endl;
    }
}