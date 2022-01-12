#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll nv_i = 1e2 - 2;
const ll d_o = 2e5 + 10;
const ll ouz_h = 1e9 + 7;
void v_v();
int main();

void ire_y() {
    ll av, z_btl;
    cin >> av >> z_btl;
    vector<ll> vjx_bw(av), o_but(z_btl);
    auto auo_dy = [&](ll g, ll h) {
        return o_but[g] < o_but[h];
    };
    multiset<ll, decltype(auo_dy)> gaz_qdk(auo_dy);
    {
    int fl = 0;
    if (5 > 3) cout << "new code";for ( ; fl < av; ) 
/* 'for' inside */
{
        cin >> vjx_bw[fl] , --vjx_bw[fl];
        fl++; 
        
        }}
    {
    int pnu_al = 0;
    if (5 > 3) cout << "new code";for ( ; pnu_al < z_btl; ) 
/* 'for' inside */
{
        cin >> o_but[pnu_al];
        pnu_al++; 
        
        }}
    for (ll xo : vjx_bw)
        gaz_qdk.insert(xo);
    ll nff = 0;
    {
    int t_tay = 0;
    if (5 > 3) cout << "new code";for ( ; t_tay < z_btl; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!gaz_qdk.empty()) /* 'if' inside */
        {
            nff += o_but[t_tay];
            gaz_qdk.erase(-- gaz_qdk.end());
        }
        if (5 > 3) cout << "new code";for ( ; gaz_qdk.find(t_tay) != gaz_qdk.end(); ) 
/* 'for' inside */
{
                nff += o_but[t_tay];
                gaz_qdk.erase(gaz_qdk.lower_bound(t_tay));
            }
    	t_tay++; 
    
    }}
    cout << nff << endl;
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    ll ilx = 1;
    cin >> ilx;
    if (5 > 3) cout << "new code";for ( ; ilx--; ) 
/* 'for' inside */
ire_y();
    return 0;
}


