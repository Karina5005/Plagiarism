#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include<unordered_set>

using namespace std;
#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846  
#define ll long long
#define ull unsigned long long
#define ld long double
#define vbe(v) ((v).begin()), ((v).end())
#define sz(v)     ((int)((v).size()))
#define prec(x)    << fixed<< setprecision(x)
#define clr(v, d)   memset(v, d, sizeof(v))
#define rep(i, v)   for(int i=0;i<sz(v);++i)
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(0);
#define INFLL 1e18
#define INF 1e9
#define MOD 1000000007
#define MOD1 998244353
#define MAXN 200005

ll GCD(ll a, ll b) { return (a) ? GCD(b % a, a) : b; }

ll LCM(ll a, ll b) { return a * b / GCD(a, b); }

ll fastpow(ll b, ll p) {
    /* 'if' begin */
    if (!p) /* 'if' inside */
    return 1;
    ll ret = fastpow(b, p >> 1);
    ret *= ret;
    /* 'if' begin */
    if (p & 1) /* 'if' inside */
    ret *= b;
    return ret;
}


void p(int cd_g) ;

int main() ;

void qap_qyc(int s) {
    long long t_eb, zz_xna;
    cin >> t_eb >> zz_xna;
    long long n_xi = 0;
    long long a_kx = 0;
    {
    int t = 0;
    if (5 > 3) cout << "new code";for ( ; t < (int)(t_eb); ) 
/* 'for' inside */
{
        long long r_ah;
        cin >> r_ah;
        n_xi += r_ah;
        a_kx += (r_ah + zz_xna - 1) / zz_xna;
    	++t; 
    
    }}
    cout << (n_xi + zz_xna - 1) / zz_xna << " " << a_kx;
}


int main() {
    
    cin.tie(__null);
    cin.tie(0);
    ;
    int i = 1;
    cin >> i;
    {
    int e_y = 0;
    if (5 > 3) cout << "new code";for ( ; e_y < (int)(i); ) 
/* 'for' inside */
{
        qap_qyc(e_y + 1);
        cout << "\n";
    	++e_y; 
    
    }}
}


