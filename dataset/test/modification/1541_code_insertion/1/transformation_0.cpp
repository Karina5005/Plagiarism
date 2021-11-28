#include <bits/stdc++.h>
using namespace std;
#define int long long int
void SieveOfEratosthenes(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n == 2)
        {
            if (v[1]*v[2] == 3)
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        else if (n == 3)
        {
            int count = 0;
            if (v[1]*v[2] == 3)
                count++;
            if (v[2]*v[3] == 5)
                count++;
            if (v[1]*v[3] == 4)
                count++;
            cout << count << "\n";
        }
        else {
            int pair = 0;
            for (int i = 1; i <= n; i++)
            {
                int num = v[i];
                for (int j = v[i]; j - i <= n; j += v[i])
                {
                    int rem = j - i;
                    if (rem <= i)
                        continue;
                    if (j == i)
                        continue;
                    if (v[rem]*v[i] == j)
                        pair++;
                }
            }
            cout << pair << "\n";
        }
    }


}