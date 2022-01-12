#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define ll long long int
#define ld long double
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define mll map<ll, ll>
#define pqb priority_queue<ll>
#define pqs priority_queue<ll, vl, greater<ll>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define MOD 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v) reverse(v.begin(), v.end())
ll mn(ll x, ll y, ll z)
{
    return min(min(x, y), z);
}
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    {
    ll i = 2;
    for ( ; i <= sqrt(n); ) 
{
        if (n % i == 0)
            return false;
            i++; 
            
            }}

    return true;
}
ll fast_power(ll base, ll power)
{
    ll result = 1;
    for ( ; power > 0; ) 
{

        if (power % 2 == 1)
        { // Can also use (power & 1) to make code even faster
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
ll nextPerfectSquare(ll N)
{
    ll nextN = floor(sqrt(N)) + 1;

    return nextN;
}
bool isPerfectSquare(ll x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        ll sr = sqrt(x);

        // if product of square root
        // is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
bool arraySortedOrNot(ll arr[], ll n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;

    {
    ll i = 1;
    for ( ; i < n; ) 
{
        if (arr[i - 1] > arr[i])
            return false;
            i++; 
            
            }}

    // No unsorted pair found
    return true;
}
bool isSubSequence(string str1, string str2, ll m, ll n)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (str1[m - 1] == str2[n - 1])
    {
        return isSubSequence(str1, str2, m - 1, n - 1);
    }

    return isSubSequence(str1, str2, m, n - 1);
}
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
ll solve()
{
    string s;
    cin >> s;
    ll a = INT_MAX, b = INT_MIN;
    loop(i, 0, s.size() - 1)
    {
        if (s[i] == '1' and s[i + 1] == '1')
        {
            a = i;
            break;
        }
    }
    {
    ll i = s.size() - 1;
    for ( ; i > 0; ) 
{
        if (s[i] == '0' and s[i - 1] == '0')
        {
            b = i;
            break;
        }
    	i--; 
    
    }}
    if (!(b > a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;

    for ( ; t--; ) 
{
        // cout << solve() << endl;
        solve();
    }
    // // solve();
    // ll x = fast_power(41535484, 71045970);
    // ll y = x % 64735492;
    // cout << y;

    return 0;
}