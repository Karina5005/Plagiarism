#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll tj_ccb = 1e2 - 2;
const ll y = 2e5 + 10;
const ll pub_be = 1e9 + 7;
void dx(){
    ll khi_beh, ged;
    cin >> khi_beh >> ged;
    vector<ll> wj(khi_beh), mbx(ged);
    auto f_ioa = [&](ll nv_i, ll d_o){
        return mbx[nv_i] < mbx[d_o];
    };
    multiset<ll, decltype(f_ioa)> ouz_h(f_ioa);
    for(int v_v = 0; v_v < khi_beh; v_v++)
        cin >> wj[v_v], --wj[v_v];
    for(int av = 0; av < ged; av++)
        cin >> mbx[av];
    for(ll z_btl : wj)
        ouz_h.insert(z_btl);
    ll vjx_bw = 0;
    for(int o_but = 0; o_but < ged; o_but++){
        if(!ouz_h.empty()){
            vjx_bw += mbx[o_but];
            ouz_h.erase(--ouz_h.end());
        }
        while(ouz_h.find(o_but) != ouz_h.end()){
            vjx_bw += mbx[o_but];
            ouz_h.erase(ouz_h.lower_bound(o_but));
        }
    }
    cout << vjx_bw << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll auo_dy = 1;
    cin >> auo_dy;
    while(auo_dy--)
        dx();
    return 0;
}