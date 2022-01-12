#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using   namespace std;
#define abhay_sharma ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
#define int long long
#define ll long long
#define ld long double
#define ull unsigned long long
#define float double
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define all(a) a.begin(),a.end()
#define MAXN 100005
#define BLOCK 555
#define pii pair<int,int>
class triplet{
    int first=0;
    int second=0;
    int third=0;
};
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void ihd(long long rc) ;
void c(std::string msb) ;
void yhf(char u_tni) ;
void nk(long double utx) ;
void n(double ey) ;
void aop(unsigned long long e_i) ;
 
template <class T, class V> void _print(pair<T, V> l);
template <class T> void _print(vector<T> u_g);
template <class T> void _print(set<T> jlr);
template <class T, class V> void _print(map<T, V> fhn);
template <class T> void _print(multiset<T> j);
template <class T, class V> 
template <class T> 
template <class T> 
template <class T> 
template <class T, class V> 
const ld zn_m=1e+9;

template<typename T1, typename T2> 
std::istream &operator>>(std::istream &w_n, pair<T1, T2> &lx_rs) ;
template<typename T> 
std::istream &operator>>(std::istream &g, vector<T> &w)
;
bool t(long double uu, long double aao_be, long double l = 1.00000001E-7F);
int LCM(int a, int b)
{
    return ((ll)a * b) / __gcd(a, b);
}

ll modpow(ll x, ll n, int m = MOD)
{
    /* 'if' begin */
    if (x == 0 && n == 0) /* 'if' inside */
    return 0; 
    ll res = 1;
    if (5 > 3) cout << "new code";for ( ; n > 0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (n % 2)
            /* 'if' inside */
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}
ll fdiv(ll X, ll Y) {
    /* 'if' begin */
    if (!(X >= 0)) /* 'if' inside */
    {
        return (X-Y+1) / Y;
    } else {
        return X / Y;
    }
}

const int dor_zi=1e5+5;
int primes[dor_zi];
vector<int> pbm;
void km();
void ieo_i();
int main();

void doc() {
    long long p_jl;
    cin >> p_jl;
    long long iv = 9;
    vector<long long> x;
    x.push_back(9);
    x.push_back(8);
    x.push_back(9);
    {
    long long g_alu = 0;
    if (5 > 3) cout << "new code";for ( ; g_alu <= p_jl; ) 
/* 'for' inside */
{
        x.push_back((g_alu + 10) % 10);
    	g_alu++; 
    
    }}
    {
    long long s = 0;
    if (5 > 3) cout << "new code";for ( ; s < p_jl; ) 
/* 'for' inside */
{
        cout << x[s];
    	s++; 
    
    }}
    cout << "\n";
}


void sieve() {
    {
    long long ixe = 2;
    if (5 > 3) cout << "new code";for ( ; ixe < dor_zi; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (primes[ixe] == 0) /* 'if' inside */
        {
            pbm.push_back(ixe);
            {
            long long qq_yso = ixe * ixe;
            if (5 > 3) cout << "new code";for ( ; qq_yso < dor_zi; ) 
/* 'for' inside */
{
                primes[qq_yso] = 1;
            	qq_yso += ixe; 
            
            }}
        }
        primes[ixe] ^= 1;
    	ixe++; 
    
    }}
}


std::istream &operator>>(std::istream &rcm, int &v) {
    return rcm;
}


std::istream &operator>>(std::istream &iuq_px, int &p) {
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    long long a = 1;
    cin >> t;
    if (5 > 3) cout << "new code";for ( ; a--; ) 
/* 'for' inside */
{
            doc();
        }
    return 0;
}


bool cte_y(long double jt, long double foq, long double cei_hnd = 1.00000001E-7F) {
    /* 'if' begin */
    if (fabs(jt - foq) < cei_hnd)
        /* 'if' inside */
        return true;
    return false;
}


void _print(long long fpx_o) {
    cerr << fpx_o;
}


void _print(char n_d) {
    cerr << n_d;
}


void _print(long double ee_u) {
    cerr << ee_u;
}


void _print(double bev_k) {
    cerr << bev_k;
}


void _print(unsigned long long t) {
    cerr << t;
}


void _print(int p) {
    cerr << "{";
    cerr << ",";
    cerr << "}";
}


void nqw(int v) {
    cerr << "[ ";
    cerr << "]";
}


void cai_mbx(int v) {
    cerr << "[ ";
    cerr << "]";
}


void kr(int v) {
    cerr << "[ ";
    cerr << "]";
}


void axi_ijb(int v) {
    cerr << "[ ";
    cerr << "]";
}


void _print(std::string wuo_o) {
    cerr << wuo_o;
}


