#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}

template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}

void _print() { cerr << "]\n"; }

template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tpiii;
typedef pair<ll, ll> pllll;
typedef vector<pair<ll, ll>> vpll;

int main()
{
    speed;

    ll n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    ll sum1 = 0, sum2 = 0, sum3 = 0;
    ll mn1 = INT_MAX, mn2 = INT_MAX, mn3 = INT_MAX;

    ll a;
    {
    int i = 0;
    for ( ; i < n1; ) 
{
        cin >> a;
        sum1 += a;
        mn1 = min(mn1, a);
    	i++; 
    
    }}
    {
    int i = 0;
    for ( ; i < n2; ) 
{
        cin >> a;
        sum2 += a;
        mn2 = min(mn2, a);
    	i++; 
    
    }}
    {
    int i = 0;
    for ( ; i < n3; ) 
{
        cin >> a;
        sum3 += a;
        mn3 = min(mn3, a);
    	i++; 
    
    }}

    ll total = sum1 + sum2 + sum3;
    ll extra = min({mn1 + mn2, mn2 + mn3, mn1 + mn3, sum1, sum2, sum3});

    cout << total - 2 * extra << "\n";

    return 0;
}