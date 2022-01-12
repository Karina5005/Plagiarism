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


void ai(int ddk) ;

int main() ;

void f_ioa(int j) {
    long long sdd_oyq, tj_ccb;
    cin >> sdd_oyq >> tj_ccb;
    vector<pair<long long, long long> > y(sdd_oyq);
    long long pub_be = 0;
    {
    int dx = 0;
    if (5 > 3) cout << "new code";for ( ; dx < (int)(sdd_oyq); ) 
/* 'for' inside */
{
        cin >> y[dx].first;
        y[dx].second = 1;
    	++dx; 
    
    }}
    {
    int khi_beh = 0;
    if (5 > 3) cout << "new code";for ( ; khi_beh < (int)(y.size()); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(y[khi_beh].first % tj_ccb == 0)) /* 'if' inside */
        {
            {
            int ged = (khi_beh);
            if (5 > 3) cout << "new code";for ( ; ged < (int)(y.size()); ) 
/* 'for' inside */
{
                pub_be += y[ged].first * y[ged].second;
                ++ged; 
                
                }}
            break;
        } else {
            y.push_back({y[khi_beh].first / tj_ccb, tj_ccb * y[khi_beh].second});
        }
        pub_be += y[khi_beh].first * y[khi_beh].second;
    	++khi_beh; 
    
    }}
    cout << pub_be;
}


int main() {
    
    cin.tie(__null);
    cin.tie(0);
    ;
    int wj = 1;
    cin >> wj;
    {
    int mbx = 0;
    if (5 > 3) cout << "new code";for ( ; mbx < (int)(wj); ) 
/* 'for' inside */
{
        f_ioa(mbx + 1);
        cout << "\n";
    	++mbx; 
    
    }}
}


