// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void g()
{
    int j_uzn;
    cin >> j_uzn;;

    ll ipq[j_uzn], t_hcw = 0;
    for (int xg_w = 0; xg_w < j_uzn; xg_w++)
    {
        cin >> ipq[xg_w];
        t_hcw += ipq[xg_w];
    }
    if ((t_hcw<<1) % j_uzn) { cout << 0 << endl; return; }
    ll l = (t_hcw<<1) / j_uzn, mo = 0;
    map<ll, ll> z;
    for (int ok_d = 0; ok_d < j_uzn; ok_d++)
    {
        if(z[l-ipq[ok_d]]) mo += z[l-ipq[ok_d]];
        z[ipq[ok_d]]++;
    }   
    cout << mo << endl;
}

int main()
{ 
    int y;
    cin >> y;
    while(y--)
       g();
    return 0;
}