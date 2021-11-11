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
    for(int i=0; i<n; i++) /* 'for' inside */
    cin >> v[i];
    ll x = accumulate(v.begin(),v.end(),ck);
    double sum = (2.0*x)/(n*1.0);
    /* 'if' begin */
    if(ceil(sum)!=floor(sum))
    /* 'if' inside */
    {
        cout << 0 << endl;
        continue;
    }
    map<ll,ll> m;
    for(int i=0; i<n; i++)
    /* 'for' inside */
    {
        m[v[i]]++;
    }
    ll ans = 0;
    for(int i=0; i<n; i++)
    /* 'for' inside */
    {
        ans += m[sum - v[i]];
        /* 'if' begin */
        if(sum-v[i]==v[i])
        /* 'if' inside */
        {
            ans--;
        }
    }
    cout << ans/2 << endl;
    m.clear();
    }
    return 0;
}
