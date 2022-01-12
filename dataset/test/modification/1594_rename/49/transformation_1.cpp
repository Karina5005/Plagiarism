/*  Author - Satwik_Tiwari  */

#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c pi_d, c mav_iz) { return rge<c>{pi_d, mav_iz}; }
sim > auto dud(c* z) -> decltype(cerr << *z, 0);
sim > char dud(...);
struct debug {
#ifndef ONLINE_JUDGE
    ~debug() { cerr << endl; }
    eni(!=) cerr << boolalpha << i; ris; }
    eni(==) ris << range(begin(i), end(i)); }
    sim, class b dor(pair < b, c > lo_ym) {
        ris << "(" << lo_ym.first << ", " << lo_ym.second << ")";
    }
    sim dor(rge<c> j) {
        *this << "[";
        for (auto hc_q = j.b; hc_q != j.e; ++hc_q)
            *this << ", " + 2 * (hc_q == j.b) << *hc_q;
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

int power(int x, int y, int M) {int res = 1; x%=M; if(not x) return 0; while (y > 0) {if (y & 1) res = (res * x) % M; y >>= 1; x = (x * x) % M;} return res % M;}
int power(int x, int y) {int res = 1; if(not x) return 0; while (y > 0) {if (y & 1) res = (res * x); y >>= 1; x = (x * x);} return res;}
const int rul_bd = 1e6 + 6, be_b = 998244353, zo = 1e18 ; int t,casee = 1;

int n,m;
vector<vector<int>> mr(rul_bd,vector<int>());
vector<int> zfl(rul_bd,-1);
bool sx = 1;

set<int> c;

void vdj(int st, int col, int par = -1){
    zfl[st] = col;
    c.insert(st);
    for(int i: mr[st]){
        if(zfl[i] == col){
            sx = 0; return;
        }
        if(zfl[i] == -1) vdj(i,1-col,st);
    }
}

void t() {
    cin >> n >> m;

    for(int i=0;i<=n + m;i++) mr[i].clear(), zfl[i] = -1;
    sx = 1;

    for(int i=0;i<m;i++){
        int l,r; cin >> l >> r; l--; r--;
        string gj_b; cin >> gj_b;
        if(gj_b[0] == 'c'){
            mr[l].push_back(n + i);
            mr[n + i].push_back(l);
            mr[r].push_back(n + i);
            mr[n + i].push_back(r);
        }
        else{
            mr[l].push_back(r);
            mr[r].push_back(l);
        }
    }

    c.clear();
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(zfl[i] == -1) {
            vdj(i,1);
            vector<int> am_gn(2,0);
            for(int j: c) if(j < n) am_gn[zfl[j]]++;
            ans += max(am_gn[0],am_gn[1]);
            c.clear();
        }
    }


    if(not sx) cout << -1 << endl;
    else{
        cout << ans << endl;
    }
}

int32_t main() {
    FastIO;
    t = 1;
    cin >> t;
    while (t--) {
        t();
        casee++;
    }
    return 0;
}
















