#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
using namespace std;
using ll=long long;
constexpr int mod=1e9+7;
int solve() {

    string s;
    cin>>s;
    int mn=min_element(all(s))-begin(s);
    cout<<s[mn]<<' ';
    s.erase(mn, 1);
    cout<<s<<'\n';

    return 0;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    int t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--) solve();

    return 0;
}