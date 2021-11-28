// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll solve()
{
    int n;
    cin >> n;;

    ll a[n], s = 0;
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if ((s<<1) % n) return 0;
    ll k = (s<<1) / n, ans = 0;
    map<ll, ll> ctr;
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