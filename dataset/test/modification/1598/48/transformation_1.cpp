#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void solve()
{
    ll n, i, sum = 0, ans = 0;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
    /* 'for' inside */
    {
        cin>>a[i];
        sum += a[i];
    }
    double x = 1.0*sum/n;
    x*=2;
    /* 'if' begin */
    if(ceil(1.0*x)!=floor(1.0*x))
    /* 'if' inside */
    {
        cout<<0<<endl;
        return;
    }
    map<ll, ll> m;
    for(i=0; i<n; i++)
    /* 'for' inside */
    {
        ll temp = x - a[i];
        ans += m[temp];
        m[a[i]]++;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}