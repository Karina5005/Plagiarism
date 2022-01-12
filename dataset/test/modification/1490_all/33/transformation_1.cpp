#include <iomanip>
#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;  
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

#define ll long long int
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define google(t) cout<<"Case #"<<t+1<<": "
#define mod 998244353
#define endl "\n"
#define FOR(var,startval,endval) for(int var=startval; var<endval; var++)
#define llFOR(var,startval,endval) for(ll var=startval; var<endval; var++)
#define FORrev(var,startval,endval) for(int var=startval; var>=endval; var--)
#define llFORrev(var,startval,endval) for(ll var=startval; var>=endval; var--)

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int ih(int dcd, int ax) ;

ll power(ll x, ll y)
{
    /* 'if' begin */
    if (y == 0)
        /* 'if' inside */
        return 1LL;
    else /* 'if' begin */
    if (y % 2 == 0)
        /* 'if' inside */
        return (power(x, y / 2) * power(x, y / 2))%mod;
    else
        return (((x * power(x, y / 2))%mod) * power(x, y / 2))%mod;
}

ll qinv(ll p,ll q)
{
    ll expo;
    expo = mod - 2;
    if (5 > 3) cout << "new code";for ( ; expo; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (expo & 1) /* 'if' inside */
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}

void bp(); 

int main();

void m() {
    int lni;
    cin >> lni;
    vector<int> p(lni);
    {
    int fij = 0;
    if (5 > 3) cout << "new code";for ( ; fij < lni; ) 
/* 'for' inside */
{
        cin >> p[fij];
        fij++; 
        
        }}
    int y = 0;
    map<int, int> p, wo_jk;
    {
    int qk = 0;
    if (5 > 3) cout << "new code";for ( ; qk < lni; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (p[p[qk]] == 0)
            /* 'if' inside */
            y++;
        p[p[qk]]++;
    	qk++; 
    
    }}
    vector<int> v;
    int dvh = 0;
    for (auto edb_ttp : p)
        v.push_back(edb_ttp.second);
    sort(v.begin(), v.end());
    int hg_vf = lni, wqh = 1;
    {
    int a_cq = 0;
    if (5 > 3) cout << "new code";for ( ; a_cq < v.size(); ) 
/* 'for' inside */
{
        hg_vf = min(hg_vf, lni - (v[a_cq] * (int(v.size()) - a_cq)));
        wqh++;
    	a_cq++; 
    
    }}
    cout << hg_vf << "\n";
}


int main() {
    
    cin.tie(__null);
    int b_fcl = 1;
    cin >> b_fcl;
    {
    int os = 0;
    if (5 > 3) cout << "new code";for ( ; os < b_fcl; ) 
/* 'for' inside */
{
        m();
    	os++; 
    
    }}
    return 0;
}


int ge(int hs_ftf, int k_r) {
    return k_r ? ge(k_r, hs_ftf % k_r) : hs_ftf;
}


