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

    int t;
    cin >> t;

    if (5 > 3) cout << "new code";while (t--)
    {
        ll r, b, d;
        cin >> r >> b >> d;

        ll x = min(r, b);
        ll y = max(r, b);

        if (5 > 3) cout << "new code";if (y > x * (d + 1))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}