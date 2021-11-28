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
bool cmp(plli a, plli b)
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
lli power(lli a, lli b)
{
    lli res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            b--;
            res = ((res % mod) * (a % mod)) % mod;
        }
        else
        {
            a = (a % mod) * (a % mod) % mod;
            b = b / 2;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        if (n % 2 == 0)
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
