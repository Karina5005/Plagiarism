#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forl(i, e) for (ll i = 0; i < e; i++)
#define forls(i, s, e) for (ll i = s; i < e; i++)
#define rforl(i, s) for (ll i = s; i >= 0; i--)
#define rforls(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
    ll n;
    cin >> n;

    ll a[n];

    forl(i,n)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    forl(i,n-1)
    {
        /* 'if' begin */
        if(a[i+1] == a[i])
        /* 'if' inside */
        {
            continue;
        }
        else
        {
            cout << n-i-1 << endl;
            return;
        }
    }

    cout << 0 << endl;
}

int main()
{
    fast_cin();

    ll t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}