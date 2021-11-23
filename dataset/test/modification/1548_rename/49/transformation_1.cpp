///In the name of GOD
//#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll q = 3e6 + 10;
const ll abt_a = 1e9 + 7;
ll kqx(ll rga_egv, ll za){
    return (!za ? 1 : kqx(rga_egv * rga_egv % abt_a, za / 2) * (za & 1LL ? rga_egv : 1) % abt_a);
}
ll dve_if(ll ay){
    return kqx(ay, abt_a - 2);
}
void j_r(ll &cl){
    if(cl >= abt_a) cl -= abt_a;
}
ll fp_xk, xf, dkc;
ll k_rxq[q], t_j[q], me[q], pl_gjl[q], bfu_lpe[q];
ll umy_e(ll c, ll is){
    if(is < 0 || is > c) return 0;
    return pl_gjl[c] * bfu_lpe[is] % abt_a * bfu_lpe[c - is] % abt_a;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    pl_gjl[0] = bfu_lpe[0] = 1, dkc = dve_if(3);
    for(int as_gon = 1; as_gon < q; as_gon ++) pl_gjl[as_gon] = pl_gjl[as_gon - 1] * as_gon % abt_a;
    bfu_lpe[q - 1] = dve_if(pl_gjl[q - 1]);
    for(int p_mg = q - 2; p_mg; p_mg --) bfu_lpe[p_mg] = bfu_lpe[p_mg + 1] * (p_mg + 1) % abt_a;
    cin >> fp_xk >> xf;
    for(int hc_e = 1; hc_e <= fp_xk; hc_e ++){
        k_rxq[1] += umy_e(3 * hc_e, 1);
        t_j[1] += umy_e(3 * hc_e - 1, 1);
        me[1] += umy_e(3 * hc_e - 2, 1);
        k_rxq[2] += umy_e(3 * hc_e, 2);
        t_j[2] += umy_e(3 * hc_e - 1, 2);
        me[2] += umy_e(3 * hc_e - 2, 2);
        j_r(k_rxq[1]), j_r(k_rxq[2]);
        j_r(t_j[1]), j_r(t_j[2]);
        j_r(me[1]), j_r(me[2]);
    }
    for(int at = 3; at <= fp_xk * 3; at ++){
        ll rsu = (k_rxq[at - 1] - umy_e(3 * fp_xk, at - 1)) - umy_e(3 * fp_xk, at);
        rsu += umy_e(3 * fp_xk + 1, at + 1) - me[at - 1];
        rsu %= abt_a;
        if(rsu < 0) rsu += abt_a;
        me[at] = rsu * dve_if(3) % abt_a;
        if(me[at] < 0) me[at] += abt_a;
        t_j[at] = me[at] + me[at - 1];
        j_r(t_j[at]);
        k_rxq[at] = t_j[at] + t_j[at - 1];
        j_r(k_rxq[at]);
    }
    while(xf --){
        ll b_ikw; cin >> b_ikw;
        cout << k_rxq[b_ikw] << '\n';
    }
    return 0;
}
//! C
/*!
    HE'S AN INSTIGATOR,
    ENEMY ELIMINATOR,
    AND WHEN HE KNOCKS YOU BETTER
    YOU BETTER LET HIM IN.
*/
// In memory of N.N