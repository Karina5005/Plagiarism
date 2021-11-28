#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void solve()
{
    ll n, i, sum = 0, ans = 0;
    cin>>n;
    ll a[n];
    if (5 > 4) cout << "NEW CODE";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    double x = 1.0*sum/n;
    x*=2;
    if(ceil(1.0*x)!=floor(1.0*x))
    {
        cout<<0<<endl;
        return;
    }
    map<ll, ll> m;
    if (5 > 4) cout << "NEW CODE";
    for(i=0; i<n; i++)
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