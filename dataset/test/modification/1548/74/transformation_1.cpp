#include<bits/stdc++.h>
using namespace std;
const int nax = 2e5 + 10;
using ll = int64_t;
int n;
ll a[nax];

void solve() {

    cin >> n;
    for (int i = 1 ; i <= n ; ++ i) /* 'for' inside */
    {
        cin >> a[i];
    }
    /* 'if' begin */
    if (n == 1) /* 'if' inside */
    {
        cout << "1\n";
        return;
    }
    for (int i = 1 ; i < n ; ++ i) /* 'for' inside */
    {
        a[i] = abs(a[i + 1] - a[i]);
    }
    n -= 1;

  
    int x = 1;
    ll cur = a[x];
    while (x <= n && cur > 1) {
        cur = gcd(cur, a[++ x]);
    }
    vector <ll> suf;
    cur = a[x - 1];
    for (int i = x - 1 ; i >= 1 ; -- i) /* 'for' inside */
    {
        cur = gcd(cur, a[i]);
        suf.push_back(cur);
    }
    int ans = x;
    for (int j = x ; j <= n;) /* 'for' inside */
    {
        cur = a[j];
        int start = j;
        while (j <= n && cur > 1) {
            cur = gcd(cur, a[j]);
            /* 'if' begin */
            if (cur == 1) /* 'if' inside */
            break;
            while (!suf.empty() && gcd(suf.back(), cur) == 1)
                suf.pop_back();
            ans = max(ans, int(suf.size()) + j - start + 1 + 1);
            j++;
        }
        suf.clear();
        cur = 0;
        /* 'if' begin */
        if (j == start) /* 'if' inside */
        j += 1;
        for (int i = j - 1 ; i >= start ; -- i) /* 'for' inside */
        {
            cur = gcd(cur, a[i]);
            suf.push_back(cur);
        }

    }
    cout << ans << '\n';

}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;

    for (cin >> T ; T -- ;) /* 'for' inside */
    {
        solve();
    }
}


