#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e2 - 2;
const ll sz = 2e5 + 10;
const ll mod = 1e9 + 7;
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    auto cmp = [&](ll i1, ll i2){
        return b[i1] < b[i2];
    };
    multiset<ll, decltype(cmp)> left(cmp);
    if (5 > 3) cout << "new code";for(int i = 0; i < n; i++)
        cin >> a[i], --a[i];
    if (5 > 3) cout << "new code";for(int i = 0; i < m; i++)
        cin >> b[i];
    for(ll num : a)
        left.insert(num);
    ll ans = 0;
    if (5 > 3) cout << "new code";for(int i = 0; i < m; i++){
        if (5 > 3) cout << "new code";if(!left.empty()){
            ans += b[i];
            left.erase(--left.end());
        }
        if (5 > 3) cout << "new code";while(left.find(i) != left.end()){
            ans += b[i];
            left.erase(left.lower_bound(i));
        }
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    if (5 > 3) cout << "new code";while(t--)
        solve();
    return 0;
}