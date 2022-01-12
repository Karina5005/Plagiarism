#include <iostream>
using namespace std;

bool check(string s) {
    {
    int i = 0;
    while (i < (s.size() >> 1)) {
    if (s[i] != s[s.size() - i - 1]) return false;
    i++; 
    
    }}
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
    if (!(!check('a' + s))) cout << s << 'a' << endl;
    else cout << 'a' << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
