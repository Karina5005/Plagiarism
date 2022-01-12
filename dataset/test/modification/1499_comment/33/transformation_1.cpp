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
    
    /* 'if' begin */
    if (n <= 1)
        /* 'if' inside */
        return false;

    
    for (ll i = 2; i <= sqrt(n); i++)
        /* 'for' inside */
        /* 'if' begin */
        if (n % i == 0)
            /* 'if' inside */
            return false;

    return true;
}
ll fast_power(ll base, ll power)
{
    ll result = 1;
    while (power > 0)
    {

        /* 'if' begin */
        if (power % 2 == 1)
        /* 'if' inside */
        { 
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; 
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
    
    /* 'if' begin */
    if (x >= 0)
    /* 'if' inside */
    {

        ll sr = sqrt(x);

        
        return (sr * sr == x);
    }
    
    return false;
}
bool arraySortedOrNot(ll arr[], ll n)
{
    
    /* 'if' begin */
    if (n == 0 || n == 1)
        /* 'if' inside */
        return true;

    for (ll i = 1; i < n; i++)

        
        /* 'for' inside */
        /* 'if' begin */
        if (arr[i - 1] > arr[i])
            /* 'if' inside */
            return false;

    
    return true;
}
bool isSubSequence(string str1, string str2, ll m, ll n)
{
    /* 'if' begin */
    if (m == 0)
        /* 'if' inside */
        return true;
    /* 'if' begin */
    if (n == 0)
        /* 'if' inside */
        return false;

    /* 'if' begin */
    if (str1[m - 1] == str2[n - 1])
    /* 'if' inside */
    {
        return isSubSequence(str1, str2, m - 1, n - 1);
    }

    return isSubSequence(str1, str2, m, n - 1);
}
bool isPowerOfTwo(ll n)
{
    /* 'if' begin */
    if (n == 0)
        /* 'if' inside */
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
        /* 'if' begin */
        if (s[i] == '1' and s[i + 1] == '1')
        /* 'if' inside */
        {
            a = i;
            break;
        }
    }
    for (ll i = s.size() - 1; i > 0; i--)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (s[i] == '0' and s[i - 1] == '0')
        /* 'if' inside */
        {
            b = i;
            break;
        }
    }
    /* 'if' begin */
    if (b > a)
    /* 'if' inside */
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    
    freopen("input.txt", "r", stdin);
    
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
    {
        
        solve();
    }
    

    return 0;
}