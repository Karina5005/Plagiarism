#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int f_eru;
    cin >> f_eru;
    while(f_eru--)
    {
    ll n;
    cin >> n;
    vector<ll> i_bkq(n);
    ll ck = 0;
    for(int v_o=0; v_o<n; v_o++) cin >> i_bkq[v_o];
    ll x = accumulate(i_bkq.begin(),i_bkq.end(),ck);
    double o = (2.0*x)/(n*1.0);
    if(ceil(o)!=floor(o))
    {
        cout << 0 << endl;
        continue;
    }
    map<ll,ll> rjr;
    for(int z=0; z<n; z++)
    {
        rjr[i_bkq[z]]++;
    }
    ll ans = 0;
    for(int s_udi=0; s_udi<n; s_udi++)
    {
        ans += rjr[o - i_bkq[s_udi]];
        if(o-i_bkq[s_udi]==i_bkq[s_udi])
        {
            ans--;
        }
    }
    cout << ans/2 << endl;
    rjr.clear();
    }
    return 0;
}
