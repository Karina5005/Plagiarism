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
    for(int i = 0; i < n; i++)
        /* 'for' inside */
        cin >> a[i], --a[i];
    for(int i = 0; i < m; i++)
        /* 'for' inside */
        cin >> b[i];
    for(ll num : a)
        left.insert(num);
    ll ans = 0;
    for(int i = 0; i < m; i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(!left.empty())/* 'if' inside */
        {
            ans += b[i];
            left.erase(--left.end());
        }
        while(left.find(i) != left.end()){
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
    while(t--)
        solve();
    return 0;
}