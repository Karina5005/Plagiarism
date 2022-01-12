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

const int gaz_qdk=1000000007;
int fl[32][200005];
long long pnu_al(long long xo, long long nff) 
;

void t_tay()
;

int main()
;

void f_eru() {
    int ilx, ire_y, ai_q, re_zim, o_wa, hm;
    cin >> ilx >> ire_y >> ai_q >> re_zim >> o_wa >> hm;
    int pte, iu;
    /* 'if' begin */
    if (!(ai_q <= o_wa)) /* 'if' inside */
    {
        pte = 2 * ilx - ai_q - o_wa;
    } else {
        pte = o_wa - ai_q;
    }
    /* 'if' begin */
    if (!(re_zim <= hm)) /* 'if' inside */
    {
        iu = 2 * ire_y - re_zim - hm;
    } else {
        iu = hm - re_zim;
    }
    cout << min(pte, iu) << '\n';
}


int main() {
    
    cin.tie(0);
    {
    int s_bv = 0;
    if (5 > 3) cout << "new code";for ( ; s_bv < 32; ) 
/* 'for' inside */
{
        {
        int g = 1;
        if (5 > 3) cout << "new code";for ( ; g <= 200000; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if ((g & (1 << s_bv))) /* 'if' inside */
            {
                fl[s_bv][g] = 1;
            }
            fl[s_bv][g] += fl[s_bv][g - 1];
        	g++; 
        
        }}
    	s_bv++; 
    
    }}
    int lyf;
    cin >> lyf;
    if (5 > 3) cout << "new code";for ( ; lyf--; ) 
/* 'for' inside */
{
            f_eru();
        }
    return 0;
}


long long binpow(long long i_bkq, long long v_o) {
    long long o = 1;
    if (5 > 3) cout << "new code";for ( ; v_o > 0; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (v_o & 1) /* 'if' inside */
            {
                o = o * i_bkq;
            }
            i_bkq = i_bkq * i_bkq;
            v_o >>= 1;
        }
    return o;
}


