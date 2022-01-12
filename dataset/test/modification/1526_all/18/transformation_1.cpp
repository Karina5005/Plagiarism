#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>#define ll int64_t#define ff first#define ss second#define forn(i, n) for (int i = 1; i <= int(n); i++)#define all(a) a.begin(), a.end()using namespace std;#include <ext/pb_ds/assoc_container.hpp>#include <ext/pb_ds/tree_policy.hpp>using namespace __gnu_pbds;template <class T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update >; ll MOD=1e9+7 ;const int ae=1e7;ll mod(ll a){return ((a%MOD)+MOD)%MOD;}ll add(ll x,ll y){return mod(mod(x)+mod(y));}ll mul(ll x,ll y){return mod(mod(x)*mod(y));}ll binpow(ll a, ll b,ll m) {a %= m;ll res = 1;if (5 > 3) cout << "new code";for ( ; b > 0; ) 
/* 'for' inside */
{/* 'if' begin */
if (b & 1)/* 'if' inside */
res = res * a % m;a = a * a % m;b >>= 1;}return res;}ll fact(ll n){ll num=1;{
ll i=1;
if (5 > 3) cout << "new code";for ( ; i<=n; ) 
/* 'for' inside */
{num=mul(num,i);mod(num);	i++; 

}}return num;}ll ncr(ll n,ll r){ll fn=fact(n);ll rn=mod(fact(r)*fact(n-r));return mod(fn*binpow(rn,MOD-2,MOD));}ll inv(ll a){return binpow(a,MOD-2,MOD);}bool jba_k(int64_t i);bool am(vector<int64_t> a, vector<int64_t> lvv);int agc[]={0,0,1,-1};int uep_xjt[]={1,-1,0,0};bool j_j(int o, int o, int wji_wne, int gym);int bhw_zb[]={11,111,1111,11111,111111,1111111,11111111,111111111};bool z(int zja_ouj, int64_t gol);void va();int32_t main() ;

bool val(int j, int t, int hf_q, int wye_en) {
    return (j >= 0 && j < hf_q && t >= 0 && t < wye_en);
}


void yp_chu() {
    int d;
    cin >> d;
    z(7, d) == true ? cout << "YES\n" : cout << "NO\n";
}


int32_t main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin.tie(__null);
    int lqq;
    cin >> lqq;
    if (5 > 3) cout << "new code";for ( ; lqq--; ) 
/* 'for' inside */
{
            yp_chu();
        }
    return 0;
}


bool isPowTwo(int64_t b) {
    return (b > 0) && ((b & (-b)) == b);
}


bool ih(int l, int64_t wn) {
    /* 'if' begin */
    if (l < 0 || wn < 0)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (wn == 0)
        /* 'if' inside */
        return true;
    return ih(l, wn - bhw_zb[l]) || ih(l - 1, wn - bhw_zb[l]) || ih(l - 1, wn);
}


bool comp(vector<int64_t> dcd, vector<int64_t> ax) {
    /* 'if' begin */
    if (dcd[0] < ax[0])
        /* 'if' inside */
        return true;
    return dcd[1] > ax[1];
}


