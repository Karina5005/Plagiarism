#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pi pair<int,int> 
#define pll pair<ll,ll>
#define pb push_back
#define eb emplace_back
#define nl "\n"
#define NL "\n"
#define Nl "\n"
#define lp(i,n) for(int i=0;i<n;i++)
#define rlp(n,j) for(int i=n-1;i>=0;i--)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Debug(x) cout<< (#x) << " is " << (x) << nl;

int dx[] = { 1, 0, -1, 0, 1, 1, -1 ,-1 };
int dy[] = { 0, 1, 0, -1 , 1, -1, 1, -1 };
const double PI = acos(-1.);
const double eps = 1e-15;
const int MOD = 1e9 + 7;
ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    ll s = power(x, y / 2);
    s *= s;
    //s %= MOD;
    if (y & 1)
        s *= x;
    //s %= MOD;
    return s;
}
ll Ceil(ll x, ll y)
{
    return (x + y - 1) / y;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> ones_a, ones_b;
    lp(i, 31)
    {
        if (a & (1 << i))
            ones_a.emplace_back(i);
        if (b & (1 << i))
            ones_b.emplace_back(i);
    }
    if (ones_a.size() < ones_b.size() or a > b)
    {
        cout << "NO\n";
        return;
    }
    lp(i, ones_b.size())
    {
        if (ones_b[i] < ones_a[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
     cin.tie(NULL);
    int TESTS = 1;
    cin >> TESTS;
    for ( ; TESTS--; ) 
{
        solve();
    }

}
//parity