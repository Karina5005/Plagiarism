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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        /* 'for' inside */
        {
            cin >> v[i];
        }
        /* 'if' begin */
        if (n == 2)
        /* 'if' inside */
        {
            /* 'if' begin */
            if (v[1]*v[2] == 3)
                /* 'if' inside */
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        else /* 'if' begin */
        if (n == 3)
        /* 'if' inside */
        {
            int count = 0;
            /* 'if' begin */
            if (v[1]*v[2] == 3)
                /* 'if' inside */
                count++;
            /* 'if' begin */
            if (v[2]*v[3] == 5)
                /* 'if' inside */
                count++;
            /* 'if' begin */
            if (v[1]*v[3] == 4)
                /* 'if' inside */
                count++;
            cout << count << "\n";
        }
        else {
            int pair = 0;
            for (int i = 1; i <= n; i++)
            /* 'for' inside */
            {
                int num = v[i];
                for (int j = v[i]; j - i <= n; j += v[i])
                /* 'for' inside */
                {
                    int rem = j - i;
                    /* 'if' begin */
                    if (rem <= i)
                        /* 'if' inside */
                        continue;
                    /* 'if' begin */
                    if (j == i)
                        /* 'if' inside */
                        continue;
                    /* 'if' begin */
                    if (v[rem]*v[i] == j)
                        /* 'if' inside */
                        pair++;
                }
            }
            cout << pair << "\n";
        }
    }


}