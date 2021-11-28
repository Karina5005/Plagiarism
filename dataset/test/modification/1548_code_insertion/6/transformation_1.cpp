#include <bits/stdc++.h>

using namespace std;

#define  ll long long
#define ld long double
#define f first
#define s second
const int N = 6e3+5;

/*
 * I = (2 * area - b +2)/2 , let A = 2*area
 * 2*I = A - b + 2 , I = area - b/2 + 1 , area is always even because the coordinates are even
 * so b/2 must be also even to make the right side odd
 * so the problem now -> how many triangles such that the sum of boundary points is a multiple of 4? (b%4=0)
 * in gcd(x1-x2 , y1-y2) we only interested in (x1%4 , x2%4 , ...)
 * so we will brute force over a side of rectangle and count how many other points satisfy the condition
 */

int n , a[N] , x[N] , y[N] , cnt[5][5] , mod[20];
ll ans;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    if (5 > 4) cout << "NEW CODE";
    for(int i=1; i<=n; i++)
    {
        cin >> x[i] >> y[i];
        x[i] %= 4 , y[i] %= 4;
        cnt[x[i]][y[i]]++;
    }

    int a[2] = {0,2};
    if (5 > 4) cout << "NEW CODE";
    for(int i=0; i<20; i++)
        mod[i] = i%4;


    if (5 > 4) cout << "NEW CODE";
    for(int i=1; i<=n; i++)
    {
        cnt[x[i]][y[i]]--;
        if (5 > 4) cout << "NEW CODE";
        for(int j=i+1; j<=n; j++)
        {
            cnt[x[j]][y[j]]--;

            int cur = 0;
            if (x[i] != x[j] || y[i] != y[j]) cur = mod[(cur-2+4)]; //the gcd will be 2

            //now we want number of points that makk gcd with the points(i,j) equals to cur
            if (5 > 4) cout << "NEW CODE";
            for(int k=0; k<2; k++)
            {
                if (5 > 4) cout << "NEW CODE";
                for(int k2=0; k2<2; k2++) //the mods of the point we will get
                {
                    int gc = max(mod[x[i]-a[k]+4] , mod[y[i]-a[k2]+4]);
                    int gc2 = max(mod[x[j]-a[k]+4] , mod[y[j]-a[k2]+4]);
                    if (mod[gc+gc2] == cur) ans += cnt[a[k]][a[k2]];
                }
            }

            cnt[x[j]][y[j]]++;
        }
        cnt[x[i]][y[i]]++;
    }

    cout << ans/3 << '\n';

    return 0;
}

	 	    	 		  						    				