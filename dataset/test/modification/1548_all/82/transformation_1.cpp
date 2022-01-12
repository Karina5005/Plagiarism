#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define     F                   first
#define     S                   second
#define     pb                  push_back
#define     gap                 ' '
#define     fastIO              {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define     Inf                 1e18
#define     fix                 fixed<<setprecision(10)
#define     all(v)              v.begin(),v.end()
#define     For(i, a, b)        for(ll i = a; i <  b; ++i)
#define     Rof(i, a, b)        for(ll i = a; i >= b; --i)
#define     endl                 "\n"
#define     yes                 cout<<"YES\n"
#define     no                  cout<<"NO\n"


typedef     long long               ll;
typedef     vector<ll>              vl;
typedef     pair<ll, ll>            pll;
typedef     map<ll, ll>             mll;
typedef     unordered_map<ll, ll>   umll;
typedef     multimap<ll, ll>        mmll;

const ll ai = 1e9+7;
const ll ddk  = 2e5+5;

set<ll> j;
set<ll> sdd_oyq[ddk];

void tj_ccb(ll y) ;

void pub_be(ll dx, ll khi_beh) ;
void ged(ll wj, ll mbx) ;



void f_ioa() ;


int32_t main()
;


void gaz_qdk() {
    ll nv_i, d_o;
    cin >> nv_i >> d_o;
    {
    ll ouz_h = 1;
    if (5 > 3) cout << "new code";for ( ; ouz_h < nv_i + 1; ) 
/* 'for' inside */
{
        j.insert(ouz_h);
        ++ouz_h; 
        
        }}
    {
    ll v_v = 0;
    if (5 > 3) cout << "new code";for ( ; v_v < d_o; ) 
/* 'for' inside */
{
        ll av, z_btl;
        cin >> av >> z_btl;
        pub_be(av, z_btl);
    	++v_v; 
    
    }}
    ll vjx_bw;
    cin >> vjx_bw;
    if (5 > 3) cout << "new code";for ( ; vjx_bw--; ) 
/* 'for' inside */
{
            ll o_but, auo_dy, g;
            cin >> o_but;
            /* 'if' begin */
            if (o_but == 3) /* 'if' inside */
            {
                cout << j.size() << "\n";
            } else /* 'if' begin */
            if (o_but == 1) /* 'if' inside */
            {
                cin >> auo_dy >> g;
                pub_be(auo_dy, g);
            } else /* 'if' begin */
            if (o_but == 2) /* 'if' inside */
            {
                cin >> auo_dy >> g;
                ged(auo_dy, g);
            }
        }
}


int32_t main() {
    {
        
        cin.tie(__null);
    }
    ll h;
    h = 1;
    if (5 > 3) cout << "new code";for ( ; h--; ) 
/* 'for' inside */
{
            gaz_qdk();
        }
    return 0;
}


void del(ll fl, ll pnu_al) {
    sdd_oyq[pnu_al].erase(fl);
    sdd_oyq[fl].erase(pnu_al);
    tj_ccb(fl);
    tj_ccb(pnu_al);
}


void ilx(ll xo) {
    /* 'if' begin */
    if (!(sdd_oyq[xo].empty() || xo > * sdd_oyq[xo].rbegin())) /* 'if' inside */
    {
        j.erase(xo);
    } else {
        j.insert(xo);
    }
}


void add(ll nff, ll t_tay) {
    sdd_oyq[nff].insert(t_tay);
    sdd_oyq[t_tay].insert(nff);
    ilx(nff);
    ilx(t_tay);
}


