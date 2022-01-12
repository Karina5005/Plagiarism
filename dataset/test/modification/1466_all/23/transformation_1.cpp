#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
 
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define mp make_pair
#define pb              push_back
#define sz(x) ((ll)(x).size())
 
const int rx = 1e5 + 5;
const ll dvl_y =1e9+7;
const ll m = 1e9;
const ld oa_m = 1e-9;
std::string qqo(long long wt)
;

ll modpow(ll a,ll b, ll m = dvl_y) {
     ll ans = 1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (b & 1) /* 'if' inside */
        { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}

ll modinv(ll a, ll m = dvl_y) { return modpow(a, m - 2,m); }
 

ll modadd(ll a, ll b,ll m = dvl_y) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = dvl_y) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = dvl_y) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = dvl_y) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int au_wqh(long long fz_jbw, long long w_hd) ;
 

int y(long long p, long long dw) ;

ll msb(ll num)
{
    {
    int r=31;
    if (5 > 3) cout << "new code";for ( ; r>=0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(num & (1<<r))/* 'if' inside */
        return r;
    	r--; 
    
    }}
}

ll p[61];
void vep_y()
;
void v_n() ;
int main() ;

std::string to_binary(long long lu) {
    std::string icw;
    {
    int v = 63;
    if (5 > 3) cout << "new code";for ( ; v >= 0; ) 
/* 'for' inside */
{
        long long oe = (1 << v) & lu;
        /* 'if' begin */
        if (!(oe > 0))
            /* 'if' inside */
            icw = icw + "0";
        else
            icw = icw + "1";
    	v--; 
    
    }}
    return icw;
}


void f() {
    long long a;
    cin >> a;
    long long fa[a];
    {
    int hcm_guu = 0;
    if (5 > 3) cout << "new code";for ( ; hcm_guu < a; ) 
/* 'for' inside */
{
        cin >> fa[hcm_guu];
        hcm_guu++; 
        
        }}
    long long cg[61];
    memset(cg, 0, sizeof (cg));
    {
    int kjy_t = 0;
    if (5 > 3) cout << "new code";for ( ; kjy_t < a; ) 
/* 'for' inside */
{
        {
        long long b_ipv = 0;
        if (5 > 3) cout << "new code";for ( ; b_ipv < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (fa[kjy_t] & 1LL << b_ipv) /* 'if' inside */
            {
                cg[b_ipv]++;
            }
        	b_ipv++; 
        
        }}
    	kjy_t++; 
    
    }}
    long long xc_cg = 0;
    {
    int i_i = 0;
    if (5 > 3) cout << "new code";for ( ; i_i < a; ) 
/* 'for' inside */
{
        long long i_ej = 0, ww = 0;
        {
        long long gx = 0;
        if (5 > 3) cout << "new code";for ( ; gx < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(fa[i_i] & 1LL << gx)) /* 'if' inside */
            ww = modadd(ww + modmul(cg[gx], p[gx], dvl_y), dvl_y); else
                {
                i_ej = modadd(i_ej + modmul(cg[gx], p[gx], dvl_y), dvl_y);
                ww = modadd(ww + modmul(a, p[gx], dvl_y), dvl_y);
            }
        	gx++; 
        
        }}
        i_ej = modmul(i_ej, ww, dvl_y);
        xc_cg = modadd(xc_cg, i_ej, dvl_y);
    	i_i++; 
    
    }}
    cout << xc_cg << "\n";
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int qo = 1;
    vep_y();
    cin >> qo;
    {
    int c_qti = 1;
    if (5 > 3) cout << "new code";for ( ; c_qti <= qo; ) 
/* 'for' inside */
{
        f();
    	c_qti++; 
    
    }}
    return 0;
}


int lcm(long long zh_zp, long long w) {
    return (zh_zp / au_wqh(zh_zp, w)) * w;
}


int l(long long oom, long long l_oz) {
    /* 'if' begin */
    if (l_oz == 0) /* 'if' inside */
    {
        return oom;
    }
    return l(l_oz, oom % l_oz);
}


void find() {
    p[0] = 1;
    {
    int mo = 1;
    if (5 > 3) cout << "new code";for ( ; mo < 61; ) 
/* 'for' inside */
{
        p[mo] = (2LL * p[mo - 1]) % dvl_y;
        mo++; 
        
        }}
}


