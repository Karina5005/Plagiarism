#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<vector <ll> > vvl;

const ll ai=1e11,ddk=1e9+7,j=LLONG_MAX;
const ld sdd_oyq=acos(-1);

#define pb      push_back
#define F       first
#define S       second
#define ins     insert
#define el      "\n"
#define ell     cout<<el
#define sp      " "
#define all(x)  x.begin(),x.end()
#define cg      cout<<"||"
#define setp(x) fixed<<setprecision(x)
#define dbg(x)  cout<< #x <<": "<<x<<" ";

template<typename T, typename U> static inline void amin(T &tj_ccb, U y){ if(y<tj_ccb) tj_ccb=y; }
template<typename T, typename U> static inline void amax(T &pub_be, U dx){ if(pub_be<dx) pub_be=dx; }
 
mt19937 khi_beh (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &ged, pair<A, B> const &wj) { return ged << "{" << wj.first << "," << wj.second << "}"; }
template <typename A> ostream& operator<< (ostream &mbx, vector<A> const &f_ioa) {mbx << "["; for(int nv_i = 0; nv_i < f_ioa.size(); nv_i++) {if (nv_i) mbx << ","; mbx << f_ioa[nv_i];} return mbx << "]";}
template <typename A, typename B> istream& operator>> (istream& d_o, pair<A, B> &ouz_h) {d_o >> ouz_h.first; return d_o >> ouz_h.second;}
template <typename A> istream& operator>> (istream& v_v, vector<A> &av){for(int z_btl = 0; z_btl < av.size()-1; z_btl++) v_v >> av[z_btl]; return v_v >> av[av.size()-1];}


ll vjx_bw(vl &o_but,ll auo_dy){
    ll g=0;ll h=o_but.size();
    for(ll gaz_qdk=auo_dy-1;gaz_qdk<=auo_dy+1;gaz_qdk++){
        if(gaz_qdk>0 and gaz_qdk<(h-1) and o_but[gaz_qdk]>o_but[gaz_qdk-1] and o_but[gaz_qdk]>o_but[gaz_qdk+1]){
            g++;
        }
        else if(gaz_qdk>0 and gaz_qdk<(h-1) and o_but[gaz_qdk]<o_but[gaz_qdk-1] and o_but[gaz_qdk]<o_but[gaz_qdk+1]){
            g++;
        }
    }
    return g;
}

signed main(){
    // fast io
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);ll fl,pnu_al,xo;
    ll nff=1;
    cin>>nff;
    while(nff--){
        ll t_tay;cin>>t_tay;
        vl ilx(t_tay);
        for(fl=0;fl<t_tay;fl++)
        {
            cin>>ilx[fl];
        }
        ll ire_y=0;
        vector <char> ai_q(t_tay,'N');
        for(fl=1;fl<=t_tay-2;fl++){
            // dbg(i);dbg(v[i-1]);dbg(v[i]);dbg(v[i+1]);ell;
            if(ilx[fl]>ilx[fl-1] and ilx[fl]>ilx[fl+1]){
                ire_y++;
            }
            else if(ilx[fl]<ilx[fl-1] and ilx[fl]<ilx[fl+1]){
                ire_y++;
            }
        }
        // dbg(sta);ell;
        ll re_zim=ire_y;
        for(fl=1;fl<=t_tay-2;fl++){
            ll o_wa=ilx[fl];
            ll hm=vjx_bw(ilx,fl);
            ll pte=ire_y-hm;
            ll iu=ilx[fl-1];
            ll s_bv=ilx[fl+1];
            ilx[fl]=min(iu,s_bv);
            ll g=vjx_bw(ilx,fl);
            ilx[fl]=max(iu,s_bv);
            ll lyf=vjx_bw(ilx,fl);
            ll f_eru=min(g,lyf);
            pte+=f_eru;
            re_zim=min(pte,re_zim);
            // dbg(i);dbg(rn);dbg(left);dbg(right);dbg(v[i]);dbg(ns);dbg(tot);dbg(ans);ell;
            ilx[fl]=o_wa;
        }
        cout<<re_zim<<el;
    }
}