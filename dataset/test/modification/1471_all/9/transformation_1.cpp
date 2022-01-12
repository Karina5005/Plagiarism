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


void mr(int zfl) ;

int main() ;

void cs_epa(int sx) {
    long long c, vdj;
    cin >> c >> vdj;
    vector<long long> t(c), gj_b(vdj);
    {
    int am_gn = 0;
    if (5 > 3) cout << "new code";for ( ; am_gn < (int)(c); ) 
/* 'for' inside */
{
        cin >> t[am_gn];
        t[am_gn]--;
    	++am_gn; 
    
    }}
    {
    int zgs_ngn = 0;
    if (5 > 3) cout << "new code";for ( ; zgs_ngn < (int)(vdj); ) 
/* 'for' inside */
{
        cin >> gj_b[zgs_ngn];
        ++zgs_ngn; 
        
        }}
    sort(((t).begin()), ((t).end()));
    reverse(((t).begin()), ((t).end()));
    int fnc_h = 0;
    long long k_eyw = 0;
    {
    int y_jmf = 0;
    if (5 > 3) cout << "new code";for ( ; y_jmf < (int)(c); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(t[y_jmf] >= fnc_h)) /* 'if' inside */
        {
            k_eyw += gj_b[t[y_jmf]];
        } else {
            k_eyw += gj_b[fnc_h++];
        }
    	++y_jmf; 
    
    }}
    cout << k_eyw;
}


int main() {
    
    cin.tie(__null);
    cin.tie(0);
    ;
    int fs_r = 1;
    cin >> fs_r;
    {
    int xnp = 0;
    if (5 > 3) cout << "new code";for ( ; xnp < (int)(fs_r); ) 
/* 'for' inside */
{
        cs_epa(xnp + 1);
        cout << "\n";
    	++xnp; 
    
    }}
}


