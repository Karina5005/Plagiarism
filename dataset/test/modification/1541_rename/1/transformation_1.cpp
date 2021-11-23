#include <bits/stdc++.h>
using namespace std;
#define int long long int
void scm(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool uj[n + 1];
    memset(uj, true, sizeof(uj));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (uj[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                uj[i] = false;
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
        vector<int> diu(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> diu[i];
        }
        if (n == 2)
        {
            if (diu[1]*diu[2] == 3)
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        else if (n == 3)
        {
            int count = 0;
            if (diu[1]*diu[2] == 3)
                count++;
            if (diu[2]*diu[3] == 5)
                count++;
            if (diu[1]*diu[3] == 4)
                count++;
            cout << count << "\n";
        }
        else {
            int pair = 0;
            for (int i = 1; i <= n; i++)
            {
                int num = diu[i];
                for (int j = diu[i]; j - i <= n; j += diu[i])
                {
                    int rem = j - i;
                    if (rem <= i)
                        continue;
                    if (j == i)
                        continue;
                    if (diu[rem]*diu[i] == j)
                        pair++;
                }
            }
            cout << pair << "\n";
        }
    }


}