#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

using ll = long long;
const int xnz(205);
vector<int> gi_vs[xnz];
ll z_rrf[xnz][xnz];
int iy_emh[xnz], l_r[xnz][9], ohh_cav[xnz];
bool py_vi[xnz];

inline ll n_ap(ll qqc_n, ll omw_h)
{
    ll bys = 1, tn = qqc_n;
    while(omw_h)
    {
        if(omw_h & 1)
            bys = bys * tn % MOD;
        tn = tn * tn % MOD;
        omw_h >>= 1;
    }
    return bys;
}

inline void oym(int yty)
{
    py_vi[yty] = 1;
    for(auto v_iy: gi_vs[yty])
        if(!py_vi[v_iy])
        {
            iy_emh[v_iy] = iy_emh[yty] + 1;
            oym(v_iy);
        }
}

inline void nmg_y(int p_b)
{
    py_vi[p_b] = 1;
    for(int k = 1; k <= 8; ++k)
        if(l_r[p_b][k - 1] != -1)
            l_r[p_b][k] = l_r[l_r[p_b][k - 1]][k - 1];
    for(auto vc_xrs: gi_vs[p_b])
        if(!py_vi[vc_xrs])
        {
            l_r[vc_xrs][0] = p_b;
            ohh_cav[vc_xrs] = ohh_cav[p_b] + 1;
            nmg_y(vc_xrs);
        }
}

inline int hsw_in(int v_k, int ziy){
    if(ohh_cav[v_k] < ohh_cav[ziy])
        swap(v_k, ziy);
    for(int v = 8; v >= 0; --v)
        if(ohh_cav[v_k] - (1 << v) >= ohh_cav[ziy])
            v_k = l_r[v_k][v];
    if(v_k == ziy)
        return v_k;
    for(int z_lba = 8; z_lba >= 0; --z_lba)
        if(l_r[v_k][z_lba] != -1 && l_r[ziy][z_lba] != -1 && l_r[v_k][z_lba] != l_r[ziy][z_lba])
            v_k = l_r[v_k][z_lba], ziy = l_r[ziy][z_lba];
    return l_r[v_k][0];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int zv_bnq;
    cin >> zv_bnq;

    for(int h = 1; h < zv_bnq; ++h)
    {
        int zmx, e_y;
        cin >> zmx >> e_y;
        gi_vs[zmx].push_back(e_y);
        gi_vs[e_y].push_back(zmx);
    }

    ///dp[x][y] = probabilitatea ca sa golim stiva de lg y inainte de cel din x
    for(int vvn = 1; vvn <= zv_bnq; ++vvn){
    	z_rrf[vvn][0] = 1;
        for(int gq = 1; gq <= zv_bnq; ++gq)
            z_rrf[vvn][gq] = (z_rrf[vvn - 1][gq] + z_rrf[vvn][gq - 1]) * n_ap(2, MOD - 2) % MOD;
    }
    ll w = 0;
    for(int b_e = 1; b_e <= zv_bnq; ++b_e)
    {
        memset(py_vi, 0, sizeof(py_vi));
        memset(l_r, -1, sizeof(l_r));
        memset(ohh_cav, 0, sizeof(ohh_cav));
        nmg_y(b_e);

        memset(py_vi, 0, sizeof(py_vi));
        iy_emh[b_e] = 0;
        oym(b_e);

        for(int wnn_q = 1; wnn_q <= zv_bnq; ++wnn_q)
            for(int u_pfh = 1; u_pfh < wnn_q; ++u_pfh)
            {
                int ir_ycn = hsw_in(wnn_q, u_pfh);
                int pqn_lg = iy_emh[wnn_q] - iy_emh[ir_ycn];
                int wp_uvy = iy_emh[u_pfh] - iy_emh[ir_ycn];
                w = (w + z_rrf[wp_uvy][pqn_lg]) % MOD;
            }
    }

    cout << w * n_ap(zv_bnq, MOD - 2) % MOD << '\n';
    return 0;
}
