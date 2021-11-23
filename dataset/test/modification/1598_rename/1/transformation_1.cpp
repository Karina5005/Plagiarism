// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll qr_sl()
{
    int w;
    cin >> w;;

    ll rob_fs[w], d_zs = 0;
    for (int f = 0; f < w; f++)
    {
        cin >> rob_fs[f];
        d_zs += rob_fs[f];
    }
    if ((d_zs<<1) % w) return 0;
    ll n_czf = (d_zs<<1) / w, ibh_arf = 0;
    map<ll, ll> w_ort;
    for (ll p : rob_fs)
    {
        ibh_arf += w_ort[n_czf-p];
        w_ort[p]++;
    }   
    return ibh_arf;
}

int main()
{ 
    int hca_prn;
    cin >> hca_prn;
    while(hca_prn--)
       cout << qr_sl() << endl;
    return 0;
}