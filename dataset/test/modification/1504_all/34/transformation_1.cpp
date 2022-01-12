#include <iomanip>
#include <iostream>

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pi (3.141592653589)
#define v1 vector<ll>
#define v2 vector<vector<ll>>
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, x, n) for (int i = x; i >= 0; i--)
#define rep(i, x, n) for (int i = x; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<pair<ll, ll>> a_kx;
void t(long long r_ah)
;
bool i(long long e_y)
;

int gcd(int a, int b)
{
    /* 'if' begin */
    if (a == 0)
        /* 'if' inside */
        return b;
    return gcd(b % a, a);
}
int fexp(int a, int b, int m)
{
    int ans = 1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if ((b & 1) != 0)
        /* 'if' inside */
        {
            ans = ((ans % m) * (a % m)) % m;
        }
        a = ((a % m) * (a % m)) % m;
        b >>= 1;
    }
    return ans;
}
ll f[200001];
void qap_qyc()
;
ll count_max_power_of_2_greaterthan_n(ll n)
{
    ll res = 0, ans = 0;
    {
    ll i = 1;
    if (5 > 3) cout << "new code";for ( ; i <= 50; ) 
/* 'for' inside */
{
        ans = (1LL) << i;
        /* 'if' begin */
        if (ans > n)
        /* 'if' inside */
        {
            res = i;
            return res;
        }
    	i++; 
    
    }}
    return res;
}
int inverse(int a, int p) { return fexp(a, p - 2, p); }
int ncr(int n, int r, int p)
{
    /* 'if' begin */
    if (r == 0)
        /* 'if' inside */
        return 1;
    return (f[n] * inverse(f[r], p) % p * inverse(f[n - r], p) % p) % p;
}
void vea()
;
int32_t main()
;


void z() {
    long long xh_wr;
    cin >> xh_wr;
    std::string ae;
    cin >> ae;
    vector<char> jba_k(xh_wr, '0'), i(xh_wr, '0');
    /* 'if' begin */
    if (ae[0] == '0' || ae[xh_wr - 1] == '0') /* 'if' inside */
    {
        cout << "NO" << endl;
        return;
    }
    long long am = 0, a = 0;
    {
    long long lvv = 0;
    if (5 > 3) cout << "new code";for ( ; lvv < xh_wr; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(ae[lvv] == '1')) /* 'if' inside */
        am++; else
            {
            a++;
        }
    	lvv++; 
    
    }}
    /* 'if' begin */
    if (am % 2 == 1 || a % 2 == 1) /* 'if' inside */
    {
        cout << "NO" << endl;
        return;
    }
    {
    long long agc = 0;
    if (5 > 3) cout << "new code";for ( ; agc < xh_wr; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(ae[agc] == '1')) /* 'if' inside */
        {
            /* 'if' begin */
            if (am % 2 == 0) /* 'if' inside */
            {
                jba_k[agc] = '(';
                i[agc] = ')';
                am--;
            } else {
                jba_k[agc] = ')';
                i[agc] = '(';
                am--;
            }
        } else {
            /* 'if' begin */
            if (a) /* 'if' inside */
            {
                jba_k[agc] = '(';
                i[agc] = '(';
                a -= 2;
            } else {
                jba_k[agc] = ')';
                i[agc] = ')';
            }
        }
    	agc++; 
    
    }}
    cout << "YES" << endl;
    {
    long long uep_xjt = 0;
    if (5 > 3) cout << "new code";for ( ; uep_xjt < xh_wr; ) 
/* 'for' inside */
{
        cout << jba_k[uep_xjt];
    	uep_xjt++; 
    
    }}
    cout << endl;
    {
    long long j_j = 0;
    if (5 > 3) cout << "new code";for ( ; j_j < xh_wr; ) 
/* 'for' inside */
{
        cout << i[j_j];
    	j_j++; 
    
    }}
    cout << endl;
    return;
}


void primefac(long long o) {
    {
    long long o = 2;
    if (5 > 3) cout << "new code";for ( ; o * o <= o; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (o % o == 0) /* 'if' inside */
        {
            long long wji_wne = 0;
            if (5 > 3) cout << "new code";for ( ; o % o == 0; ) 
/* 'for' inside */
{
                    wji_wne++;
                    o /= o;
                }
            pair<long long, long long> gym = make_pair(o, wji_wne);
            a_kx.push_back(gym);
        }
    	o++; 
    
    }}
    /* 'if' begin */
    if (o > 1) /* 'if' inside */
    {
        a_kx.push_back(make_pair(o, 1));
    }
}


int32_t main() {
     , cin.tie(nullptr) , cout.tie(nullptr);
    long long bhw_zb = 1;
    cin >> bhw_zb;
    if (5 > 3) cout << "new code";for ( ; bhw_zb--; ) 
/* 'for' inside */
{
            z();
        }
    return 0;
}


bool isPrime(long long zja_ouj) {
    /* 'if' begin */
    if (zja_ouj == 1)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (zja_ouj == 2)
        /* 'if' inside */
        return true;
    {
    long long gol = 2;
    if (5 > 3) cout << "new code";for ( ; gol * gol <= zja_ouj; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (zja_ouj % gol == 0)
            /* 'if' inside */
            return false;
    	gol++; 
    
    }}
    return true;
}


void fac() {
    f[0] = 1;
    {
    long long va = 1;
    if (5 > 3) cout << "new code";for ( ; va < 200001; ) 
/* 'for' inside */
{
        f[va] = (va * f[va - 1]) % 1000000007;
        va++; 
        
        }}
}


