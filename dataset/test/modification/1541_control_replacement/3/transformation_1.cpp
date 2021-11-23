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

    {
    int p = 2;
    while (p * p <= n) {
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
            {
            int i = p * p;
            while (i <= n) {
                prime[i] = false;
                i += p; 
                
                }}
        }
    	p++; 
    
    }}
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
    {
    int t = 0;
    while (t < T) {
        int n;
        cin >> n;
        if (!(n % 2 == 0))
        {
            vector<int> v(n + 1);
            {
            int i = 2;
            while (i <= n) {
                v[i] = (i + 1);
                v[i + 1] = (i);

            	i += 2; 
            
            }}
            int c = v[2];
            v[2] = 1;
            v[1] = c;
            {
            int i = 1;
            while (i <= n) {
                cout << v[i] << " ";
            	i++; 
            
            }}
            cout << "\n";

        }
        else {
            {
            int i = 1;
            while (i <= n) {
                cout << i + 1 << " ";
                cout << i << " ";
            	i += 2; 
            
            }}
            cout << "\n";
            t++; continue;
        }
    	t++; 
    
    }}


}