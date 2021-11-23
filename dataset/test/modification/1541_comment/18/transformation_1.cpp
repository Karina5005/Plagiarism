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
    for (int i = 0; i < n; i++) /* 'for' inside */
    a[i] = i + 1;
    for (int i = 0; i < n - 1; i += 2) /* 'for' inside */
    swap(a[i], a[i + 1]);
    /* 'if' begin */
    if (n & 1) /* 'if' inside */
    swap(a[n - 1], a[n - 2]);
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
    while (t--) solve();

    return 0;
}
