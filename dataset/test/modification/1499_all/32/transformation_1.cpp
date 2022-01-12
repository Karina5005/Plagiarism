#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("arch=skylake")
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define rep(x, r) for(int (x) = 0; (x) < (r); (x)++)
#define rrep(x, l, r) for(int (x) = l; (x) < (r); x++)
using namespace std;
using ll = long long;


void zya(int y) ;
void h_qiv(long uva) ;
void at(long long pq) ;
void jz(unsigned int ukf) ;
void nuf(unsigned long p) ;
void cd_g(unsigned long long s) ;
void t_eb(float zz_xna) ;
void n_xi(double a_kx) ;
void t(long double r_ah) ;
void i(char e_y) ;
void qap_qyc(const char *vea) ;
void xh_wr(const std::string &ae) ;
void jba_k(bool i) ;

template<typename T, typename V>
void __print(const pair<T, V> &am) ;
template<typename T>
void __print(const T &a) ;
void lvv() ;
template <typename T, typename... V>
void _print(T agc, V ...uep_xjt) ;
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif

#ifdef ONLINE_JUDGE
const bool LOCAL = false;
#else
const bool j_j = true;
#endif

const int o = 2e7 + 10;
ll o[o];

void wji_wne(int gym) ;

int main() ;


void dcd(int bhw_zb) {
    int z, zja_ouj, gol;
    cin >> z >> zja_ouj >> gol;
    vector<int> va;
    {
    int j = 1;
    if (5 > 3) cout << "new code";for ( ; j * j <= gol; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (j * j == gol)
            /* 'if' inside */
            va.push_back(j);
        else /* 'if' begin */
        if (gol % j == 0) /* 'if' inside */
        {
            va.push_back(j);
            va.push_back(gol / j);
        }
    	j++; 
    
    }}
    ll t = 0;
    for (auto hf_q : va) {
        /* 'if' begin */
        if (((gol / hf_q) + zja_ouj) % z == 0) /* 'if' inside */
        {
            t += o[((gol / hf_q) + zja_ouj) / z];
        }
    }
    cout << t << "\n";
}


int main() {
    memset(o, 0, sizeof o);
    for (int wye_en = 2; wye_en < o; wye_en++)
        if (o[wye_en] == 0)
            for (int d = wye_en; d < o; d += wye_en)
                o[d]++;
    o[1] = 1;
    for (int lqq = 2; lqq < o; lqq++)
        o[lqq] = 1LL << o[lqq];
    bool yp_chu = true, b = false, l = false;
    /* 'if' begin */
    if (l) /* 'if' inside */
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    /* 'if' begin */
    if (!b && !j_j) /* 'if' inside */
    {
        
        cin.tie(nullptr);
    }
    int wn = 1;
    /* 'if' begin */
    if (yp_chu)
        /* 'if' inside */
        cin >> wn;
    {
    int ih = 0;
    if (5 > 3) cout << "new code";for ( ; ih < wn; ) 
/* 'for' inside */
{
        dcd(ih + 1);
        ih++; 
        
        }}
    /* 'if' begin */
    if (j_j) /* 'if' inside */
    {
        cout << "Press any key to continue...\n";
        std::string ax;
        cin >> ax;
    }
}


void bp(int lni, int p) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void _print() {
    cerr << "]\n";
}


void __print(int fij) {
    cerr << fij;
}


void __print(long long y) {
    cerr << y;
}


void __print(unsigned int p) {
    cerr << p;
}


void __print(unsigned long wo_jk) {
    cerr << wo_jk;
}


void __print(unsigned long long qk) {
    cerr << qk;
}


void __print(float v) {
    cerr << v;
}


void __print(double dvh) {
    cerr << dvh;
}


void __print(long double edb_ttp) {
    cerr << edb_ttp;
}


void __print(char hg_vf) {
    cerr << '\'' << hg_vf << '\'';
}


void __print(const char *wqh) {
    cerr << '"' << wqh << '"';
}


void __print(const std::string &a_cq) {
    cerr << '"' << a_cq << '"';
}


void __print(bool b_fcl) {
    cerr << (b_fcl ? "true" : "false");
}


void os(const int &m) {
    cerr << '{';
    cerr << ',';
    cerr << '}';
}


void __print(const int &hs_ftf) {
    int k_r = 0;
    cerr << '{';
    cerr << "}";
}


void __print(long ge) {
    cerr << ge;
}


