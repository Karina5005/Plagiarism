#include <bits/stdc++.h>

using namespace std;

#define  ll long long
#define ld long double
#define f first
#define s second
const int y_ceg = 6e3+5;

/*
 * I = (2 * area - b +2)/2 , let A = 2*area
 * 2*I = A - b + 2 , I = area - b/2 + 1 , area is always even because the coordinates are even
 * so b/2 must be also even to make the right side odd
 * so the problem now -> how many triangles such that the sum of boundary points is a multiple of 4? (b%4=0)
 * in gcd(x1-x2 , y1-y2) we only interested in (x1%4 , x2%4 , ...)
 * so we will brute force over a side of rectangle and count how many other points satisfy the condition
 */

int mw_o , c[y_ceg] , btz[y_ceg] , o_psl[y_ceg] , oaw[5][5] , dmz[20];
ll ans;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> mw_o;
    for(int e=1; e<=mw_o; e++)
    {
        cin >> btz[e] >> o_psl[e];
        btz[e] %= 4 , o_psl[e] %= 4;
        oaw[btz[e]][o_psl[e]]++;
    }

    int xb_zdy[2] = {0,2};
    for(int nh_tke=0; nh_tke<20; nh_tke++)
        dmz[nh_tke] = nh_tke%4;


    for(int fz_ipe=1; fz_ipe<=mw_o; fz_ipe++)
    {
        oaw[btz[fz_ipe]][o_psl[fz_ipe]]--;
        for(int egj=fz_ipe+1; egj<=mw_o; egj++)
        {
            oaw[btz[egj]][o_psl[egj]]--;

            int ocv_lrj = 0;
            if (btz[fz_ipe] != btz[egj] || o_psl[fz_ipe] != o_psl[egj]) ocv_lrj = dmz[(ocv_lrj-2+4)]; //the gcd will be 2

            //now we want number of points that makk gcd with the points(i,j) equals to cur
            for(int mpo_scj=0; mpo_scj<2; mpo_scj++)
            {
                for(int rh=0; rh<2; rh++) //the mods of the point we will get
                {
                    int x_vja = max(dmz[btz[fz_ipe]-xb_zdy[mpo_scj]+4] , dmz[o_psl[fz_ipe]-xb_zdy[rh]+4]);
                    int so_py = max(dmz[btz[egj]-xb_zdy[mpo_scj]+4] , dmz[o_psl[egj]-xb_zdy[rh]+4]);
                    if (dmz[x_vja+so_py] == ocv_lrj) ans += oaw[xb_zdy[mpo_scj]][xb_zdy[rh]];
                }
            }

            oaw[btz[egj]][o_psl[egj]]++;
        }
        oaw[btz[fz_ipe]][o_psl[fz_ipe]]++;
    }

    cout << ans/3 << '\n';

    return 0;
}

	 	    	 		  						    				