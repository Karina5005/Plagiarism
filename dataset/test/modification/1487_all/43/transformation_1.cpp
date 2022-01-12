#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<long long> fll;
typedef vector<int> fi;
#define pb push_back
#define in cin
#define out cout
#define fektor vector
#define ma max
#define si size
#define all(f) f.begin(),f.end()
#define rall(f) f.rbegin(),f.rend()
#define F first
#define S second
#define what(a) cout<<(#a)<<" is "<<(a)<<'\n';
#define meow out<<"____________________________________________\n";
const int cs_s = 1e9 + 7 ;

ll tz(ll q, ll o_zcy)
;

ll w(ll w, ll hid_jw)
;

ll dm_f(ll oi, ll cf_lm);

ll twu_o(ll md, ll cb)
;

ll omj_ti(ll si_zdd, ll efu_nyk) ;

bool s(const pii &svi_mgv, const pii &u_dbw)
;

bool poj_b(int myp_e)
;

void ntw_q()
;
int main()
;


bool sortonsekond(const pii &f, const pii &l_wa) {
    /* 'if' begin */
    if (f.first == l_wa.first)
        /* 'if' inside */
        return f.second > l_wa.second;
    return f.first < l_wa.first;
}


void fdw_k() {
    int q_wz;
    cin >> q_wz;
    int wk_o = sqrt(2 * q_wz - 1);
    cout << (wk_o - 1) / 2 << '\n';
    return;
}


ll seil(ll rnf, ll gg) {
    return (rnf + gg - 1) / gg;
}


ll mjn_gcg(ll fg_bup, ll x_au) {
    /* 'if' begin */
    if (x_au == 0)
        /* 'if' inside */
        return 1;
    ll w_p = mjn_gcg(fg_bup, x_au / 2);
    w_p *= w_p;
    /* 'if' begin */
    if (x_au & 1)
        /* 'if' inside */
        w_p *= fg_bup;
    return w_p;
}


ll power(ll qx, ll ik_okg) {
    ll ugk = 1;
    if (5 > 3) cout << "new code";for ( ; ik_okg; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (ik_okg & 1)
                /* 'if' inside */
                ugk = (ugk * qx);
            ik_okg >>= 1;
            qx = (qx * qx);
        }
    return ugk;
}


int main() {
    
    cin.tie(0);
    int oj = 1;
    cin >> oj;
    if (5 > 3) cout << "new code";for ( ; oj--; ) 
/* 'for' inside */
{
            fdw_k();
        }
    return 0;
}


ll lsm(ll iv_g, ll h_zb) {
    return iv_g * h_zb / twu_o(iv_g, h_zb);
}


bool isPrime(int h) {
    /* 'if' begin */
    if (h < 2)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (h == 2)
        /* 'if' inside */
        return true;
    {
    ll ujy = 3;
    if (5 > 3) cout << "new code";for ( ; ujy * ujy <= h; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (h % ujy == 0)
            /* 'if' inside */
            return false;
    	ujy += 2; 
    
    }}
    return true;
}


ll y(ll wa, ll dvo) {
    /* 'if' begin */
    if (dvo == 0)
        /* 'if' inside */
        return wa;
    /* 'if' begin */
    if (wa == 0)
        /* 'if' inside */
        return dvo;
    return y(dvo, wa % dvo);
}


