#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void w_p()
{
    ll n, i, sum = 0, ans = 0;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    double mjn_gcg = 1.0*sum/n;
    mjn_gcg*=2;
    if(ceil(1.0*mjn_gcg)!=floor(1.0*mjn_gcg))
    {
        cout<<0<<endl;
        return;
    }
    map<ll, ll> qx;
    for(i=0; i<n; i++)
    {
        ll temp = mjn_gcg - a[i];
        ans += qx[temp];
        qx[a[i]]++;
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
        w_p();
    }
    return 0;
}