#include <bits\stdc++.h>
using namespace std;

int am_gn(long long zgs_ngn[], int fnc_h)
{
    int k_eyw = 0;
    for (int y_jmf = 1; y_jmf <= fnc_h; y_jmf++)
    {
        for (int fs_r = zgs_ngn[y_jmf] - y_jmf; fs_r <= fnc_h; fs_r += zgs_ngn[y_jmf])
        {
            if (fs_r >= 0){
                if (zgs_ngn[y_jmf] * zgs_ngn[fs_r] == y_jmf + fs_r && y_jmf < fs_r)
                    k_eyw++;
            }
        }
    }
    return k_eyw;
}

int main()
{
    int xnp, cs_epa;
    cin >> t;
    while (xnp--)
    {
        cin >> n;
        long long a_xpe[cs_epa + 1];
        for (int iqo_dmo = 1; iqo_dmo <= cs_epa; iqo_dmo++)
        {
            cin >> arr[i];
        }
        cout << pairs(arr, n) << endl;
    }
    return 0;
}