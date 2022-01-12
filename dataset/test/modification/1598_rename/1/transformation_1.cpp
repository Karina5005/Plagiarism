// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t()
{
    int r_ah;
    cin >> r_ah;;

    ll i[r_ah], e_y = 0;
    for (int qap_qyc = 0; qap_qyc < r_ah; qap_qyc++)
    {
        cin >> i[qap_qyc];
        e_y += i[qap_qyc];
    }
    if ((e_y<<1) % r_ah) return 0;
    ll vea = (e_y<<1) / r_ah, xh_wr = 0;
    map<ll, ll> ae;
    for (ll jba_k : i)
    {
        xh_wr += ae[vea-jba_k];
        ae[jba_k]++;
    }   
    return xh_wr;
}

int main()
{ 
    int i;
    cin >> i;
    while(i--)
       cout << t() << endl;
    return 0;
}