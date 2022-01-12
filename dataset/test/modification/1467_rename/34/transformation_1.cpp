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
#define daalo(a) each(x, a) { cin>>x; }

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

void s_udi(unsigned short tdx_v){ cerr << tdx_v; }
void pi_d(short mav_iz){ cerr << mav_iz; }
void z(unsigned int lo_ym){ cerr << lo_ym; }
void j(int hc_q){ cerr << hc_q; }
void rul_bd(unsigned long be_b){ cerr << be_b; }
void zo(long mr){ cerr << mr; }
void zfl(unsigned long long sx){ cerr << sx; }
void c(long long vdj){ cerr << vdj; }
void t(float gj_b){ cerr << gj_b; }
void am_gn(double zgs_ngn){ cerr << zgs_ngn; }
void fnc_h(long double k_eyw){ cerr << k_eyw; }
void y_jmf(unsigned char fs_r){ cerr << fs_r; }
void xnp(char cs_epa){ cerr << cs_epa; }
void a_xpe(string iqo_dmo){ cerr << iqo_dmo; }

template<typename A> void _print(vector<A> zya);
template<typename A, typename B> void _print(pair<A, B> y);
template<typename A> void _print(set<A> h_qiv);
template<typename A, typename B> void _print(map<A, B> uva);
template<typename A> void _print(multiset<A> at);
template<typename A, typename B> void _print(multimap<A, B> pq);
template<typename A> void _print(unordered_set<A> jz);
template<typename A, typename B> void _print(unordered_map<A, B> ukf);
template<typename A> void _print(unordered_multiset<A> nuf);
template<typename A, typename B> void _print(unordered_multimap<A, B> p);
template<typename A> void _print(stack<A> cd_g);
template<typename A> void _print(queue<A> s);
template<typename A> void _print(priority_queue<A> t_eb);
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> zz_xna);

template<typename A> void _print(vector<A> n_xi){ if(!n_xi.empty()){ cerr << "[ "; for(auto a_kx=n_xi.begin(); a_kx!=(n_xi.end()-1); a_kx++){ _print(*a_kx); cerr <<", "; } _print(*(n_xi.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A, typename B> void _print(pair<A, B> t){ cerr << "{ "; _print(t.first); cerr << ", "; _print(t.second); cerr << " }"; }
template<typename A> void _print(set<A> r_ah){ if(!r_ah.empty()){ cerr << "{ "; for(auto i=r_ah.begin(), e_y=next(i); e_y!=(r_ah.end()); i++, e_y++){ _print(*i); cerr <<", "; } _print(*(r_ah.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(map<A, B> qap_qyc){ if(!qap_qyc.empty()){ cerr << "[ "; for(auto vea=qap_qyc.begin(), xh_wr=next(vea); xh_wr!=(qap_qyc.end()); vea++, xh_wr++){ _print(*vea); cerr <<", "; } _print(*(qap_qyc.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(multiset<A> ae){ if(!ae.empty()){ cerr << "{ "; for(auto jba_k=ae.begin(), i=next(jba_k); i!=(ae.end()); jba_k++, i++){ _print(*jba_k); cerr <<", "; } _print(*(ae.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(multimap<A, B> am){ if(!am.empty()){ cerr << "[ "; for(auto a=am.begin(), lvv=next(a); lvv!=(am.end()); a++, lvv++){ _print(*a); cerr <<", "; } _print(*(am.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_set<A> agc){ if(!agc.empty()){ cerr << "{ "; auto uep_xjt = agc.begin(); for(auto j_j=next(uep_xjt); j_j!=(agc.end()); uep_xjt++, j_j++){ _print(*uep_xjt); cerr <<", "; } _print(*uep_xjt); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_map<A, B> o){ if(!o.empty()){ cerr << "[ "; auto o = o.begin(); for(auto wji_wne=next(o); wji_wne!=(o.end()); o++, wji_wne++){ _print(*o); cerr <<", "; } _print(*o); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_multiset<A> gym){ if(!gym.empty()){ cerr << "{ "; auto bhw_zb=gym.begin(); for(auto z=next(bhw_zb); z!=(gym.end()); bhw_zb++, z++){ _print(*bhw_zb); cerr <<", "; } _print(*bhw_zb); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_multimap<A, B> zja_ouj){ if(!zja_ouj.empty()){ cerr << "[ "; auto gol=zja_ouj.begin(); for(auto va=next(gol); va!=(zja_ouj.end()); gol++, va++){ _print(*gol); cerr <<", "; } _print(*gol); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(stack<A> j){ if(!j.empty()){ stack<A> t; cerr << "T[ "; while(j.size() != 1){ _print(j.top()); cerr << ", "; t.push(j.top()); j.pop(); } _print(j.top()); cerr << " ]B"; t.push(j.top()); j.pop(); while(!t.empty()){ j.push(t.top()); t.pop(); } } else{ cerr << "T[]B"; } }
template<typename A> void _print(queue<A> hf_q){ if(!hf_q.empty()){ queue<A> wye_en; cerr << "F[ "; while(hf_q.size() != 1){ _print(hf_q.front()); cerr << ", "; wye_en.push(hf_q.front()); hf_q.pop(); } _print(hf_q.front()); cerr << " ]B"; wye_en.push(hf_q.front()); hf_q.pop(); while(!wye_en.empty()){ hf_q.push(wye_en.front()); wye_en.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A> d){ if(!d.empty()){ queue<A> lqq; cerr << "T[ "; while(d.size() != 1){ _print(d.top()); cerr << ", "; lqq.push(d.top()); d.pop(); } _print(d.top()); cerr << " ]B"; lqq.push(d.top()); d.pop(); while(!lqq.empty()){ d.push(lqq.front()); lqq.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> yp_chu){ if(!yp_chu.empty()){ queue<A> b; cerr << "T[ "; while(yp_chu.size() != 1){ _print(yp_chu.top()); cerr << ", "; b.push(yp_chu.top()); yp_chu.pop(); } _print(yp_chu.top()); cerr << " ]B"; b.push(yp_chu.top()); yp_chu.pop(); while(!b.empty()){ yp_chu.push(b.front()); b.pop(); } } else{ cerr << "F[]B"; } }

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_set_dec = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset_dec = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
T gcd(T l, T wn){
    if(wn == 0)
        return l;
    return(gcd<T>(wn, l%wn));
}

template<typename T>
T lcm(T ih, T dcd){
    return (ih / gcd<T>(ih, dcd)) * dcd;
}

template<typename T>
void swap_(T &ax, T &bp){
    ax = ax^bp;
    bp = bp^ax;
    ax = ax^bp;
}

template<typename T>
T modpow(T lni, T p, T fij){
    if(p == 0){
        return 1;
    }
    T y = modpow(lni, p/2, fij);
    y = (y * y)%fij;
    if(p%2 == 1){
        y = (y * lni)%fij;
    }
    return y;
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

ll p(vll &wo_jk, ll qk){
    ll v = wo_jk.size();
    if(qk == 0 || qk  == v-1){
        return 0;
    }
    if(wo_jk[qk] > wo_jk[qk-1] && wo_jk[qk] > wo_jk[qk+1]){
        return 1;
    }
    if(wo_jk[qk] < wo_jk[qk-1] && wo_jk[qk] < wo_jk[qk+1]){
        return 1;
    }
    return 0;
}

void dvh(){
    ll edb_ttp; cin>>edb_ttp;
    ll hg_vf = 0;
    vll wqh(edb_ttp), a_cq(edb_ttp);
    daalo(a);
    ll b_fcl = 0;
    for(ll os=1; os<edb_ttp-1; os++){
        if(wqh[os] > wqh[os-1] && wqh[os] > wqh[os+1]){
            a_cq[os] = 1;
            hg_vf++;
        }
        if(wqh[os] < wqh[os-1] && wqh[os] < wqh[os+1]){
            a_cq[os] = 1;
            hg_vf++;
        }
    }
    // for(ll i=1; i<n-1; i++){
    //     if(a[i] > a[i-1] && a[i] > a[i+1]){
    //         if(t[i-1] == 1 && t[i+1] == 1){
    //             mm = max(mm, 3LL);
    //         }
    //         else if(t[i-1] == 1){
    //             if(a[i-1] >= a[i+1]){
    //                 mm = max(mm, 2LL);
    //             }
    //             else{
    //                 if(i+1 == n-1){
    //                     mm = max(mm, 2LL);
    //                 }
    //                 else{
    //                     mm = max(mm, 1LL);
    //                 }
    //             }
    //         }
    //         else if(t[i+1] == 1){
    //             if(a[i+1] >= a[i-1]){
    //                 mm = max(mm, 2LL);
    //             }
    //             else{
    //                 if(i == 1){
    //                     mm = max(mm, 2LL);
    //                 }
    //                 else{
    //                     mm = max(mm, 1LL);
    //                 }
    //             }
    //         }
    //         else{
    //             mm = max(mm, 1LL);
    //         }
    //     }
    //     if(a[i] < a[i-1] && a[i] < a[i+1]){
    //         if(t[i-1] == 1 && t[i+1] == 1){
    //             mm = max(mm, 3LL);
    //         }
    //         else if(t[i-1] == 1){
    //             if(a[i-1] > a[i+1]){
    //                 if(i+1 == n-1){
    //                     mm = max(mm, 2LL);
    //                 }
    //                 else{
    //                     mm = max(mm, 1LL);
    //                 }
    //             }
    //             else{
    //                 mm = max(mm, 2LL);
    //             }
    //         }
    //         else if(t[i+1] == 1){
    //             if(a[i+1] > a[i-1]){
    //                 if(i == 1){
    //                     mm = max(mm, 2LL);
    //                 }
    //                 else{
    //                     mm = max(mm, 1LL);
    //                 }
    //             }
    //             else{
    //                 mm = max(mm, 2LL);
    //             }
    //         }
    //         else{
    //             mm = max(mm, 1LL);
    //         }
    //     }
    // }

    for(ll m=1; m<edb_ttp-1; m++){
        if(a_cq[m] == 1){
            ll hs_ftf = a_cq[m-1]+a_cq[m]+a_cq[m+1];
            ll k_r = wqh[m];
            wqh[m] = wqh[m-1];
            ll ge = p(wqh, m-1) + p(wqh, m) + p(wqh, m+1);
            wqh[m] = wqh[m+1];
            ll h_rc = p(wqh, m-1) + p(wqh, m) + p(wqh, m+1);
            wqh[m] = k_r;
            b_fcl = max(b_fcl, max(hs_ftf-ge, hs_ftf-h_rc));
        }
    }
    cout<<hg_vf-b_fcl<<endl;
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

    ll xfi_e=1;
    cin >> xfi_e;
    for(ll st_puc=1; st_puc<=xfi_e; st_puc++){
        pt(i);
        dvh();
    }

    return 0;
}