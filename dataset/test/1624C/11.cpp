#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    bool num[n+1] = {false};
    vector<ll> x(n);
    for(auto& a:x)
    {
        cin >> a;
    }
    sort(x.begin() , x.end());
    for(ll i = 0 ; i < n ;i++)
    {
        if(x[i] <= n && !num[x[i]])
        {
            num[x[i]] = true;
            continue;
        }
        while(x[i] > n || num[x[i]])
        {
            x[i]/=2;
        }
        if(x[i] == 0)
        {
            cout << "NO" << "\n";
            return;
        }
        num[x[i]] = true;
    }
    cout << "YES" << "\n";
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin >> t;
while(t--)
{
    solve();
}

return 0;
}   