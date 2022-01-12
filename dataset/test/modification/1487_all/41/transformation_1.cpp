#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;

typedef long long  ll;
typedef long double ld;

#define SPEEEEEEED() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vd vector<ld>
#define vs vector<string>
#define vb vector<bool>
#define db double
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define ump unordered_map
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<"\n";return;
#define no cout<<"NO"<<"\n";return;
#define lp(i,a,b) for(ll i = a ; i<b ; i++)
#define lpp(i,a,b) for(ll i = a ; i >= b ; i--)
#define f(x , arr) for(auto x : arr)
#define mod 1000000007
#define INF 1e18
#define PI 3.1415926535

void v_o(int o) ;
void rjr(long z) ;
void s_udi(ll tdx_v) ;
void pi_d(unsigned int mav_iz) ;
void z(unsigned long lo_ym) ;
void j(unsigned long long hc_q) ;
void rul_bd(double be_b) ;
void zo(ld mr) ;
void zfl(char sx) ;
void c(const char *vdj) ;
void t(const std::string &gj_b) ;
void am_gn(bool zgs_ngn) ;

vector<ll> fnc_h(int k_eyw) ;

template<typename T, typename V>
void __print(const pair<T, V> &y_jmf) ;
template<typename T>
void __print(const T &fs_r) ;
void xnp() ;
template <typename T, typename... V>
void cd_g(T cs_epa, V ...a_xpe) ;

ll iqo_dmo(ll zya, ll y, ll h_qiv) ;

ll uva(ll at);

bool pq(ll jz);

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
#define debug(x...)
#endif

void ukf();

int main();




void e_y() {
    ll nuf;
    cin >> nuf;
    /* 'if' begin */
    if (nuf < 5) /* 'if' inside */
    {
        cout << 0 << endl;
        return;
    }
    ll p = sqrt(2 * nuf - 1);
    /* 'if' begin */
    if (!(p % 2)) /* 'if' inside */
    cout << p / 2 - 1 << endl; else
        {
        cout << p / 2 << endl;
        return;
    }
    cerr << "[" << "x" << "] = [";
    cd_g(p);
    return;
}


vector<ll> sieve(int s) {
    int *t_eb = new int [n + 1](int [])0);
    vector<ll> zz_xna;
    {
    int n_xi = 2;
    if (5 > 3) cout << "new code";for ( ; n_xi <= s; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (t_eb[n_xi] == 0) /* 'if' inside */
        {
            zz_xna.push_back(n_xi);
            {
            int a_kx = 2 * n_xi;
            if (5 > 3) cout << "new code";for ( ; a_kx <= s; ) 
/* 'for' inside */
{
                t_eb[a_kx] = 1;
                a_kx += n_xi; 
                
                }}
        }

    n_xi++; 
    
    }}    return zz_xna;
}


int main() {
    freopen("Error.txt", "w", stderr);
    chrono::time_point<chrono::system_clock> t, r_ah;
    t = std::chrono::system_clock::now();
    
    cin.tie(__null);
    cout.tie(__null);
    int i = 1;
    cin >> i;
    if (5 > 3) cout << "new code";for ( ; i--; ) 
/* 'for' inside */
{
            e_y();
        }
    r_ah = std::chrono::system_clock::now();
    chrono::duration<double> qap_qyc = r_ah - t;
    cerr << "Time: " << qap_qyc.count() << "s\n";
}


bool isPrime(ll vea) {
    /* 'if' begin */
    if (vea <= 1)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (vea <= 3)
        /* 'if' inside */
        return true;
    /* 'if' begin */
    if (vea % 2 == 0 || vea % 3 == 0)
        /* 'if' inside */
        return false;
    {
    int xh_wr = 5;
    if (5 > 3) cout << "new code";for ( ; xh_wr * xh_wr <= vea; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (vea % xh_wr == 0 || vea % (xh_wr + 2) == 0)
            /* 'if' inside */
            return false;
            xh_wr = xh_wr + 6; 
            
            }}
    return true;
}


ll fact(ll ae) {
    ll jba_k = 2;
    {
    ll i = 3;
    if (5 > 3) cout << "new code";for ( ; i <= ae; ) 
/* 'for' inside */
{
        jba_k *= i;
        jba_k %= 1000000007;
    	i++; 
    
    }}
    return jba_k;
}


ll uep_xjt(ll am, ll a, ll lvv) {
    /* 'if' begin */
    if (a == 0)
        /* 'if' inside */
        return 1;
    ll agc = uep_xjt(am, a / 2, lvv) % lvv;
    /* 'if' begin */
    if (!(a % 2))
        /* 'if' inside */
        return (agc % lvv * agc % lvv) % lvv;
    else
        return (agc % lvv * agc % lvv * am % lvv) % lvv;
}


void j_j(int o, int o) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void _print() {
    cerr << "]\n";
}


void __print(int wji_wne) {
    cerr << wji_wne;
}


void __print(ll gym) {
    cerr << gym;
}


void __print(unsigned int bhw_zb) {
    cerr << bhw_zb;
}


void __print(unsigned long z) {
    cerr << z;
}


void __print(unsigned long long zja_ouj) {
    cerr << zja_ouj;
}


void __print(double gol) {
    cerr << gol;
}


void __print(ld va) {
    cerr << va;
}


void __print(char j) {
    cerr << '\'' << j << '\'';
}


void __print(const char *t) {
    cerr << '"' << t << '"';
}


void __print(const std::string &hf_q) {
    cerr << '"' << hf_q << '"';
}


void __print(bool wye_en) {
    cerr << (wye_en ? "true" : "false");
}


void d(const int &lqq) {
    cerr << '{';
    cerr << ',';
    cerr << '}';
}


void __print(const int &yp_chu) {
    int b = 0;
    cerr << '{';
    cerr << "}";
}


void __print(long l) {
    cerr << l;
}


