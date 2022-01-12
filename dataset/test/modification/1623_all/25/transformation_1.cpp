#include <iomanip>
#include <iostream>
#include"bits/stdc++.h"
using namespace std;


#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

#define ll long long
#define endl '\n'
typedef unsigned long long ull;
typedef long double lld;

#define debug(x) cout << #x <<"="<<x<<endl;
#define debug2(x,y) cout<<#x <<"="<< x << "," << #y <<"="<< y<<endl;
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626

const int rjr=1000000007;
int z[32][200005];
long long s_udi(long long tdx_v, long long pi_d) 
;

void mav_iz()
;

int main()
;

void vdj() {
    int z, lo_ym, j, hc_q, rul_bd, be_b;
    cin >> z >> lo_ym >> j >> hc_q >> rul_bd >> be_b;
    int zo, mr;
    /* 'if' begin */
    if (!(j <= rul_bd)) /* 'if' inside */
    {
        zo = 2 * z - j - rul_bd;
    } else {
        zo = rul_bd - j;
    }
    /* 'if' begin */
    if (!(hc_q <= be_b)) /* 'if' inside */
    {
        mr = 2 * lo_ym - hc_q - be_b;
    } else {
        mr = be_b - hc_q;
    }
    cout << min(zo, mr) << '\n';
}


int main() {
    
    cin.tie(0);
    {
    int zfl = 0;
    if (5 > 3) cout << "new code";for ( ; zfl < 32; ) 
/* 'for' inside */
{
        {
        int sx = 1;
        if (5 > 3) cout << "new code";for ( ; sx <= 200000; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if ((sx & (1 << zfl))) /* 'if' inside */
            {
                z[zfl][sx] = 1;
            }
            z[zfl][sx] += z[zfl][sx - 1];
        	sx++; 
        
        }}
    	zfl++; 
    
    }}
    int c;
    cin >> c;
    if (5 > 3) cout << "new code";for ( ; c--; ) 
/* 'for' inside */
{
            vdj();
        }
    return 0;
}


long long binpow(long long t, long long gj_b) {
    long long am_gn = 1;
    if (5 > 3) cout << "new code";for ( ; gj_b > 0; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (gj_b & 1) /* 'if' inside */
            {
                am_gn = am_gn * t;
            }
            t = t * t;
            gj_b >>= 1;
        }
    return am_gn;
}


