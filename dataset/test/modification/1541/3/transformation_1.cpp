#include <bits/stdc++.h>
using namespace std;
#define int long long int
void SieveOfEratosthenes(int n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    /* 'for' inside */
    {
        
        /* 'if' begin */
        if (prime[p] == true)
        /* 'if' inside */
        {
            
            for (int i = p * p; i <= n; i += p)
                /* 'for' inside */
                prime[i] = false;
        }
    }
}
int gcd(int a, int b)
{
    
    /* 'if' begin */
    if (a == 0)
        /* 'if' inside */
        return b;
    /* 'if' begin */
    if (b == 0)
        /* 'if' inside */
        return a;

    
    /* 'if' begin */
    if (a == b)
        /* 'if' inside */
        return a;

    
    /* 'if' begin */
    if (a > b)
        /* 'if' inside */
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    /* 'for' inside */
    {
        int n;
        cin >> n;
        /* 'if' begin */
        if (n % 2 == 0)
        /* 'if' inside */
        {
            for (int i = 1; i <= n; i += 2)
            /* 'for' inside */
            {
                cout << i + 1 << " ";
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        else {
            vector<int> v(n + 1);
            for (int i = 2; i <= n; i += 2)
            /* 'for' inside */
            {
                v[i] = (i + 1);
                v[i + 1] = (i);

            }
            int c = v[2];
            v[2] = 1;
            v[1] = c;
            for (int i = 1; i <= n; i++)
            /* 'for' inside */
            {
                cout << v[i] << " ";
            }
            cout << "\n";

        }
    }


}