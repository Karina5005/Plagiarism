#include <bits/stdc++.h>
using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &oym, const pair<A, B> &yty) { return oym << '(' << yty.first << ", " << yty.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &v_iy, const T_container &nmg_y) { v_iy << '{'; string p_b; for (const T &k : nmg_y) v_iy << p_b << k, p_b = ", "; return v_iy << '}'; }
 
void vc_xrs() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head hsw_in, Tail... v_k) { cerr << ' ' << hsw_in; dbg_out(v_k...); }
#ifdef QUYNX_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

int main() {
    ios_base::sync_with_stdio(false);
#ifndef QUYNX_DEBUG 
    cin.tie(nullptr);
#endif
    int ziy, v; cin >> ziy >> v;
    vector<int> z_lba(ziy+1), zv_bnq(ziy+1);
    for (int h = 0; h < v; ++h) {
        int zmx, e_y; cin >> zmx >> e_y;
        ++z_lba[zmx], ++z_lba[e_y];
        if (zmx < e_y) ++zv_bnq[e_y];
        else ++zv_bnq[zmx];
    }
    int vvn; cin >> vvn;
    int gq = 0;
    for (int w = 1; w <= ziy; ++w) {
        if (z_lba[w] == zv_bnq[w]) ++gq;
    }
    while (vvn--) {
        int b_e; cin >> b_e;
        if (b_e == 3) {
            cout << gq << "\n";
        }
        else {
            int wnn_q, u_pfh; cin >> wnn_q >> u_pfh;
            bool ir_ycn[2];
            ir_ycn[0] = z_lba[wnn_q] == zv_bnq[wnn_q];
            ir_ycn[1] = z_lba[u_pfh] == zv_bnq[u_pfh];
            if (b_e == 1) {
                ++z_lba[wnn_q], ++z_lba[u_pfh];
                if (wnn_q < u_pfh) ++zv_bnq[u_pfh];
                else ++zv_bnq[wnn_q];
            }
            else if (b_e == 2) {
                --z_lba[wnn_q], --z_lba[u_pfh];
                if (wnn_q < u_pfh) --zv_bnq[u_pfh];
                else --zv_bnq[wnn_q];
            }
            if (!ir_ycn[0] && z_lba[wnn_q] == zv_bnq[wnn_q]) ++gq;
            else if (ir_ycn[0] && z_lba[wnn_q] > zv_bnq[wnn_q]) --gq;
            if (!ir_ycn[1] && z_lba[u_pfh] == zv_bnq[u_pfh]) ++gq;
            else if (ir_ycn[1] && z_lba[u_pfh] > zv_bnq[u_pfh]) --gq;
        }
    }
}

