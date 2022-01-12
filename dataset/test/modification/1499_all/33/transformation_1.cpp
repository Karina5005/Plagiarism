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
bool h_rc(long long xfi_e)
;
ll fast_power(ll base, ll power)
{
    ll result = 1;
    if (5 > 3) cout << "new code";for ( ; power > 0; ) 
/* 'for' inside */
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
bool st_puc(long long wk_nh)
;
bool wi(long long owi[], long long zd_ckh)
;
bool tvq(std::string d_mk, std::string e, long long t_rf, long long dor_tkw)
;
bool z_w(long long wwk_ras)
;
ll solve()
{
    string du_v;
    cin >> du_v;
    ll a = INT_MAX, b = INT_MIN;
    loop(i, 0, s.size() - 1)
    {
        if (du_v[i] == '1' and du_v[i + 1] == '1')
        {
            a = i;
            break;
        }
    }
    {
    ll i = du_v.size() - 1;
    if (5 > 3) cout << "new code";for ( ; i > 0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (du_v[i] == '0' and du_v[i - 1] == '0')
        /* 'if' inside */
        {
            b = i;
            break;
        }
    	i--; 
    
    }}
    /* 'if' begin */
    if (!(b > a))
    /* 'if' inside */
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin.tie(__null);
    cout.tie(__null);
    long long s;
    cin >> s;
    if (5 > 3) cout << "new code";for ( ; s--; ) 
/* 'for' inside */
{
            solve();
        }
    return 0;
}


bool gt(std::string kz, std::string pm, long long r, long long lr) {
    /* 'if' begin */
    if (r == 0)
        /* 'if' inside */
        return true;
    /* 'if' begin */
    if (lr == 0)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (kz[r - 1] == pm[lr - 1]) /* 'if' inside */
    {
        return gt(kz, pm, r - 1, lr - 1);
    }
    return gt(kz, pm, r, lr - 1);
}


bool isPrime(long long bim) {
    /* 'if' begin */
    if (bim <= 1)
        /* 'if' inside */
        return false;
    {
    long long kzz_za = 2;
    if (5 > 3) cout << "new code";for ( ; kzz_za <= sqrt(bim); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (bim % kzz_za == 0)
            /* 'if' inside */
            return false;
            kzz_za++; 
            
            }}
    return true;
}


bool isPowerOfTwo(long long za_c) {
    /* 'if' begin */
    if (za_c == 0)
        /* 'if' inside */
        return false;
    return (ceil(log2(za_c)) == floor(log2(za_c)));
}


bool isPerfectSquare(long long ew_tgu) {
    /* 'if' begin */
    if (ew_tgu >= 0) /* 'if' inside */
    {
        long long rx = sqrt(ew_tgu);
        return (rx * rx == ew_tgu);
    }
    return false;
}


bool arraySortedOrNot(long long dvl_y[], long long m) {
    /* 'if' begin */
    if (m == 0 || m == 1)
        /* 'if' inside */
        return true;
    {
    long long oa_m = 1;
    if (5 > 3) cout << "new code";for ( ; oa_m < m; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (dvl_y[oa_m - 1] > dvl_y[oa_m])
            /* 'if' inside */
            return false;
            oa_m++; 
            
            }}
    return true;
}


