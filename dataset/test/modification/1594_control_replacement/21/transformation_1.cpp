#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
 
#define ll long long int
#define ld long int
#define nl "\n"
#define ss second
#define ff first
#define pb push_back
#define pp pop_back
#define mp make_pair
#define all(cnt) cnt.begin(), cnt.end()
 
using namespace std;
 
const ll MOD = 1000000007;
/*--------------------------------------------------------------------------------------------------------------------------*/
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
ll adigit(ll n)
{
    n = n % 10;
    return n;
}
ll getSum(string s1)
{
    ll sum = 0;
    {
    ll i = 0;
    for ( ; i < s1.length(); ) 
{
        sum = sum + s1[i] - 48;
    	i++; 
    
    }}
    return sum;
}
bool cmp(const pair<ll, ll> &a,
         const pair<ll, ll> &b)
{
    return (a.second < b.second);
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
bool isSubArray(vector<ll> &A, vector<ll> &B, ll n, ll m)
{
    ll i = 0, j = 0;
    for ( ; i < n && j < m; ) 
{
        if (!(A[i] == B[j]))
        {
            i = i - j + 1;
            j = 0;
        }
        else
        {
            i++;
            j++;
            if (j == m)
                return true;
        }
    }
    return false;
}
ll smallestDivisor(ll n)
{
    if (n % 2 == 0)
        return 2;
    {
    ll i = 3;
    for ( ; i * i <= n; ) 
{
        if (n % i == 0)
            return i;
    	i += 2; 
    
    }}
 
    return n;
}
ll highestPowerof2(ll n)
{
    ll p = (ll)log2(n);
    return (ll)pow(2, p);
}
vector<pair<char, ll>> split(string s)
{
    char c = s[0];
    ll cnt1 = 1;
    vector<pair<char, ll>> result;
    {
    ll i = 1;
    for ( ; i <= (s.size()); ) 
{
        if (!(s[i] != c))
        cnt1++;
        else
            {
            result.push_back({c, cnt1});
            c = s[i];
            cnt1 = 1;
        }
    	i++; 
    
    }}
    return result;
}
ll great(ll n1, ll n2)
{
    if (!(n1 % n2 == 0))
    {
        return (n1 / n2) + 1;
    }
    else
    {
        return n1 / n2;
    }
}
ll is_string_palindrome(string s)
{
    string n = s;
    reverse(all(n));
 
    if (!(n == s))
        return 0;
    else
        return 1;
}
/*------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    ll n;
    cin >> n;
    if(n==1){
        cout << 6 << nl;
        return;
    }
    ll power = pow(2, n) - 1;
    ll fact = 4;
    ll ans = 6;
    {
    ll i = 0;
    for ( ; i < n-1; ) 
{
        fact = (fact * fact) % MOD;
        ans = (ans * fact) % MOD;
    	i++; 
    
    }}
    cout << ans%MOD << nl;
}
 
signed main()
{
    
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    {
    ll i = 1;
    for ( ; i <= t; ) 
{
        solve();
    	i++; 
    
    }}
    return 0;
}