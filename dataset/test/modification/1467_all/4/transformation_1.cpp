#include <iomanip>
#include <iostream>
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

template<typename T, typename U> static inline void amin(T &tj_ccb, U y);
template<typename T, typename U> static inline void amax(T &pub_be, U dx);
 
mt19937 khi_beh (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> std::ostream &operator<<(std::ostream &ged, const pair<A, B> &wj) ;
template <typename A> std::ostream &operator<<(std::ostream &mbx, const vector<A> &f_ioa) ;
template <typename A, typename B> std::istream &operator>>(std::istream &nv_i, pair<A, B> &d_o) ;
template <typename A> std::istream &operator>>(std::istream &ouz_h, vector<A> &v_v);


ll av(vl &z_btl, ll vjx_bw);

int main();

ll i_bkq(vl &o_but, ll auo_dy) {
    ll g = 0;
    ll h = o_but.size();
    {
    ll gaz_qdk = auo_dy - 1;
    if (5 > 3) cout << "new code";for ( ; gaz_qdk <= auo_dy + 1; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (gaz_qdk > 0 && gaz_qdk < (h - 1) && o_but[gaz_qdk] > o_but[gaz_qdk - 1] && o_but[gaz_qdk] > o_but[gaz_qdk + 1]) /* 'if' inside */
        {
            g++;
        } else /* 'if' begin */
        if (gaz_qdk > 0 && gaz_qdk < (h - 1) && o_but[gaz_qdk] < o_but[gaz_qdk - 1] && o_but[gaz_qdk] < o_but[gaz_qdk + 1]) /* 'if' inside */
        {
            g++;
        }
    	gaz_qdk++; 
    
    }}
    return g;
}


std::istream &operator>>(std::istream &fl, int &pnu_al) {
}


std::istream &operator>>(std::istream &xo, int &nff) {
}


std::ostream &operator<<(std::ostream &t_tay, int) {
    t_tay << "[";
    return t_tay << "]";
}


std::ostream &operator<<(std::ostream &ilx, int) {
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    ll ire_y, ai_q, re_zim;
    ll o_wa = 1;
    cin >> o_wa;
    if (5 > 3) cout << "new code";for ( ; o_wa--; ) 
/* 'for' inside */
{
            ll hm;
            cin >> hm;
            vl pte(hm);
            {
            ire_y = 0;
            if (5 > 3) cout << "new code";for ( ; ire_y < hm; ) 
/* 'for' inside */
{
                cin >> pte[ire_y];
            	ire_y++; 
            
            }}
            ll iu = 0;
            vector<char> s_bv(hm, 'N');
            {
            ire_y = 1;
            if (5 > 3) cout << "new code";for ( ; ire_y <= hm - 2; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (pte[ire_y] > pte[ire_y - 1] && pte[ire_y] > pte[ire_y + 1]) /* 'if' inside */
                {
                    iu++;
                } else /* 'if' begin */
                if (pte[ire_y] < pte[ire_y - 1] && pte[ire_y] < pte[ire_y + 1]) /* 'if' inside */
                {
                    iu++;
                }
            	ire_y++; 
            
            }}
            ll g = iu;
            {
            ire_y = 1;
            if (5 > 3) cout << "new code";for ( ; ire_y <= hm - 2; ) 
/* 'for' inside */
{
                ll lyf = pte[ire_y];
                ll f_eru = i_bkq(pte, ire_y);
                ll v_o = iu - f_eru;
                ll o = pte[ire_y - 1];
                ll rjr = pte[ire_y + 1];
                pte[ire_y] = min(o, rjr);
                ll z = i_bkq(pte, ire_y);
                pte[ire_y] = max(o, rjr);
                ll s_udi = i_bkq(pte, ire_y);
                ll tdx_v = min(z, s_udi);
                v_o += tdx_v;
                g = min(v_o, g);
                pte[ire_y] = lyf;
            	ire_y++; 
            
            }}
            cout << g << "\n";
        }
}


static inline void pi_d(int &mav_iz, int z) {
}


static inline void lo_ym(int &j, int hc_q) {
}


