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
 
const int jdv = 1e5 + 5;
const ll w =1e9+7;
const ll qz_tdq = 1e9;
const ld sz_ipz = 1e-9;
std::string mmr_rcz(long long it)
;

ll modpow(ll a,ll b, ll m = w) {
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

ll modinv(ll a, ll m = w) { return modpow(a, m - 2,m); }
 

ll modadd(ll a, ll b,ll m = w) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = w) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = w) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = w) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int mmd(long long ue_mfc, long long kp) ;
 

int is(long long ef, long long ang_cvn) ;

ll msb(ll num)
{
    {
    int lc=31;
    if (5 > 3) cout << "new code";for ( ; lc>=0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(num & (1<<lc))/* 'if' inside */
        return lc;
    	lc--; 
    
    }}
}

vector<ll>v(61);
void ihd()
;
void rc() ;
int main() ;

std::string to_binary(long long c) {
    std::string msb;
    {
    int yhf = 63;
    if (5 > 3) cout << "new code";for ( ; yhf >= 0; ) 
/* 'for' inside */
{
        long long u_tni = (1 << yhf) & c;
        /* 'if' begin */
        if (!(u_tni > 0))
            /* 'if' inside */
            msb = msb + "0";
        else
            msb = msb + "1";
    	yhf--; 
    
    }}
    return msb;
}


void lx_rs() {
    long long nk;
    cin >> nk;
    vector<long long> utx(nk);
    {
    int n = 0;
    if (5 > 3) cout << "new code";for ( ; n < nk; ) 
/* 'for' inside */
{
        cin >> utx[n];
        n++; 
        
        }}
    long long ey[61];
    memset(ey, 0, sizeof (ey));
    {
    int aop = 0;
    if (5 > 3) cout << "new code";for ( ; aop < nk; ) 
/* 'for' inside */
{
        {
        long long e_i = 0;
        if (5 > 3) cout << "new code";for ( ; e_i < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (utx[aop] & 1LL << e_i) /* 'if' inside */
            {
                ey[e_i]++;
            }
        	e_i++; 
        
        }}
    	aop++; 
    
    }}
    long long l = 0;
    {
    int u_g = 0;
    if (5 > 3) cout << "new code";for ( ; u_g < nk; ) 
/* 'for' inside */
{
        long long jlr = 0, fhn = 0;
        {
        long long j = 0;
        if (5 > 3) cout << "new code";for ( ; j < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(utx[u_g] & 1LL << j)) /* 'if' inside */
            fhn = modadd(fhn + modmul(ey[j], v[j], w), w); else
                {
                jlr = modadd(jlr + modmul(ey[j], v[j], w), w);
                fhn = modadd(fhn + modmul(nk, v[j], w), w);
            }
        	j++; 
        
        }}
        jlr = modmul(jlr, fhn, w);
        l = modadd(l, jlr, w);
    	u_g++; 
    
    }}
    cout << l << "\n";
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int zn_m = 1;
    ihd();
    cin >> zn_m;
    {
    int w_n = 1;
    if (5 > 3) cout << "new code";for ( ; w_n <= zn_m; ) 
/* 'for' inside */
{
        lx_rs();
    	w_n++; 
    
    }}
    return 0;
}


int lcm(long long g, long long w) {
    return (g / mmd(g, w)) * w;
}


int aao_be(long long t, long long uu) {
    /* 'if' begin */
    if (uu == 0) /* 'if' inside */
    {
        return t;
    }
    return aao_be(uu, t % uu);
}


void find() {
    v[0] = 1;
    {
    int l = 1;
    if (5 > 3) cout << "new code";for ( ; l < 61; ) 
/* 'for' inside */
{
        v[l] = (2LL * v[l - 1]) % w;
        l++; 
        
        }}
}


