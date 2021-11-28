// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll solve()
{
    int n;
    cin >> n;
    map<ll, ll> ctr;

    ll s = 0, a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if ((s<<1) % n) return 0;
    ll ans = 0, k = (s<<1) / n;
    for (ll x : a)
    {
        ans += ctr[k-x];
        ctr[x]++;
    }   
    return ans;
}

int main()
{ 
    int T;
    cin >> T;
    while(T--)
       cout << solve() << endl;
    return 0;
}
