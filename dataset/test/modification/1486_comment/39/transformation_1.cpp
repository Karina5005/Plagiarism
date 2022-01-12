
#include <bits/stdc++.h>

#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


ll a[105];

void solve() {
    int n, pos{1};
    ll s1{0}, s2{0};
    cin >> n;
    for (int i = 0; i < n; ++i) /* 'for' inside */
    cin >> a[i];
    for (int i = 0; i < n; ++i) /* 'for' inside */
    {
        s1 += a[i];
        s2 += i;
        pos &= (s1 >= s2);
    }
    cout << (pos ? "YES\n" : "NO\n");
}

int main() {
    FAST
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}