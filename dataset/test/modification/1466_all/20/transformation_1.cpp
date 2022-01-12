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
 
const int p = 1e5 + 5;
const ll wo_jk =1e9+7;
const ll qk = 1e9;
const ld v = 1e-9;
std::string dvh(long long edb_ttp)
;

ll modpow(ll a,ll b, ll m = wo_jk) {
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

ll modinv(ll a, ll m = wo_jk) { return modpow(a, m - 2,m); }
 

ll modadd(ll a, ll b,ll m = wo_jk) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = wo_jk) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = wo_jk) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = wo_jk) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int hg_vf(long long wqh, long long a_cq) ;
 

int b_fcl(long long os, long long m) ;

ll msb(ll num)
{
    {
    int hs_ftf=31;
    if (5 > 3) cout << "new code";for ( ; hs_ftf>=0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(num & (1<<hs_ftf))/* 'if' inside */
        return hs_ftf;
    	hs_ftf--; 
    
    }}
}

vector<ll>k_r(61);
void ge()
;
void h_rc() ;
int main() ;

std::string to_binary(long long xfi_e) {
    std::string st_puc;
    {
    int wk_nh = 63;
    if (5 > 3) cout << "new code";for ( ; wk_nh >= 0; ) 
/* 'for' inside */
{
        long long wi = (1 << wk_nh) & xfi_e;
        /* 'if' begin */
        if (!(wi > 0))
            /* 'if' inside */
            st_puc = st_puc + "0";
        else
            st_puc = st_puc + "1";
    	wk_nh--; 
    
    }}
    return st_puc;
}


void r() {
    long long owi;
    cin >> owi;
    vector<long long> zd_ckh(owi);
    {
    int tvq = 0;
    if (5 > 3) cout << "new code";for ( ; tvq < owi; ) 
/* 'for' inside */
{
        cin >> zd_ckh[tvq];
        tvq++; 
        
        }}
    vector<long long> d_mk(61, 0);
    {
    int e = 0;
    if (5 > 3) cout << "new code";for ( ; e < owi; ) 
/* 'for' inside */
{
        {
        long long t_rf = 0;
        if (5 > 3) cout << "new code";for ( ; t_rf < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (zd_ckh[e] & 1LL << t_rf) /* 'if' inside */
            {
                d_mk[t_rf]++;
            }
        	t_rf++; 
        
        }}
    	e++; 
    
    }}
    long long dor_tkw = 0;
    {
    int z_w = 0;
    if (5 > 3) cout << "new code";for ( ; z_w < owi; ) 
/* 'for' inside */
{
        long long wwk_ras = 0, du_v = 0;
        {
        long long s = 0;
        if (5 > 3) cout << "new code";for ( ; s < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(zd_ckh[z_w] & 1LL << s)) /* 'if' inside */
            du_v = modadd(du_v + modmul(d_mk[s], k_r[s], wo_jk), wo_jk); else
                {
                wwk_ras = modadd(wwk_ras + modmul(d_mk[s], k_r[s], wo_jk), wo_jk);
                du_v = modadd(du_v + modmul(owi, k_r[s], wo_jk), wo_jk);
            }
        	s++; 
        
        }}
        wwk_ras = modmul(wwk_ras, du_v, wo_jk);
        dor_tkw = modadd(dor_tkw, wwk_ras, wo_jk);
    	z_w++; 
    
    }}
    cout << dor_tkw << "\n";
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int kz = 1;
    ge();
    cin >> kz;
    {
    int pm = 1;
    if (5 > 3) cout << "new code";for ( ; pm <= kz; ) 
/* 'for' inside */
{
        r();
    	pm++; 
    
    }}
    return 0;
}


int lcm(long long lr, long long gt) {
    return (lr / hg_vf(lr, gt)) * gt;
}


int za_c(long long bim, long long kzz_za) {
    /* 'if' begin */
    if (kzz_za == 0) /* 'if' inside */
    {
        return bim;
    }
    return za_c(kzz_za, bim % kzz_za);
}


void find() {
    k_r[0] = 1;
    {
    int ew_tgu = 1;
    if (5 > 3) cout << "new code";for ( ; ew_tgu < 61; ) 
/* 'for' inside */
{
        k_r[ew_tgu] = (2LL * k_r[ew_tgu - 1]) % wo_jk;
        ew_tgu++; 
        
        }}
}


