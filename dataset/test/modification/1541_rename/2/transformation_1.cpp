#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
typedef long long int lli;
#define plli pair<long long int, long long int>
#define mod 1000000007
#define f(i, c, d) for (lli i = c; i < d; i++)
using namespace std;
// Sorting in descending order (decreasing index at same value)
bool hdf_z(plli a, plli b)
{
    if (a.first > b.first)
        return true;
    else if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
    }
    return false;
}
lli u_s(lli rfw, lli dwq_ap)
{
    lli fd = 1;
    while (dwq_ap > 0)
    {
        if (dwq_ap % 2 == 1)
        {
            fd = ((fd % mod) * (rfw % mod)) % mod;
            dwq_ap--;
        }
        else
        {
            dwq_ap = dwq_ap / 2;
            rfw = (rfw % mod) * (rfw % mod) % mod;
        }
    }
    return fd;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli vhc_kw;
    cin >> vhc_kw;
    while (vhc_kw--)
    {
        lli i_kh;
        cin >> i_kh;
        if (i_kh % 2 == 0)
        {
            f(i, 0, n)
            {
                if (i % 2 == 0)
                    cout << i + 2 << " ";
                else
                    cout << i << " ";
            }
        }
        else
        {
            cout << 3 << " " << 1 << " " << 2 << " "  ;
            f(i, 3, n)
            {
                if (i % 2 == 1)
                    cout << i + 2 << " ";
                else
                    cout << i << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}