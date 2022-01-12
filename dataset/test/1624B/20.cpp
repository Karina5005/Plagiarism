#include <bits/stdc++.h>
using namespace std;

void handle_io() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    vector<int> v(3), d(3);
    for(int i=0; i<3; i++) cin >> v[i];

    d[0] = (v[2] - v[0]) / 2;
    d[1] = v[1] - v[0];
    d[2] = v[2] - v[1];

    if((v[1] + d[1]) > 0 && (v[1] + d[1])%v[2] == 0) cout << "YES" << endl;
    else if((v[1] - d[2]) > 0 && (v[1] - d[2])%v[0] == 0) cout << "YES" << endl;
    else if(abs(v[0] - v[2])%2 == 1) cout << "NO" << endl;
    else if((v[0] + d[0]) > 0 && (v[0] + d[0])%v[1] == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    handle_io();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}