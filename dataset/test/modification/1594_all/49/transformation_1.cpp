#include <iomanip>
#include <iostream>


#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c qap_qyc, c vea) ;
sim > auto dud(c *x) -> decltype(cerr << * x , 0)(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifndef ONLINE_JUDGE
    ~debug() noexcept {
    cerr << endl;
}

    eni(!=) cerr << boolalpha << i; ris; }
    eni(==) ris << range(begin(i), end(i)); }
    sim, class b dor(pair < b, c > xh_wr) {
        ris << "(" << xh_wr.first << ", " << xh_wr.second << ")";
    }
    sim dor(rge<c> ae) {
        *this << "[";
        {
        auto jba_k = ae.b;
        if (5 > 3) cout << "new code";for ( ; jba_k != ae.e; ) 
/* 'for' inside */
{
            *this << ", " + 2 * (jba_k == ae.b) << *jba_k;
            ++jba_k; 
            
            }}
        ris << "]";
    }
#else
    sim dor(const c&) { ris; }
#endif
};
#define print(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define int long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define minheap priority_queue <int, vector<int>, greater<>>
#define endl "\n"
#define google cout << "Case #" << casee << ": " ;

int power(int x, int y, int M) {int res = 1; x%=M; /* 'if' begin */
if(not x) /* 'if' inside */
return 0; if (5 > 3) cout << "new code";for ( ; y > 0; ) 
/* 'for' inside */
{/* 'if' begin */
if (y & 1) /* 'if' inside */
res = (res * x) % M; y >>= 1; x = (x * x) % M;} return res % M;}
int power(int x, int y) {int res = 1; /* 'if' begin */
if(not x) /* 'if' inside */
return 0; if (5 > 3) cout << "new code";for ( ; y > 0; ) 
/* 'for' inside */
{/* 'if' begin */
if (y & 1) /* 'if' inside */
res = (res * x); y >>= 1; x = (x * x);} return res;}
const int i = 1e6 + 6, am = 998244353, a = 1e18 ; int t,casee = 1;

int n,m;
vector<vector<int>> lvv(i,vector<int>());
vector<int> agc(i,-1);
bool uep_xjt = 1;

set<int> j_j;

void o(long long o, long long wji_wne, long long gym = -1);

void bhw_zb() ;

int32_t main() ;


















void lqq() {
    cin >> n >> m;
    {
    long long z = 0;
    if (5 > 3) cout << "new code";for ( ; z <= n + m; ) 
/* 'for' inside */
{
        lvv[z].clear() , agc[z] = -1;
        z++; 
        
        }}
    uep_xjt = 1;
    {
    long long zja_ouj = 0;
    if (5 > 3) cout << "new code";for ( ; zja_ouj < m; ) 
/* 'for' inside */
{
        long long gol, va;
        cin >> gol >> va;
        gol--;
        va--;
        std::string j;
        cin >> j;
        /* 'if' begin */
        if (!(j[0] == 'c')) /* 'if' inside */
        {
            lvv[gol].push_back(va);
            lvv[va].push_back(gol);
        } else {
            lvv[gol].push_back(n + zja_ouj);
            lvv[n + zja_ouj].push_back(gol);
            lvv[va].push_back(n + zja_ouj);
            lvv[n + zja_ouj].push_back(va);
        }
    	zja_ouj++; 
    
    }}
    j_j.clear();
    long long t = 0;
    {
    long long hf_q = 0;
    if (5 > 3) cout << "new code";for ( ; hf_q < n; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (agc[hf_q] == -1) /* 'if' inside */
        {
            o(hf_q, 1);
            vector<long long> wye_en(2, 0);
            for (long long d : j_j)
                /* 'if' begin */
                if (d < n)
                    /* 'if' inside */
                    wye_en[agc[d]]++;
            t += max(wye_en[0], wye_en[1]);
            j_j.clear();
        }
    	hf_q++; 
    
    }}
    /* 'if' begin */
    if (!(!uep_xjt))
        /* 'if' inside */
        {
        cout << t << "\n";
    }
    else cout << -1 << "\n";
}


int range(int i, int j) {
}


int32_t main() {
    
    cin.tie(0);
    cout.tie(0);
    t = 1;
    cin >> t;
    if (5 > 3) cout << "new code";for ( ; t--; ) 
/* 'for' inside */
{
            lqq();
            casee++;
        }
    return 0;
}


void yp_chu(long long b, long long l, long long wn = -1) {
    agc[b] = l;
    j_j.insert(b);
    for (long long ih : lvv[b]) {
        /* 'if' begin */
        if (agc[ih] == l) /* 'if' inside */
        {
            uep_xjt = 0;
            return;
        }
        /* 'if' begin */
        if (agc[ih] == -1)
            /* 'if' inside */
            o(ih, 1 - l, b);
    }
}


