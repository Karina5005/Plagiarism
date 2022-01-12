#include <iomanip>
#include <iostream>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main()
{

    
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for ( ; t--; ) 
{
        ll r, b, d;
        cin >> r >> b >> d;

        ll x = min(r, b);
        ll y = max(r, b);

        if (!(y > x * (d + 1)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}