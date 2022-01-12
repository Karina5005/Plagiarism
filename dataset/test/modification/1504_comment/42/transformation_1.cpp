#include <iostream>
using namespace std;

bool check(string s) {
    for (int i = 0; i < (s.size() >> 1); i++) /* 'for' inside */
    /* 'if' begin */
    if (s[i] != s[s.size() - i - 1]) /* 'if' inside */
    return false;
    return true;    
}

void solve() {
    string s;
    cin >> s;
    /* 'if' begin */
    if (s == string(s.size(), 'a')) /* 'if' inside */
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    /* 'if' begin */
    if (!check('a' + s)) /* 'if' inside */
    cout << 'a' << s << endl;
    else cout << s << 'a' << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
