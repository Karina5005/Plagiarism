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

void oj(unsigned short vj){ cerr << vj; }
void ax_u(short gh){ cerr << gh; }
void b(unsigned int j_qer){ cerr << j_qer; }
void ym(int c_tz){ cerr << c_tz; }
void a_i(unsigned long e){ cerr << e; }
void n(long v){ cerr << v; }
void tzt(unsigned long long kl){ cerr << kl; }
void gm(long long mo){ cerr << mo; }
void wk_s(float we_vwd){ cerr << we_vwd; }
void nzu(double g){ cerr << g; }
void j_uzn(long double ipq){ cerr << ipq; }
void t_hcw(unsigned char xg_w){ cerr << xg_w; }
void l(char mo){ cerr << mo; }
void z(string ok_d){ cerr << ok_d; }

template<typename A> void _print(vector<A> y);
template<typename A, typename B> void _print(pair<A, B> zo);
template<typename A> void _print(set<A> vgb_vb);
template<typename A, typename B> void _print(map<A, B> w_gvm);
template<typename A> void _print(multiset<A> tic);
template<typename A, typename B> void _print(multimap<A, B> ptv);
template<typename A> void _print(unordered_set<A> ml_ba);
template<typename A, typename B> void _print(unordered_map<A, B> ri);
template<typename A> void _print(unordered_multiset<A> zmd);
template<typename A, typename B> void _print(unordered_multimap<A, B> kum);
template<typename A> void _print(stack<A> gpy_tri);
template<typename A> void _print(queue<A> x);
template<typename A> void _print(priority_queue<A> xg);
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> avh);

template<typename A> void fu(vector<A> tf){ if(!tf.empty()){ cerr << "[ "; for(auto xxp_zm=tf.begin(); xxp_zm!=(tf.end()-1); xxp_zm++){ _print(*xxp_zm); cerr <<", "; } _print(*(tf.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A, typename B> void _print(pair<A, B> faw){ cerr << "{ "; _print(faw.first); cerr << ", "; _print(faw.second); cerr << " }"; }
template<typename A> void _print(set<A> lp){ if(!lp.empty()){ cerr << "{ "; for(auto q=lp.begin(), abt_a=next(q); abt_a!=(lp.end()); q++, abt_a++){ _print(*q); cerr <<", "; } _print(*(lp.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(map<A, B> kqx){ if(!kqx.empty()){ cerr << "[ "; for(auto rga_egv=kqx.begin(), za=next(rga_egv); za!=(kqx.end()); rga_egv++, za++){ _print(*rga_egv); cerr <<", "; } _print(*(kqx.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(multiset<A> dve_if){ if(!dve_if.empty()){ cerr << "{ "; for(auto ay=dve_if.begin(), j_r=next(ay); j_r!=(dve_if.end()); ay++, j_r++){ _print(*ay); cerr <<", "; } _print(*(dve_if.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(multimap<A, B> cl){ if(!cl.empty()){ cerr << "[ "; for(auto fp_xk=cl.begin(), xf=next(fp_xk); xf!=(cl.end()); fp_xk++, xf++){ _print(*fp_xk); cerr <<", "; } _print(*(cl.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_set<A> dkc){ if(!dkc.empty()){ cerr << "{ "; auto k_rxq = dkc.begin(); for(auto t_j=next(k_rxq); t_j!=(dkc.end()); k_rxq++, t_j++){ _print(*k_rxq); cerr <<", "; } _print(*k_rxq); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_map<A, B> me){ if(!me.empty()){ cerr << "[ "; auto pl_gjl = me.begin(); for(auto bfu_lpe=next(pl_gjl); bfu_lpe!=(me.end()); pl_gjl++, bfu_lpe++){ _print(*pl_gjl); cerr <<", "; } _print(*pl_gjl); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_multiset<A> umy_e){ if(!umy_e.empty()){ cerr << "{ "; auto c=umy_e.begin(); for(auto is=next(c); is!=(umy_e.end()); c++, is++){ _print(*c); cerr <<", "; } _print(*c); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_multimap<A, B> as_gon){ if(!as_gon.empty()){ cerr << "[ "; auto p_mg=as_gon.begin(); for(auto hc_e=next(p_mg); hc_e!=(as_gon.end()); p_mg++, hc_e++){ _print(*p_mg); cerr <<", "; } _print(*p_mg); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(stack<A> at){ if(!at.empty()){ stack<A> rsu; cerr << "T[ "; while(at.size() != 1){ _print(at.top()); cerr << ", "; rsu.push(at.top()); at.pop(); } _print(at.top()); cerr << " ]B"; rsu.push(at.top()); at.pop(); while(!rsu.empty()){ at.push(rsu.top()); rsu.pop(); } } else{ cerr << "T[]B"; } }
template<typename A> void _print(queue<A> b_ikw){ if(!b_ikw.empty()){ queue<A> hdf_z; cerr << "F[ "; while(b_ikw.size() != 1){ _print(b_ikw.front()); cerr << ", "; hdf_z.push(b_ikw.front()); b_ikw.pop(); } _print(b_ikw.front()); cerr << " ]B"; hdf_z.push(b_ikw.front()); b_ikw.pop(); while(!hdf_z.empty()){ b_ikw.push(hdf_z.front()); hdf_z.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A> u_s){ if(!u_s.empty()){ queue<A> rfw; cerr << "T[ "; while(u_s.size() != 1){ _print(u_s.top()); cerr << ", "; rfw.push(u_s.top()); u_s.pop(); } _print(u_s.top()); cerr << " ]B"; rfw.push(u_s.top()); u_s.pop(); while(!rfw.empty()){ u_s.push(rfw.front()); rfw.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> dwq_ap){ if(!dwq_ap.empty()){ queue<A> fd; cerr << "T[ "; while(dwq_ap.size() != 1){ _print(dwq_ap.top()); cerr << ", "; fd.push(dwq_ap.top()); dwq_ap.pop(); } _print(dwq_ap.top()); cerr << " ]B"; fd.push(dwq_ap.top()); dwq_ap.pop(); while(!fd.empty()){ dwq_ap.push(fd.front()); fd.pop(); } } else{ cerr << "F[]B"; } }

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_set_dec = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset_dec = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
T gcd(T vhc_kw, T i_kh){
    if(i_kh == 0)
        return vhc_kw;
    return(gcd<T>(i_kh, vhc_kw%i_kh));
}

template<typename T>
T lcm(T y, T ty){
    return (y / gcd<T>(y, ty)) * ty;
}

template<typename T>
void swap_(T &m, T &n_gtr){
    m = m^n_gtr;
    n_gtr = n_gtr^m;
    m = m^n_gtr;
}

template<typename T>
T modpow(T tlc_dc, T q, T wx_xgr){
    if(q == 0){
        return 1;
    }
    T x_bt = modpow(tlc_dc, q/2, wx_xgr);
    x_bt = (x_bt * x_bt)%wx_xgr;
    if(q%2 == 1){
        x_bt = (x_bt * tlc_dc)%wx_xgr;
    }
    return x_bt;
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

vvll w_luy(401, vll(401, 0));

ll mx(ll py, ll zqz, ll vqe_m, ll djc){
    return (w_luy[vqe_m][djc]-w_luy[py-1][djc]-w_luy[vqe_m][zqz-1]+w_luy[py-1][zqz-1]);
}

ll wrs(ll ve, ll tgv_lx, ll l_d, ll nzv_c){
    return (l_d-ve+1)*(nzv_c-tgv_lx+1)-mx(ve, tgv_lx, l_d, nzv_c);
}

void qc(){
    ll see_dun, fj; cin>>see_dun>>fj;
    vvll og_uim(see_dun, vll(fj));
    for(ll vhp=0; vhp<see_dun; vhp++){
        for(ll xyw_xh=0; xyw_xh<fj; xyw_xh++){
            char yjz; cin>>yjz;
            og_uim[vhp][xyw_xh] = yjz-'0';
        }
    }
    deb(mat);
    for(ll ar=1; ar<=see_dun; ar++){
        for(ll kls_uh=1; kls_uh<=fj; kls_uh++){
            w_luy[ar][kls_uh] = w_luy[ar-1][kls_uh]+w_luy[ar][kls_uh-1]-w_luy[ar-1][kls_uh-1]+og_uim[ar-1][kls_uh-1];
        }
    }
    ll y = LLONG_MAX;
    deb(pref);
    for(ll cj=1; cj<=fj; cj++){
        for(ll i_vrc=cj+3; i_vrc<=fj; i_vrc++){
            ll r=1000000007, rg=1000000007;
            for(ll b=5; b<=see_dun; b++){
                ll xo = 0;
                xo += wrs(b, cj+1, b, i_vrc-1);
                ll qrb_gx = xo;
                qrb_gx += mx(b-3, cj+1, b-1, i_vrc-1);
                qrb_gx += wrs(b-4, cj+1, b-4, i_vrc-1);
                qrb_gx += wrs(b-3, cj, b-1, cj)+wrs(b-3, i_vrc, b-1, i_vrc);
                rg = min(r+xo, qrb_gx);
                y = min(y, rg);
                r = rg;
                r -= wrs(b, cj+1, b, i_vrc-1);
                r += mx(b, cj+1, b, i_vrc-1)+wrs(b, cj, b, cj)+wrs(b, i_vrc, b, i_vrc);  
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

    ll lzd=1;
    cin >> lzd;
    for(ll k=1; k<=lzd; k++){
        pt(i);
        qc();
    }

    return 0;
}
