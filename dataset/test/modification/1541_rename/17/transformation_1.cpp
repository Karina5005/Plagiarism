#include <bits/stdc++.h>

using namespace std;

int main()
{
    int xk; cin >> xk;
    while (xk--)
    {
        int v_ri; cin >> v_ri;
        long long * e_xgd = new long long[v_ri+1];
        for (int otf = 1; otf <= v_ri; otf++)
            cin >> e_xgd[otf];

        long long kno_xf = 0;
        for(int h = 1; h <= v_ri; h++)
        {
            for (int trk = e_xgd[h] - h; trk <= v_ri; trk+= e_xgd[h])
            {
                if ( trk > 0 && h < trk && h+trk == e_xgd[h]* e_xgd[trk] )
                    kno_xf++;
            }
        }

        cout << kno_xf <<endl;
    }
}
