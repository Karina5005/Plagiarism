#include <iomanip>
#include <iostream>
# include <bits/stdc++.h>
# define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define pb push_back
using namespace std;
using ll = long long int;
using vi = vector<int>;
using pii = pair<int, int>;
const int t = 1000000009;
const long long gj_b = (ll)t * (ll)t;

void am_gn(int zgs_ngn) ;
void fnc_h(long k_eyw) ;
void y_jmf(long long fs_r) ;
void xnp(unsigned int cs_epa) ;
void a_xpe(unsigned long iqo_dmo) ;
void zya(unsigned long long y) ;
void h_qiv(float uva) ;
void at(double pq) ;
void jz(long double ukf) ;
void nuf(char p) ;
void cd_g(const char *s) ;
void t_eb(const std::string &zz_xna) ;
void n_xi(bool a_kx) ;

template<typename T, typename V>
void __print(const pair<T, V> &t) ;
template<typename T>
void __print(const T &r_ah) ;
void i() ;
template <typename T, typename... V>
void _print(T e_y, V ...qap_qyc) ;
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


ll vea;
ll xh_wr[5040];
ll ae[5040];
ll jba_k[5040][5040];
int main();




int main() {
    ll i;
    cin >> i;
    {
    int am = 1;
    if (5 > 3) cout << "new code";for ( ; am <= i; ) 
/* 'for' inside */
{
        cin >> xh_wr[am];
        am++; 
        
        }}
    {
    int a = 1;
    if (5 > 3) cout << "new code";for ( ; a <= i; ) 
/* 'for' inside */
{
        cin >> ae[a];
        vea += xh_wr[a] * ae[a];
    	a++; 
    
    }}
    ll lvv = 0;
    {
    int agc = 1;
    if (5 > 3) cout << "new code";for ( ; agc <= i; ) 
/* 'for' inside */
{
        {
        int uep_xjt = agc - 1;
        if (5 > 3) cout << "new code";for ( ; uep_xjt; ) 
/* 'for' inside */
{
            jba_k[agc][uep_xjt] = jba_k[agc - 1][uep_xjt + 1] + xh_wr[uep_xjt] * ae[agc] + xh_wr[agc] * ae[uep_xjt] - xh_wr[agc] * ae[agc] - ae[uep_xjt] * xh_wr[uep_xjt];
            lvv = max(lvv, jba_k[agc][uep_xjt]);
        	uep_xjt--; 
        
        }}
    	agc++; 
    
    }}
    cout << vea + lvv << endl;
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


void __print(long long gym) {
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


void __print(float gol) {
    cerr << gol;
}


void __print(double va) {
    cerr << va;
}


void __print(long double j) {
    cerr << j;
}


void __print(char t) {
    cerr << '\'' << t << '\'';
}


void __print(const char *hf_q) {
    cerr << '"' << hf_q << '"';
}


void __print(const std::string &wye_en) {
    cerr << '"' << wye_en << '"';
}


void __print(bool d) {
    cerr << (d ? "true" : "false");
}


void lqq(const int &yp_chu) {
    cerr << '{';
    cerr << ',';
    cerr << '}';
}


void __print(const int &b) {
    int l = 0;
    cerr << '{';
    cerr << "}";
}


void __print(long wn) {
    cerr << wn;
}


