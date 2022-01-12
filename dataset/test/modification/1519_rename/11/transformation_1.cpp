#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int f_ioa;
    cin >> f_ioa;

    while (f_ioa--)
    {
        ll nv_i, d_o, ouz_h;
        cin >> nv_i >> d_o >> ouz_h;

        ll v_v = min(nv_i, d_o);
        ll av = max(nv_i, d_o);

        if (av > v_v * (ouz_h + 1))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}