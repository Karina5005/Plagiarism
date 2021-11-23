#include <bits/stdc++.h>

using namespace std;

#define  ll long long
#define ld long double
#define f first
#define s second
const int pv_zn = 6e3+5;

/*
 * I = (2 * area - b +2)/2 , let A = 2*area
 * 2*I = A - b + 2 , I = area - b/2 + 1 , area is always even because the coordinates are even
 * so b/2 must be also even to make the right side odd
 * so the problem now -> how many triangles such that the sum of boundary points is a multiple of 4? (b%4=0)
 * in gcd(x1-x2 , y1-y2) we only interested in (x1%4 , x2%4 , ...)
 * so we will brute force over a side of rectangle and count how many other points satisfy the condition
 */

int vty , l_d[pv_zn] , jbe[pv_zn] , fyj[pv_zn] , twi[5][5] , p_nr[20];
ll ans;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> vty;
    for(int vdr_bo=1; vdr_bo<=vty; vdr_bo++)
    {
        cin >> jbe[vdr_bo] >> fyj[vdr_bo];
        jbe[vdr_bo] %= 4 , fyj[vdr_bo] %= 4;
        twi[jbe[vdr_bo]][fyj[vdr_bo]]++;
    }

    int a_okh[2] = {0,2};
    for(int a_zxf=0; a_zxf<20; a_zxf++)
        p_nr[a_zxf] = a_zxf%4;


    for(int ux=1; ux<=vty; ux++)
    {
        twi[jbe[ux]][fyj[ux]]--;
        for(int e=ux+1; e<=vty; e++)
        {
            twi[jbe[e]][fyj[e]]--;

            int j_bdu = 0;
            if (jbe[ux] != jbe[e] || fyj[ux] != fyj[e]) j_bdu = p_nr[(j_bdu-2+4)]; //the gcd will be 2

            //now we want number of points that makk gcd with the points(i,j) equals to cur
            for(int wrx=0; wrx<2; wrx++)
            {
                for(int yp=0; yp<2; yp++) //the mods of the point we will get
                {
                    int p = max(p_nr[jbe[ux]-a_okh[wrx]+4] , p_nr[fyj[ux]-a_okh[yp]+4]);
                    int x = max(p_nr[jbe[e]-a_okh[wrx]+4] , p_nr[fyj[e]-a_okh[yp]+4]);
                    if (p_nr[p+x] == j_bdu) ans += twi[a_okh[wrx]][a_okh[yp]];
                }
            }

            twi[jbe[e]][fyj[e]]++;
        }
        twi[jbe[ux]][fyj[ux]]++;
    }

    cout << ans/3 << '\n';

    return 0;
}