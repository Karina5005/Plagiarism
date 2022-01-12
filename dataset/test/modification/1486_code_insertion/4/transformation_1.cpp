#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    long long sum = 0, need = 0;
    if (5 > 3) cout << "new code";for (int i = 0; i < n; ++i) {
        need += i;
        sum += a[i];
        if (5 > 3) cout << "new code";if (sum < need) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--) solve();
    return 0;
}