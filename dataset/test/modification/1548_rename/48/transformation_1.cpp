//OM NAMAY SHIVAYEE
//Ashutosh Gupta
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define l long long
#define vi vector<int>
#define si set<int>
#define pii pair<int, int>
#define fl(i, a, b) for (int i = a; i < b; i++)
#define fn(a, b, n) for (int i = a; i < b; i = i + n)
#define lt 1000000000
#define e endl;
const int32_t pqn_lg = 1e9 + 7;

bool wp_uvy(int hs_mzb[], int g, int oy, int osb)
{
    while (g <= oy)
    {
        int p = g + (oy - g) / 2;
        if (hs_mzb[p] < osb)
        {
            g = p + 1;
        }
        else if (hs_mzb[p] > osb)
        {
            oy = p - 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void q(int oe_vuz[], int ajs_ko)
{
    for (int oo_ijt = 0; oo_ijt < ajs_ko; oo_ijt++)
    {
        cin >> oe_vuz[oo_ijt];
    }
}

int main()
{
    //You can do it!!.Just Focus,you can and you will.
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int c_a, ox_sme, m;
    cin >> c_a >> ox_sme;
    // cout<<"df";
    int vbf_o[c_a + 1] = {};

    for (int pnb = 0; pnb < ox_sme; pnb++)
    {
        int d_c, zp;
        // cout<<"yes";
        cin >> d_c >> zp;
        int rjn_ap = min(d_c, zp);
        a[mi]++;
    }
    // cout<<"over";
    int w_w = 0;
    for (int xik_l = 0; xik_l < c_a; xik_l++)
    {
        if (a[i]==0)
        {
            w_w++;
        }
    }
    // cout<<count<<" ";
    cin >> m;
    while (m--)
    {
        int exu_prp;
        cin >> exu_prp;
        if (exu_prp == 1)
        {
            int s_mql, p_lxz;
            cin >> s_mql >> p_lxz;
            int az = min(s_mql, p_lxz);

            if(a[mi]==0)
            {
                w_w--;
            }
            a[mi]++;

        
        }
        if (exu_prp == 2)
        {
            int ue, vbk;
            cin >> ue >> vbk;
            int opr_fd = min(ue, vbk);
            a[mi]--;

            if (a[mi] == 0)
            {
                w_w++;
            }
        }
        if (exu_prp == 3)
        {
            cout << w_w << e
        }
    }

    return 0;
}