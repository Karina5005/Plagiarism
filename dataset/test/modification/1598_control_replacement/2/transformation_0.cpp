// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;;

    ll a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if ((s<<1) % n) { cout << 0 << endl; return; }
    ll k = (s<<1) / n, ans = 0;
    map<ll, ll> ctr;
    for (int i = 0; i < n; i++)
    {
        if(ctr[k-a[i]]) ans += ctr[k-a[i]];
        ctr[a[i]]++;
    }   
    cout << ans << endl;
}

int main()
{ 
    int T;
    cin >> T;
    while(T--)
       solve();
    return 0;
}