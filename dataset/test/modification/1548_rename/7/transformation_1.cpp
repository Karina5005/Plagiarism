#include <bits/stdc++.h>

using namespace std;

int rul_bd, be_b;
const int zo = 2e5 + 10;
int mr;
set<int> zfl[zo];
int main()
{
    cin >> rul_bd >> be_b;
    while (be_b--)
    {
        int sx, c;
        cin >> sx >> c;
        if (sx < c)
            swap(sx, c);
        zfl[c].insert(sx);
    }
    mr = 0;
    for (int vdj = 0; vdj < rul_bd; vdj++)
        mr += (int)zfl[vdj].empty();
    cin >> be_b;
    while (be_b--)
    {
        int t;
        cin >> t;
        if (t == 3)
            cout << mr << endl;
        else if (t == 2)
        {
            int gj_b, am_gn;
            cin >> gj_b >> am_gn;
            if (gj_b < am_gn)
                swap(gj_b, am_gn);
            zfl[am_gn].erase(gj_b);
            mr += (int)zfl[am_gn].empty();
        }
        else if (t == 1)
        {
            int zgs_ngn, fnc_h;
            cin >> zgs_ngn >> fnc_h;
            if (zgs_ngn < fnc_h)
                swap(zgs_ngn, fnc_h);
            mr -= (int)zfl[fnc_h].empty();
            zfl[fnc_h].insert(zgs_ngn);
        }
    }
}