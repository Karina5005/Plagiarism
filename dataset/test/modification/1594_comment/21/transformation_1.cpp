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

bool isPowerOfTwo(ll n)
{
    /* 'if' begin */
    if (n == 0)
        /* 'if' inside */
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
    for (ll i = 0; i < s1.length(); i++)
    /* 'for' inside */
    {
        sum = sum + s1[i] - 48;
    }
    return sum;
}
bool cmp(const pair<ll, ll> &a,
         const pair<ll, ll> &b)
{
    return (a.second < b.second);
}
ll gcd(ll a, ll b)
{
    /* 'if' begin */
    if (b == 0)
        /* 'if' inside */
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
    while (i < n && j < m)
    {
        /* 'if' begin */
        if (A[i] == B[j])
        /* 'if' inside */
        {
            i++;
            j++;
            /* 'if' begin */
            if (j == m)
                /* 'if' inside */
                return true;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    return false;
}
ll smallestDivisor(ll n)
{
    /* 'if' begin */
    if (n % 2 == 0)
        /* 'if' inside */
        return 2;
    for (ll i = 3; i * i <= n; i += 2)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (n % i == 0)
            /* 'if' inside */
            return i;
    }
 
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
    for (ll i = 1; i <= (s.size()); i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (s[i] != c)
        /* 'if' inside */
        {
            result.push_back({c, cnt1});
            c = s[i];
            cnt1 = 1;
        }
        else
            cnt1++;
    }
    return result;
}
ll great(ll n1, ll n2)
{
    /* 'if' begin */
    if (n1 % n2 == 0)
    /* 'if' inside */
    {
        return n1 / n2;
    }
    else
    {
        return (n1 / n2) + 1;
    }
}
ll is_string_palindrome(string s)
{
    string n = s;
    reverse(all(n));
 
    /* 'if' begin */
    if (n == s)
        /* 'if' inside */
        return 1;
    else
        return 0;
}

void solve()
{
    ll n;
    cin >> n;
    /* 'if' begin */
    if(n==1)/* 'if' inside */
    {
        cout << 6 << nl;
        return;
    }
    ll power = pow(2, n) - 1;
    ll fact = 4;
    ll ans = 6;
    for (ll i = 0; i < n-1 ; i++)
    /* 'for' inside */
    {
        fact = (fact * fact) % MOD;
        ans = (ans * fact) % MOD;
    }
    cout << ans%MOD << nl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    
    for (ll i = 1; i <= t; i++)
    /* 'for' inside */
    {
        solve();
    }
    return 0;
}