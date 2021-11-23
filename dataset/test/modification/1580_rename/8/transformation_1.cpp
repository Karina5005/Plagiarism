#include <bits/stdc++.h>
using namespace std;

#define Confundo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"

const int r_ff    = numeric_limits<int>::max() / 2;
const double y  = 3.1415926535898;
const int tw_g    = 1e9 + 7;
const int dj    = 2e5 + 5;

// O(log y)
int pxj_byp(int mh_k, int fij_z) {
    int lev_fv;
    if (fij_z == 0)
        return 1;
    lev_fv = pxj_byp(mh_k, fij_z / 2);
    if (fij_z % 2 == 0)
        return (lev_fv * lev_fv) % tw_g;
    else
        return (mh_k * ((lev_fv * lev_fv) % tw_g)) % tw_g;
}

const int dim_niz = 447;

int i_zg[dj], rzk[dj], kqn[dj], y[dj], tq_rhz[dj];
int ax_rg[dim_niz + 5][dim_niz + 5];

void zfg()
{
    int eg_vea, st;
    cin >> eg_vea >> st;

    for (int x_qdd = 1; x_qdd <= eg_vea; ++x_qdd)
    {
        cin >> i_zg[x_qdd] >> rzk[x_qdd];
        kqn[x_qdd] = i_zg[x_qdd] + rzk[x_qdd];
    }

    int xtc_jf = 0;

    for (int kx = 1; kx <= st; ++kx)
    {
        int hp_w, k_o;
        cin >> hp_w >> k_o;

        if (hp_w == 1)
            tq_rhz[k_o] = kx;
        else
            hp_w = -1;

        if (kqn[k_o] >= dim_niz)
        {
            for (int sry = tq_rhz[k_o]; sry <= st; sry += kqn[k_o])
            {
                if (sry + i_zg[k_o] < kx)
                    xtc_jf += hp_w;
                else if (sry + i_zg[k_o] <= st)
                    y[sry + i_zg[k_o]] += hp_w;

                if (sry + kqn[k_o] < kx)
                    xtc_jf -= hp_w;
                else if (sry + kqn[k_o] <= st)
                    y[sry + kqn[k_o]] -= hp_w;
            }
        }
        else
        {
            for (int m_k = tq_rhz[k_o] + i_zg[k_o]; m_k < tq_rhz[k_o] + kqn[k_o]; ++m_k)
                ax_rg[kqn[k_o]][m_k % kqn[k_o]] += hp_w;
        }

        xtc_jf += y[kx];

        int m_lx = xtc_jf;

        for (int v = 1; v < dim_niz; ++v)
            m_lx += ax_rg[v][kx % v];

        cout << m_lx << endl;
    }

    return;
}


//*************************************************************************************************************************


int32_t main()
{
    Confundo;

    // ftt
    {
        zfg();
    }

    return 0;
}