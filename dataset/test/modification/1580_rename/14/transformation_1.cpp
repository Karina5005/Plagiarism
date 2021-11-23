// @author â
//
//  âââââ  âââ       ââââ âââââ ââââ âââââ âââ
// âââ âââââââââ    âââââââ ââââââââââ âââââââââ
//âââââââââââ  âââ  âââ    âââââââ    âââââââ  âââ
//âââ  ââââââââââââ âââ    âââ âââ    âââ âââââââââ
//ââââââââ ââ   ââââââââ   ââââââââ   ââââ ââ   ââââ
// ââ   â  ââ   âââââ ââ   â  ââ ââ   â  â ââ   ââââ
//  â   â   â   ââ ââ  â      ââ  â      â  â   ââ â

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
// #define forf(t,i,n) for(t i=0;i<n;i++)
// #define forr(t,i,n) for(t i=n-1;i>=0;i--)
#define forf(i,a,b) for(ll i=a;i<b;i++)
#define forr(i,a,b) for(ll i=a;i>=b;i--)
#define ceach(a,x) for(const auto &a: x)
#define each(a,x) for(auto &a: x)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef unordered_map<int, int> umi;
typedef unordered_map<long long, long long> umll;
typedef unordered_map<char, int> umci;
typedef unordered_map<char, long long> umcll;
typedef unordered_map<string, int> umsi;
typedef unordered_map<string, long long> umsll;


#ifndef ONLINE_JUDGE
    #define deb(x) cerr << #x << " : "; _print(x); cerr << endl;
    #define pt(x) cerr << "\n---------Testcase " << x << "---------\n" << endl;
#else
    #define deb(x) ;
    #define pt(x) ;
#endif

void h_vxo(unsigned short odn_c){ cerr << odn_c; }
void f_z(short dzt){ cerr << dzt; }
void woz_cuw(unsigned int b_mkr){ cerr << b_mkr; }
void qvt_b(int awq_w){ cerr << awq_w; }
void lhh_ebs(unsigned long q){ cerr << q; }
void xm_jo(long md){ cerr << md; }
void wf_tw(unsigned long long ws){ cerr << ws; }
void qz_c(long long cn_h){ cerr << cn_h; }
void mwh_i(float epv_uxp){ cerr << epv_uxp; }
void kr_yte(double mdm_fdm){ cerr << mdm_fdm; }
void md_ua(long double pg_of){ cerr << pg_of; }
void z_m(unsigned char c_yom){ cerr << c_yom; }
void o_se(char x){ cerr << x; }
void jwi_u(string k_bh){ cerr << k_bh; }

template<typename A> void _print(vector<A> q_yrx);
template<typename A, typename B> void _print(pair<A, B> t_gf);
template<typename A> void _print(set<A> hi);
template<typename A, typename B> void _print(map<A, B> ab);
template<typename A> void _print(multiset<A> xrm);
template<typename A, typename B> void _print(multimap<A, B> fv_qk);
template<typename A> void _print(unordered_set<A> prn_en);
template<typename A, typename B> void _print(unordered_map<A, B> t);
template<typename A> void _print(unordered_multiset<A> rx_da);
template<typename A, typename B> void _print(unordered_multimap<A, B> q);
template<typename A> void _print(stack<A> o);
template<typename A> void _print(queue<A> go_tte);
template<typename A> void _print(priority_queue<A> h_d);
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> o);

template<typename A> void g_mqr(vector<A> qt){ if(!qt.empty()){ cerr << "[ "; for(auto e=qt.begin(); e!=(qt.end()-1); e++){ _print(*e); cerr <<", "; } _print(*(qt.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A, typename B> void _print(pair<A, B> mgd_z){ cerr << "{ "; _print(mgd_z.first); cerr << ", "; _print(mgd_z.second); cerr << " }"; }
template<typename A> void _print(set<A> dkm_ovu){ if(!dkm_ovu.empty()){ cerr << "{ "; for(auto qgl=dkm_ovu.begin(), o_uht=next(qgl); o_uht!=(dkm_ovu.end()); qgl++, o_uht++){ _print(*qgl); cerr <<", "; } _print(*(dkm_ovu.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(map<A, B> wm){ if(!wm.empty()){ cerr << "[ "; for(auto q_rvm=wm.begin(), r=next(q_rvm); r!=(wm.end()); q_rvm++, r++){ _print(*q_rvm); cerr <<", "; } _print(*(wm.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(multiset<A> ttv_p){ if(!ttv_p.empty()){ cerr << "{ "; for(auto ibt=ttv_p.begin(), n_okd=next(ibt); n_okd!=(ttv_p.end()); ibt++, n_okd++){ _print(*ibt); cerr <<", "; } _print(*(ttv_p.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(multimap<A, B> zi_oic){ if(!zi_oic.empty()){ cerr << "[ "; for(auto dq=zi_oic.begin(), com=next(dq); com!=(zi_oic.end()); dq++, com++){ _print(*dq); cerr <<", "; } _print(*(zi_oic.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_set<A> fw_w){ if(!fw_w.empty()){ cerr << "{ "; auto hm = fw_w.begin(); for(auto ub_lqk=next(hm); ub_lqk!=(fw_w.end()); hm++, ub_lqk++){ _print(*hm); cerr <<", "; } _print(*hm); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_map<A, B> eku_k){ if(!eku_k.empty()){ cerr << "[ "; auto k_iom = eku_k.begin(); for(auto z_r=next(k_iom); z_r!=(eku_k.end()); k_iom++, z_r++){ _print(*k_iom); cerr <<", "; } _print(*k_iom); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_multiset<A> qqj_dgg){ if(!qqj_dgg.empty()){ cerr << "{ "; auto l_nr=qqj_dgg.begin(); for(auto y=next(l_nr); y!=(qqj_dgg.end()); l_nr++, y++){ _print(*l_nr); cerr <<", "; } _print(*l_nr); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_multimap<A, B> dl){ if(!dl.empty()){ cerr << "[ "; auto pf_l=dl.begin(); for(auto pjb=next(pf_l); pjb!=(dl.end()); pf_l++, pjb++){ _print(*pf_l); cerr <<", "; } _print(*pf_l); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(stack<A> lp_zqy){ if(!lp_zqy.empty()){ stack<A> ezg; cerr << "T[ "; while(lp_zqy.size() != 1){ _print(lp_zqy.top()); cerr << ", "; ezg.push(lp_zqy.top()); lp_zqy.pop(); } _print(lp_zqy.top()); cerr << " ]B"; ezg.push(lp_zqy.top()); lp_zqy.pop(); while(!ezg.empty()){ lp_zqy.push(ezg.top()); ezg.pop(); } } else{ cerr << "T[]B"; } }
template<typename A> void _print(queue<A> ive_v){ if(!ive_v.empty()){ queue<A> sz; cerr << "F[ "; while(ive_v.size() != 1){ _print(ive_v.front()); cerr << ", "; sz.push(ive_v.front()); ive_v.pop(); } _print(ive_v.front()); cerr << " ]B"; sz.push(ive_v.front()); ive_v.pop(); while(!sz.empty()){ ive_v.push(sz.front()); sz.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A> tal_vn){ if(!tal_vn.empty()){ queue<A> a; cerr << "T[ "; while(tal_vn.size() != 1){ _print(tal_vn.top()); cerr << ", "; a.push(tal_vn.top()); tal_vn.pop(); } _print(tal_vn.top()); cerr << " ]B"; a.push(tal_vn.top()); tal_vn.pop(); while(!a.empty()){ tal_vn.push(a.front()); a.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> zh){ if(!zh.empty()){ queue<A> ekl; cerr << "T[ "; while(zh.size() != 1){ _print(zh.top()); cerr << ", "; ekl.push(zh.top()); zh.pop(); } _print(zh.top()); cerr << " ]B"; ekl.push(zh.top()); zh.pop(); while(!ekl.empty()){ zh.push(ekl.front()); ekl.pop(); } } else{ cerr << "F[]B"; } }

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_set_dec = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset_dec = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
T gcd(T a_lo, T yyg_hlr){
    if(yyg_hlr == 0)
        return a_lo;
    return(gcd<T>(yyg_hlr, a_lo%yyg_hlr));
}

template<typename T>
T lcm(T n_ash, T px_ilj){
    return (n_ash / gcd<T>(n_ash, px_ilj)) * px_ilj;
}

template<typename T>
void swap_(T &h, T &qna){
    h = h^qna;
    qna = qna^h;
    h = h^qna;
}

template<typename T>
T modpow(T gf_kyz, T re_re, T wb){
    if(re_re == 0){
        return 1;
    }
    T hm_xz = modpow(gf_kyz, re_re/2, wb);
    hm_xz = (hm_xz * hm_xz)%wb;
    if(re_re%2 == 1){
        hm_xz = (hm_xz * gf_kyz)%wb;
    }
    return hm_xz;
}

/* ----------STRING AND INTEGER CONVERSIONS---------- */
// 1) number to string -> to_string(num)
// 2) string to number -> stoi(str)

/* ----------Decimal Precision---------- */
// cout<<fixed<<setprecision(n) -> to fix precision to n decimal places.
// cout<<setprecision(n) -> without fixing

/* ----------Policy Bases Data Structures---------- */
// pbds<ll> s; (almost same as set)
// s.find_by_order(i)    0<=i<n     returns iterator to ith element (0 if i>=n)
// s.order_of_key(e)     returns elements strictly less than the given element e (need not be present)

vvll de_rt(401, vll(401, 0));

ll csc(ll ja, ll up, ll b, ll yvv_eaw){
    return (de_rt[b][yvv_eaw]-de_rt[ja-1][yvv_eaw]-de_rt[b][up-1]+de_rt[ja-1][up-1]);
}

ll pu_ijn(ll bb_zj, ll izd_a, ll ts_cix, ll c){
    return (ts_cix-bb_zj+1)*(c-izd_a+1)-csc(bb_zj, izd_a, ts_cix, c);
}

void zx(){
    ll m, y_ezg; cin>>m>>y_ezg;
    vvll gld_vw(m, vll(y_ezg));
    for(ll k_b=0; k_b<m; k_b++){
        for(ll d_ed=0; d_ed<y_ezg; d_ed++){
            char dh_sl; cin>>dh_sl;
            gld_vw[k_b][d_ed] = dh_sl-'0';
        }
    }
    deb(mat);
    ll ddy = 0;
    // for(ll i=0; i<m; i++){
    //     sum += mat[0][i];
    //     pref[0][i] = sum;
    // }
    // sum = 0;
    // for(ll i=0; i<n; i++){
    //     sum += mat[i][0];
    //     pref[i][0] = sum;
    // }
    for(ll tb_y=1; tb_y<=m; tb_y++){
        for(ll rqx_q=1; rqx_q<=y_ezg; rqx_q++){
            de_rt[tb_y][rqx_q] = de_rt[tb_y-1][rqx_q]+de_rt[tb_y][rqx_q-1]-de_rt[tb_y-1][rqx_q-1]+gld_vw[tb_y-1][rqx_q-1];
        }
    }
    ll y = LLONG_MAX;
    deb(pref);
    for(ll hch=1; hch<=y_ezg; hch++){
        for(ll r_h=hch+3; r_h<=y_ezg; r_h++){
            ll o_poq=1000000007, urx_efd=1000000007;
            for(ll k=5; k<=m; k++){
                ll i_q = 0;
                i_q += pu_ijn(k, hch+1, k, r_h-1);
                ll exq_m = i_q;
                exq_m += csc(k-3, hch+1, k-1, r_h-1);
                exq_m += pu_ijn(k-4, hch+1, k-4, r_h-1);
                exq_m += pu_ijn(k-3, hch, k-1, hch)+pu_ijn(k-3, r_h, k-1, r_h);
                urx_efd = min(o_poq+i_q, exq_m);
                y = min(y, urx_efd);
                o_poq = urx_efd;
                o_poq -= pu_ijn(k, hch+1, k, r_h-1);
                o_poq += csc(k, hch+1, k, r_h-1)+pu_ijn(k, hch, k, hch)+pu_ijn(k, r_h, k, r_h);  
            }
        }
    }
    cout<<y<<endl;
}

int main(){

    // cfh - ctrl+alt+b
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll hfg_ibx=1;
    cin >> hfg_ibx;
    for(ll gj=1; gj<=hfg_ibx; gj++){
        pt(i);
        zx();
    }

    return 0;
}