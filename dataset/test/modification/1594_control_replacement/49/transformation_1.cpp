#include <iomanip>
#include <iostream>
/*  Author - Satwik_Tiwari  */

#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifndef ONLINE_JUDGE
    ~debug() { cerr << endl; }
    eni(!=) cerr << boolalpha << i; ris; }
    eni(==) ris << range(begin(i), end(i)); }
    sim, class b dor(pair < b, c > d) {
        ris << "(" << d.first << ", " << d.second << ")";
    }
    sim dor(rge<c> d) {
        *this << "[";
        {
        auto it = d.b;
        for ( ; it != d.e; ) 
{
            *this << ", " + 2 * (it == d.b) << *it;
            ++it; 
            
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

int power(int x, int y, int M) {int res = 1; x%=M; if(not x) return 0; for ( ; y > 0; ) 
{if (y & 1) res = (res * x) % M; y >>= 1; x = (x * x) % M;} return res % M;}
int power(int x, int y) {int res = 1; if(not x) return 0; for ( ; y > 0; ) 
{if (y & 1) res = (res * x); y >>= 1; x = (x * x);} return res;}
const int mxn = 1e6 + 6, mod = 998244353, inf = 1e18 ; int t,casee = 1;

int n,m;
vector<vector<int>> g(mxn,vector<int>());
vector<int> color(mxn,-1);
bool pos = 1;

set<int> done;

void dfs(int st, int col, int par = -1){
    color[st] = col;
    done.insert(st);
    for(int i: g[st]){
        if(color[i] == col){
            pos = 0; return;
        }
        if(color[i] == -1) dfs(i,1-col,st);
    }
}

void test_case() {
    cin >> n >> m;

    {
    int i=0;
    for ( ; i<=n + m; ) 
{
    g[i].clear(), color[i] = -1;
    i++; 
    
    }}
    pos = 1;

    {
    int i=0;
    for ( ; i<m; ) 
{
        int l,r; cin >> l >> r; l--; r--;
        string comment; cin >> comment;
        if(!(comment[0] == 'c')){
            g[l].push_back(r);
            g[r].push_back(l);
        }
        else{
            g[l].push_back(n + i);
            g[n + i].push_back(l);
            g[r].push_back(n + i);
            g[n + i].push_back(r);
        }
    	i++; 
    
    }}

    done.clear();
    int ans = 0;
    {
    int i=0;
    for ( ; i<n; ) 
{
        if(color[i] == -1) {
            dfs(i,1);
            vector<int> cnt(2,0);
            for(int j: done) if(j < n) cnt[color[j]]++;
            ans += max(cnt[0],cnt[1]);
            done.clear();
        }
    	i++; 
    
    }}


    if(!(not pos)) {
        cout << ans << endl;
    }ri  */

#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifndef ONLINE_JUDGE
    ~debug() { cerr << endl; }
    eni(!=) cerr << boolalpha << i; ris; }
    eni(==) ris << range(begin(i), end(i)); }
    sim, class b dor(pair < b, c > d) {
        ris << "(" << d.first << ", " << d.second << ")";
    }
    sim dor(rge<c> d) {
        *this << "[";
        {
        auto it = d.b;
        for ( ; it != d.e; ) 
{
            *this << ", " + 2 * (it == d.b) << *it;
            ++it; 
            
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

int power(int x, int y, int M) {int res = 1; x%=M; if(not x) return 0; while (y > 0) {if (y & 1) res = (res * x) % M; y >>= 1; x = (x * x) % M;} return res % M;}
int power(int x, int y) {int res = 1; if(not x) return 0; while (y > 0) {if (y & 1) res = (res * x); y >>= 1; x = (x * x);} return res;}
const int mxn = 1e6 + 6, mod = 998244353, inf = 1e18 ; int t,casee = 1;

int n,m;
vector<vector<int>> g(mxn,vector<int>());
vector<int> color(mxn,-1);
bool pos = 1;

set<int> done;

void dfs(int st, int col, int par = -1){
    color[st] = col;
    done.insert(st);
    for(int i: g[st]){
        if(color[i] == col){
            pos = 0; return;
        }
        if(color[i] == -1) dfs(i,1-col,st);
    }
}

void test_case() {
    cin >> n >> m;

    {
    int i=0;
    while (i<=n + m) {
    g[i].clear(), color[i] = -1;
    i++; 
    
    }}
    pos = 1;

    {
    int i=0;
    while (i<m) {
        int l,r; cin >> l >> r; l--; r--;
        string comment; cin >> comment;
        if(comment[0] == 'c'){
            g[l].push_back(n + i);
            g[n + i].push_back(l);
            g[r].push_back(n + i);
            g[n + i].push_back(r);
        }
        else{
            g[l].push_back(r);
            g[r].push_back(l);
        }
    	i++; 
    
    }}

    done.clear();
    int ans = 0;
    {
    int i=0;
    while (i<n) {
        if(color[i] == -1) {
            dfs(i,1);
            vector<int> cnt(2,0);
            for(int j: done) if(j < n) cnt[color[j]]++;
            ans += max(cnt[0],cnt[1]);
            done.clear();
        }
    	i++; 
    
    }}


    if(not pos) cout << -1 << endl;
    else
}

int32_t main() {
    FastIO;
    t = 1;
    cin >> t;
    while (t--) {
        test_case();
        casee++;
    }
    return 0;
}
















