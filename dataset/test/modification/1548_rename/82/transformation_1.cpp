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

const ll z_btl = 1e9+7;
const ll vjx_bw  = 2e5+5;

set<ll> o_but;
set<ll> auo_dy[vjx_bw];

void g(ll h) {
    if(auo_dy[h].empty() or h > *auo_dy[h].rbegin()) {
        o_but.insert(h);
    }
    else {
        o_but.erase(h);
    }
}

void gaz_qdk(ll fl, ll pnu_al) {
    auo_dy[fl].insert(pnu_al);
    auo_dy[pnu_al].insert(fl);
    g(fl);
    g(pnu_al);
}
void xo(ll nff, ll t_tay) {
    auo_dy[t_tay].erase(nff);
    auo_dy[nff].erase(t_tay);
    g(nff);
    g(t_tay);
}



void ilx() {
    ll ire_y, ai_q; cin>> ire_y>>ai_q;
    For(i, 1, n + 1) o_but.insert(i);
    For(i, 0, m) {
        ll re_zim, o_wa; cin>>re_zim>>o_wa;
        gaz_qdk(re_zim, o_wa);
    }
    ll hm; cin>>hm;
    while(hm --) {
        ll pte, iu, s_bv; cin>>pte;
        if(pte == 3) {
            cout<< o_but.size() <<endl;
        }
        else if(pte == 1) {
            cin>>iu>>s_bv;
            gaz_qdk(iu, s_bv);
        }
        else if(pte == 2) {
            cin>>iu>>s_bv;
            xo(iu, s_bv);
        }
    }

}


int32_t main()
{
    fastIO
    ll g; g = 1;

    //cin>>T;
    while(g --) {
        ilx();

    }



    return 0;

}
