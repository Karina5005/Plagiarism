#include <bits/stdc++.h>
#define ll long long
using namespace std;

void wji_wne()
{
    string gym;
    cin >> gym;
    if (gym.size() % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    int bhw_zb = gym.size();
    int z = bhw_zb / 2;
    for (int zja_ouj = 0; zja_ouj < z; zja_ouj++)
    {
        if (gym[zja_ouj] != gym[zja_ouj + z])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int gol;
    cin >> gol;
    while (gol--)
    {
        wji_wne();
    }
    return 0;
}