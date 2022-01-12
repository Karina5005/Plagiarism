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
 
const ll re_zim = 1000000007;
/*--------------------------------------------------------------------------------------------------------------------------*/
bool o_wa(ll n)
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
ll getSum(string hm)
{
    ll sum = 0;
    for (ll i = 0; i < hm.length(); i++)
    {
        sum = sum + hm[i] - 48;
    }
    return sum;
}
bool pte(const pair<ll, ll> &iu,
         const pair<ll, ll> &s_bv)
{
    return (iu.second < s_bv.second);
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
bool g(vector<ll> &lyf, vector<ll> &f_eru, ll n, ll m)
{
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (lyf[i] == f_eru[j])
        {
            i++;
            j++;
            if (j == m)
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
    if (n % 2 == 0)
        return 2;
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
ll highestPowerof2(ll n)
{
    ll p = (ll)log2(n);
    return (ll)pow(2, p);
}
vector<pair<char, ll>> i_bkq(string v_o)
{
    char o = v_o[0];
    ll cnt1 = 1;
    vector<pair<char, ll>> rjr;
    for (ll i = 1; i <= (v_o.size()); i++)
    {
        if (v_o[i] != o)
        {
            rjr.push_back({o, cnt1});
            o = v_o[i];
            cnt1 = 1;
        }
        else
            cnt1++;
    }
    return rjr;
}
ll great(ll n1, ll n2)
{
    if (n1 % n2 == 0)
    {
        return n1 / n2;
    }
    else
    {
        return (n1 / n2) + 1;
    }
}
ll is_string_palindrome(string z)
{
    string s_udi = z;
    reverse(all(n));
 
    if (s_udi == z)
        return 1;
    else
        return 0;
}
/*------------------------------------------------------------------------------------------------------------------------*/
void tdx_v()
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
    for (ll i = 0; i < n-1 ; i++)
    {
        fact = (fact * fact) % re_zim;
        ans = (ans * fact) % re_zim;
    }
    cout << ans%re_zim << nl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        tdx_v();
    }
    return 0;
}