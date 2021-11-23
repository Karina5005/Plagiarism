#include<bits/stdc++.h>
using namespace std;
const int nax = 2e5 + 10;
using ll = int64_t;
int n;
ll a[nax];

void solve() {

    cin >> n;
    {
    int i = 1 ;
    while (i <= n) {
        cin >> a[i];
    	++ i; 
    
    }}
    if (n == 1) {
        cout << "1\n";
        return;
    }
    {
    int i = 1 ;
    while (i < n) {
        a[i] = abs(a[i + 1] - a[i]);
    	++ i; 
    
    }}
    n -= 1;

  /*  for (int i = 1 ; i <= n ; ++ i) {
        cout << a[i] << ' ';
    }
    cout << '\n';*/
    int x = 1;
    ll cur = a[x];
    while (x <= n && cur > 1) {
        cur = gcd(cur, a[++ x]);
    }
    vector <ll> suf;
    cur = a[x - 1];
    {
    int i = x - 1 ;
    while (i >= 1) {
        cur = gcd(cur, a[i]);
        suf.push_back(cur);
    	-- i; 
    
    }}
    int ans = x;
    {
    int j = x ;
    while (j <= n) {
        cur = a[j];
        int start = j;
        while (j <= n && cur > 1) {
            cur = gcd(cur, a[j]);
            if (cur == 1) break;
            while (!suf.empty() && gcd(suf.back(), cur) == 1)
                suf.pop_back();
            ans = max(ans, int(suf.size()) + j - start + 1 + 1);
            j++;
        }
        suf.clear();
        cur = 0;
        if (j == start) j += 1;
        {
        int i = j - 1 ;
        while (i >= start) {
            cur = gcd(cur, a[i]);
            suf.push_back(cur);
        	-- i; 
        
        }}

    }
    cout << ans << '\n';

}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;

    {
    cin >> T;
    while (T --) {
        solve();
    }
}

/***
1
5
1 5 2 4 6
*/
