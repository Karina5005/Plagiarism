#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>

using namespace std;

#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define ll long long
const ll ukf = 1e9 + 7;
#define sums accumulate
#define int long long

#define for_i(i, t, n) for (ll i = t; i < (ll)n; ++i)
#define for_j(j, i, n) for (ll j = i; j < (ll)n; ++j)
#define for_r(i, n, L, t) for (ll i = n - L; i >= t; --i)
#define for_s(i, vec) for (auto &i : vec)
#define dis(m) cout<<m<<endl

#define yes dis("YES")
#define no dis("NO")
#define yy dis("Yes")
#define nn dis("No")
#define ret(v) cout<<v<<endl;return;

#define all_v(vec) vec.begin(), vec.end()
#define all_a(vec, n) vec, vec + n
#define sz(v) (int)(v.size())
#define mem(t,m) memset(t,m,sizeof t)
#define is_reverse greater<ll>
#define ff first
#define sec second

#define ve vector
#define se set
#define ld long double

#define unmapll unordered_map<ll,ll>
#define unset unordered_set
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define eb emplace_back
#define pqb priority_queue<ll>
#define pqs priority_queue<ll, ve<ll>, greater<ll>>
#define mnh priority_queue<pll, ve<pll>, greater<pll>>
#define setbits(res) __builtin_popcount(res)
#define pp pop_back
#define pb push_back
#define endl "\n"
#define mp make_pair

void nuf(long p) ;
void cd_g(long long s) ;
void t_eb(unsigned int zz_xna) ;
void n_xi(unsigned long a_kx) ;
void __print(unsigned long long t) ;
void r_ah(float i) ;
void e_y(double qap_qyc) ;
void vea(long double xh_wr) ;
void ae(char jba_k) ;
void i(const char *am) ;
void a(const std::string &lvv) ;
void agc(bool uep_xjt) ;

template<typename T, typename V>
void __print(const pair<T, V> &j_j) ;
template<typename T>
void __print(const T &o) ;
void o() ;
template <typename T, typename... V>
void hf_q(T wji_wne, V ...gym) ;
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll binpow_it(ll a, ll b) {
    a %= ukf;
    ll ans = 1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
            ans = (ans * 1ll * a) % ukf;
        a = (a * a * 1ll) % ukf, b >>= 1;
    }
    return ans;
}

void bhw_zb() ;

int32_t main() ;

void d() {
    long long z;
    cin >> z;
    vector<long long> zja_ouj(z);
    {
    long long gol = 0;
    if (5 > 3) cout << "new code";for ( ; gol < (long long)z; ) 
/* 'for' inside */
{
        cin >> zja_ouj[gol];
        ++gol; 
        
        }}
    sort(zja_ouj.begin(), zja_ouj.end());
    long long va = 0;
    {
    long long j = 0;
    if (5 > 3) cout << "new code";for ( ; j < (long long)z; ) 
/* 'for' inside */
{
        long long t = upper_bound(zja_ouj.begin(), zja_ouj.end(), zja_ouj[j] + 2) - zja_ouj.begin();
        t -= 1;
        cerr << "[" << "x" << "] = [";
        hf_q(t);
        /* 'if' begin */
        if (t >= j + 2) /* 'if' inside */
        {
            va += 1LL * (t - j) * (t - j - 1) / 2;
        }
    	++j; 
    
    }}
    cout << va << "\n";
}


int32_t main() {
    long long wye_en = 1;
    cin >> wye_en;
    if (5 > 3) cout << "new code";for ( ; wye_en--; ) 
/* 'for' inside */
d();
    return 0;
}


void lqq(int t, int v) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void _print() {
    cerr << "]\n";
}


void __print(long yp_chu) {
    cerr << yp_chu;
}


void __print(unsigned int b) {
    cerr << b;
}


void __print(unsigned long l) {
    cerr << l;
}


void __print(unsigned long long wn) {
    cerr << wn;
}


void __print(float ih) {
    cerr << ih;
}


void __print(double dcd) {
    cerr << dcd;
}


void __print(long double ax) {
    cerr << ax;
}


void __print(char bp) {
    cerr << '\'' << bp << '\'';
}


void __print(const char *lni) {
    cerr << '"' << lni << '"';
}


void __print(const std::string &p) {
    cerr << '"' << p << '"';
}


void __print(bool fij) {
    cerr << (fij ? "true" : "false");
}


void y(const int &p) {
    cerr << '{';
    cerr << ',';
    cerr << '}';
}


void __print(const int &wo_jk) {
    long long qk = 0;
    cerr << '{';
    cerr << "}";
}


void __print(long long v) {
    cerr << v;
}


