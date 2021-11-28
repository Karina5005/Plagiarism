#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll ck = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0; i<n; i++) cin >> v[i];
    ll x = accumulate(v.begin(),v.end(),ck);
    double sum = (2.0*x)/(n*1.0);
    if(ceil(sum)!=floor(sum))
    {
        cout << 0 << endl;
        continue;
    }
    map<ll,ll> m;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0; i<n; i++)
    {
        m[v[i]]++;
    }
    ll ans = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0; i<n; i++)
    {
        ans += m[sum - v[i]];
        if(sum-v[i]==v[i])
        {
            ans--;
        }
    }
    cout << ans/2 << endl;
    m.clear();
    }
    return 0;
}
