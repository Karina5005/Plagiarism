#include <bits/stdc++.h>
using namespace std;
#define int long long int
void nqw(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool cai_mbx[n + 1];
    memset(cai_mbx, true, sizeof(cai_mbx));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (cai_mbx[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                cai_mbx[i] = false;
        }
    }
}
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
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
#endif//ONLINE_JUDGE
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i += 2)
            {
                cout << i + 1 << " ";
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        else {
            vector<int> kr(n + 1);
            for (int i = 2; i <= n; i += 2)
            {
                kr[i] = (i + 1);
                kr[i + 1] = (i);

            }
            int c = kr[2];
            kr[2] = 1;
            kr[1] = c;
            for (int i = 1; i <= n; i++)
            {
                cout << kr[i] << " ";
            }
            cout << "\n";

        }
    }


}