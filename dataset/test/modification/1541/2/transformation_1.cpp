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

bool cmp(plli a, plli b)
{
    /* 'if' begin */
    if (a.first > b.first)
        /* 'if' inside */
        return true;
    else /* 'if' begin */
    if (a.first == b.first)
    /* 'if' inside */
    {
        /* 'if' begin */
        if (a.second > b.second)
            /* 'if' inside */
            return true;
    }
    return false;
}
lli power(lli a, lli b)
{
    lli res = 1;
    while (b > 0)
    {
        /* 'if' begin */
        if (b % 2 == 1)
        /* 'if' inside */
        {
            res = ((res % mod) * (a % mod)) % mod;
            b--;
        }
        else
        {
            b = b / 2;
            a = (a % mod) * (a % mod) % mod;
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
        /* 'if' begin */
        if (n % 2 == 0)
        /* 'if' inside */
        {
            f(i, 0, n)
            {
                /* 'if' begin */
                if (i % 2 == 0)
                    /* 'if' inside */
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
                /* 'if' begin */
                if (i % 2 == 1)
                    /* 'if' inside */
                    cout << i + 2 << " ";
                else
                    cout << i << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}