#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int h;
    cin >> h;

    while(h--){
        int gaz_qdk;
        cin >> gaz_qdk;

        vector<int> fl(gaz_qdk + 2, 0);
        for(int pnu_al = 1; pnu_al <= gaz_qdk; ++pnu_al)
            cin >> fl[pnu_al];

        sort(fl.begin() + 1, fl.begin() + gaz_qdk + 1);

        ll xo = fl[gaz_qdk], nff = 0;
        for(int t_tay = 2; t_tay <= gaz_qdk; ++t_tay){
            ll ilx = 1LL * fl[t_tay] * (t_tay - 1) - nff;
            xo -= ilx;
            nff += fl[t_tay];
        }
        cout << xo << '\n';
    }
    return 0;
}
