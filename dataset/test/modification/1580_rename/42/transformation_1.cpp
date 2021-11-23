#include <bits/stdc++.h>
#define f first
#define s second
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lb;
typedef short int sint;

const ll l_nl = 1e+16;
const int vz_reu = 1998244353;
const int c = 5 * 1e+5 + 1000;
const int iba = 1000;
const ll ek_ast = 1000000007;
const lb d_aic = 1e-12;
const int hos = 1e+6 + 1000;
const lb du_e = atan(1) * 4;
const ll gh_gb = -692281337;

struct T
{
    int x, y, op;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("73.IN", "r", stdin);
    //cout << "OK" << endl;
    int cme, e_ei;
    cin >> cme >> e_ei;
    int wyk = sqrt(cme) + 1;
    vector<pair<int, int> > g(cme);
    vector<vector<pair<int, int> > > ya(cme);
    for (int kfj = 0; kfj < cme; kfj++)
    {
        cin >> g[kfj].f >> g[kfj].s;
    }
    vector<pair<int, int> > ka(e_ei + 1);
    for (int z = 0; z < e_ei; z++)
    {
        cin >> ka[z].f >> ka[z].s;
        ka[z].s--;
        if (ka[z].f == 1)
        {
            ya[ka[z].s].push_back(make_pair(z, e_ei));
        }
        else
        {
            ya[ka[z].s][(int)ya[ka[z].s].size() - 1].s = z;
        }
    }
    vector<int> blh(e_ei + 1);
    vector<int> qsq(wyk);
    for (int soi = 0; soi < cme; soi++)
    {
        int tnb_dyb = g[soi].f;
        int h_jeq = g[soi].s;
        if (tnb_dyb + h_jeq >= wyk)
        {
            for (auto b : ya[soi])
            {
                for (int ky = b.f; ky <= b.s; ky += tnb_dyb + h_jeq)
                {
                    if (ky > b.f)
                        blh[ky]--;
                    if (ky + tnb_dyb < b.s)
                        blh[ky + tnb_dyb]++;
                    if (ky + tnb_dyb < b.s && ky + tnb_dyb + h_jeq > b.s)
                        blh[b.s]--;
                }
            }
        }
        else if (!ya.empty())
        {
            qsq[tnb_dyb + h_jeq]++;
        }
    }//works. checked.
    vector<int> b(cme);
    for (int y_e = 2; y_e < wyk; y_e++)
    {
        if (qsq[y_e] > 0)
        {
            vector<int> cdl(y_e);
            for (int oq_fov = 0; oq_fov < e_ei; oq_fov++)
            {
                int jtc_c = ka[oq_fov].s;
                int pfn_lgt = g[jtc_c].f;
                int gmq = g[jtc_c].s;
                blh[oq_fov] += cdl[oq_fov % y_e];
                if (pfn_lgt + gmq == y_e)
                {
                    if (ka[oq_fov].f == 1)
                    {
                        b[jtc_c] = oq_fov;
                        cdl[(oq_fov + pfn_lgt) % y_e]++;
                        cdl[oq_fov % y_e]--;
                    }
                    else
                    {
                        if ((oq_fov - b[jtc_c]) % y_e >= pfn_lgt)
                            blh[oq_fov]--;
                        cdl[(b[jtc_c] + pfn_lgt) % y_e]--;
                        cdl[b[jtc_c] % y_e]++;
                    }
                }
            }
        }
    }
    int u = 0;
    for (int ytu_w = 0; ytu_w < e_ei; ytu_w++)
    {
        u += blh[ytu_w];
        cout << u << " ";
    }
}
/*
6 16
2 1
6 3
4 3
100 100
2 3
1 1

1 1
1 2
1 3
1 4
1 5
2 4
1 6
2 1
2 2
2 6
1 4
2 4
1 1
2 5
2 3
2 1
*/
