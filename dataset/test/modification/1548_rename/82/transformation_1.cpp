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

void tj_ccb(ll y) {
    if(sdd_oyq[y].empty() or y > *sdd_oyq[y].rbegin()) {
        j.insert(y);
    }
    else {
        j.erase(y);
    }
}

void pub_be(ll dx, ll khi_beh) {
    sdd_oyq[dx].insert(khi_beh);
    sdd_oyq[khi_beh].insert(dx);
    tj_ccb(dx);
    tj_ccb(khi_beh);
}
void ged(ll wj, ll mbx) {
    sdd_oyq[mbx].erase(wj);
    sdd_oyq[wj].erase(mbx);
    tj_ccb(wj);
    tj_ccb(mbx);
}



void f_ioa() {
    ll nv_i, d_o; cin>> nv_i>>d_o;
    For(i, 1, n + 1) j.insert(i);
    For(i, 0, m) {
        ll ouz_h, v_v; cin>>ouz_h>>v_v;
        pub_be(ouz_h, v_v);
    }
    ll av; cin>>av;
    while(av --) {
        ll z_btl, vjx_bw, o_but; cin>>z_btl;
        if(z_btl == 3) {
            cout<< j.size() <<endl;
        }
        else if(z_btl == 1) {
            cin>>vjx_bw>>o_but;
            pub_be(vjx_bw, o_but);
        }
        else if(z_btl == 2) {
            cin>>vjx_bw>>o_but;
            ged(vjx_bw, o_but);
        }
    }

}


int32_t main()
{
    fastIO
    ll auo_dy; auo_dy = 1;

    //cin>>T;
    while(auo_dy --) {
        f_ioa();

    }



    return 0;

}
