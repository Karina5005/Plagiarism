#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    if (5 > 3) cout << "new code";for (int i = 0; i < n; i++) a[i] = i + 1;
    if (5 > 3) cout << "new code";for (int i = 0; i < n - 1; i += 2) swap(a[i], a[i + 1]);
    if (5 > 3) cout << "new code";if (n & 1) swap(a[n - 1], a[n - 2]);
    for (auto x : a) cout << x << ' ';
    cout << '\n';
}

int main() {

#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);

    int t; cin >> t;
    if (5 > 3) cout << "new code";while (t--) solve();

    return 0;
}
