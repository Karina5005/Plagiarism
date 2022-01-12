#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    bool f = 0;
    if((a + c) % 2 == 0 && ((a + c) >> 1) % b == 0) f = 1;
    if( (2 * b - c) % a == 0 && (2 * b - c) > 0) f = 1;
    if( (2 * b - a) % c == 0 && (2 * b - a) > 0) f = 1;
    cout << ((f) ? "YES" : "NO") << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T --) {
        solve();
    }
    return 0;
}