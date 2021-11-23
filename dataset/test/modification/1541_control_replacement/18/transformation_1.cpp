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
    {
    int i = 0;
    while (i < n) {
    a[i] = i + 1;
    i++; 
    
    }}
    {
    int i = 0;
    while (i < n - 1) {
    swap(a[i], a[i + 1]);
    i += 2; 
    
    }}
    if (n & 1) swap(a[n - 1], a[n - 2]);
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
