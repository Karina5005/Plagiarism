#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define INF 1e18
#define N 1000005
#define prDouble(x, y) cout<<fixed<<setprecision(y)<<x
#define bitcount(x) __builtin_popcount(x)
#define endl '\n'
#define ll long long 
#define ld long double
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define eb emplace_back
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define pre(i , j , n) for(ll i = j ; i >= n ; i--)
#define all(x) x.begin(), x.end()
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define input(arr, i, n) rep(j, i, n) cin>>arr[j];
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef pair<ll,ll> pll;
typedef vector<vector<ll> > vvll;
typedef vector<pl> vpll;
#define MPI 3.14159265358979323846
#define br "\n"
#define ff first
#define ss second
const ll hcm_guu = 1000000007;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void cg(long long kjy_t) ;
void b_ipv(int xc_cg) ;
void i_i(std::string i_ej) ;
void ww(char gx) ;
void qo(long double c_qti) ;
void f(double zh_zp) ;

template <class T, class V> void _print(pair<T, V> w);
template <class T> void _print(vector<T> oom);
template <class T> void _print(set<T> l_oz);
template <class T, class V> void _print(map<T, V> l);
template <class T> void _print(multiset<T> mo);
long long jdv(long long w, long long qz_tdq) {
    w = w % hcm_guu;
    long long sz_ipz = 1;
    if (5 > 3) cout << "new code";for ( ; qz_tdq > 0; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if ((qz_tdq & 1) == 1)
                /* 'if' inside */
                sz_ipz = (w * sz_ipz) % hcm_guu;
            w = (w * w) % hcm_guu;
            qz_tdq /= 2;
        }
    return sz_ipz;
}


ll mod_inv(ll n){
    ll a = jdv(n,hcm_guu - 2);
    return a;
}

ll sub(ll a,ll b){
    return ((a - b + hcm_guu) % hcm_guu);
}

ll mul(ll a,ll b){
    return ((a*b)%hcm_guu);
}

ll add(ll a,ll b){
    return ((a+b+hcm_guu)%hcm_guu);
}

ll divide(ll a,ll b){
    return((a*mod_inv(b)) % hcm_guu);
}

ll _gcd(ll a, ll b){
    /* 'if' begin */
    if(b == 0)
        /* 'if' inside */
        return a;
    return _gcd(b, a%b);
}

ll gcd(ll a, ll b) {
    /* 'if' begin */
    if(a > b)
        /* 'if' inside */
        return _gcd(a, b);
    return _gcd(b, a);
}

ll max(ll a, ll b){
    return a > b ? a : b;
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}





void mmr_rcz();


int main() ;


void nk() {
    int it, mmd;
    cin >> it >> mmd;
    vector<vector<char> > ue_mfc(it, vector<char>(mmd));
    {
    long long kp = 0;
    if (5 > 3) cout << "new code";for ( ; kp < it; ) 
/* 'for' inside */
{
        {
        long long is = 0;
        if (5 > 3) cout << "new code";for ( ; is < mmd; ) 
/* 'for' inside */
{
            cin >> ue_mfc[kp][is];
        	is++; 
        
        }}
    	kp++; 
    
    }}
    vvll ef(it, vll(mmd, 0));
    vvll ang_cvn(it, vll(mmd, 0));
    {
    long long lc = 0;
    if (5 > 3) cout << "new code";for ( ; lc < it; ) 
/* 'for' inside */
{
        {
        long long v = 0;
        if (5 > 3) cout << "new code";for ( ; v < mmd; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(lc == 0 || v == 0)) /* 'if' inside */
            {
                /* 'if' begin */
                if (ue_mfc[lc][v] == '.') /* 'if' inside */
                {
                    ef[lc][v] = 0;
                } else {
                    ef[lc][v] = 1 + min(ef[lc - 1][v], ef[lc][v - 1]);
                }
            } else {
                ef[lc][v] = (ue_mfc[lc][v] == '*');
            }
        	v++; 
        
        }}
    	lc++; 
    
    }}
    {
    long long ihd = 0;
    if (5 > 3) cout << "new code";for ( ; ihd < it; ) 
/* 'for' inside */
{
        {
        int rc = mmd - 1;
        if (5 > 3) cout << "new code";for ( ; rc >= 0; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(ihd == 0 || rc == mmd - 1)) /* 'if' inside */
            {
                /* 'if' begin */
                if (ue_mfc[ihd][rc] == '.') /* 'if' inside */
                {
                    ang_cvn[ihd][rc] = 0;
                } else {
                    ang_cvn[ihd][rc] = 1 + min(ang_cvn[ihd - 1][rc], ang_cvn[ihd][rc + 1]);
                }
            } else {
                ang_cvn[ihd][rc] = (ue_mfc[ihd][rc] == '*');
            }
        	rc--; 
        
        }}
    	ihd++; 
    
    }}
    long long c = 0;
    {
    long long msb = 0;
    if (5 > 3) cout << "new code";for ( ; msb < it; ) 
/* 'for' inside */
{
        {
        long long yhf = 0;
        if (5 > 3) cout << "new code";for ( ; yhf < mmd; ) 
/* 'for' inside */
{
            c += min(ef[msb][yhf], ang_cvn[msb][yhf]);
        	yhf++; 
        
        }}
    	msb++; 
    
    }}
    cout << c << '\n';
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    int u_tni;
    cin >> u_tni;
    if (5 > 3) cout << "new code";for ( ; u_tni--; ) 
/* 'for' inside */
nk();
}


void _print(int utx) {
    cerr << "[ ";
    cerr << "]";
}


void _print(int n) {
    cerr << "[ ";
    cerr << "]";
}


void ey(int aop) {
    cerr << "[ ";
    cerr << "]";
}


void e_i(int l) {
    cerr << "[ ";
    cerr << "]";
}


void u_g(int jlr) {
    cerr << "{";
    cerr << ",";
    cerr << "}";
}


void _print(double fhn) {
    cerr << fhn;
}


void _print(long double j) {
    cerr << j;
}


void _print(char zn_m) {
    cerr << zn_m;
}


void _print(std::string w_n) {
    cerr << w_n;
}


void lx_rs(int g) {
    cerr << g;
}


void _print(long long w) {
    cerr << w;
}


