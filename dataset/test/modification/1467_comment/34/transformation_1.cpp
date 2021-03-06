


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

void _print(unsigned short t){ cerr << t; }
void _print(short t){ cerr << t; }
void _print(unsigned int t){ cerr << t; }
void _print(int t){ cerr << t; }
void _print(unsigned long t){ cerr << t; }
void _print(long t){ cerr << t; }
void _print(unsigned long long t){ cerr << t; }
void _print(long long t){ cerr << t; }
void _print(float t){ cerr << t; }
void _print(double t){ cerr << t; }
void _print(long double t){ cerr << t; }
void _print(unsigned char t){ cerr << t; }
void _print(char t){ cerr << t; }
void _print(string t){ cerr << t; }

template<typename A> void _print(vector<A> v);
template<typename A, typename B> void _print(pair<A, B> p);
template<typename A> void _print(set<A> s);
template<typename A, typename B> void _print(map<A, B> mp);
template<typename A> void _print(multiset<A> s);
template<typename A, typename B> void _print(multimap<A, B> mp);
template<typename A> void _print(unordered_set<A> s);
template<typename A, typename B> void _print(unordered_map<A, B> mp);
template<typename A> void _print(unordered_multiset<A> s);
template<typename A, typename B> void _print(unordered_multimap<A, B> mp);
template<typename A> void _print(stack<A> s);
template<typename A> void _print(queue<A> q);
template<typename A> void _print(priority_queue<A> pq);
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> pq);

template<typename A> void _print(vector<A> v){ /* 'if' begin */
if(!v.empty())/* 'if' inside */
{ cerr << "[ "; for(auto it=v.begin(); it!=(v.end()-1); it++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*(v.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A, typename B> void _print(pair<A, B> p){ cerr << "{ "; _print(p.first); cerr << ", "; _print(p.second); cerr << " }"; }
template<typename A> void _print(set<A> s){ /* 'if' begin */
if(!s.empty())/* 'if' inside */
{ cerr << "{ "; for(auto it=s.begin(), lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*(s.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(map<A, B> mp){ /* 'if' begin */
if(!mp.empty())/* 'if' inside */
{ cerr << "[ "; for(auto it=mp.begin(), lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*(mp.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(multiset<A> s){ /* 'if' begin */
if(!s.empty())/* 'if' inside */
{ cerr << "{ "; for(auto it=s.begin(), lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*(s.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(multimap<A, B> mp){ /* 'if' begin */
if(!mp.empty())/* 'if' inside */
{ cerr << "[ "; for(auto it=mp.begin(), lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*(mp.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_set<A> s){ /* 'if' begin */
if(!s.empty())/* 'if' inside */
{ cerr << "{ "; auto it = s.begin(); for(auto lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*it); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_map<A, B> mp){ /* 'if' begin */
if(!mp.empty())/* 'if' inside */
{ cerr << "[ "; auto it = mp.begin(); for(auto lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*it); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(unordered_multiset<A> s){ /* 'if' begin */
if(!s.empty())/* 'if' inside */
{ cerr << "{ "; auto it=s.begin(); for(auto lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*it); cerr << " }"; } else{ cerr << "{}"; } }
template<typename A, typename B> void _print(unordered_multimap<A, B> mp){ /* 'if' begin */
if(!mp.empty())/* 'if' inside */
{ cerr << "[ "; auto it=mp.begin(); for(auto lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
{ _print(*it); cerr <<", "; } _print(*it); cerr << " ]"; } else{ cerr << "[]"; } }
template<typename A> void _print(stack<A> s){ /* 'if' begin */
if(!s.empty())/* 'if' inside */
{ stack<A> t; cerr << "T[ "; while(s.size() != 1){ _print(s.top()); cerr << ", "; t.push(s.top()); s.pop(); } _print(s.top()); cerr << " ]B"; t.push(s.top()); s.pop(); while(!t.empty()){ s.push(t.top()); t.pop(); } } else{ cerr << "T[]B"; } }
template<typename A> void _print(queue<A> q){ /* 'if' begin */
if(!q.empty())/* 'if' inside */
{ queue<A> t; cerr << "F[ "; while(q.size() != 1){ _print(q.front()); cerr << ", "; t.push(q.front()); q.pop(); } _print(q.front()); cerr << " ]B"; t.push(q.front()); q.pop(); while(!t.empty()){ q.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A> pq){ /* 'if' begin */
if(!pq.empty())/* 'if' inside */
{ queue<A> t; cerr << "T[ "; while(pq.size() != 1){ _print(pq.top()); cerr << ", "; t.push(pq.top()); pq.pop(); } _print(pq.top()); cerr << " ]B"; t.push(pq.top()); pq.pop(); while(!t.empty()){ pq.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }
template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> pq){ /* 'if' begin */
if(!pq.empty())/* 'if' inside */
{ queue<A> t; cerr << "T[ "; while(pq.size() != 1){ _print(pq.top()); cerr << ", "; t.push(pq.top()); pq.pop(); } _print(pq.top()); cerr << " ]B"; t.push(pq.top()); pq.pop(); while(!t.empty()){ pq.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_set_dec = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset_dec = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
T gcd(T a, T b){
    /* 'if' begin */
    if(b == 0)
        /* 'if' inside */
        return a;
    return(gcd<T>(b, a%b));
}

template<typename T>
T lcm(T a, T b){
    return (a / gcd<T>(a, b)) * b;
}

template<typename T>
void swap_(T &a, T &b){
    a = a^b;
    b = b^a;
    a = a^b;
}

template<typename T>
T modpow(T a, T b, T m){
    /* 'if' begin */
    if(b == 0)/* 'if' inside */
    {
        return 1;
    }
    T c = modpow(a, b/2, m);
    c = (c * c)%m;
    /* 'if' begin */
    if(b%2 == 1)/* 'if' inside */
    {
        c = (c * a)%m;
    }
    return c;
}







ll check(vll &a, ll i){
    ll n = a.size();
    /* 'if' begin */
    if(i == 0 || i  == n-1)/* 'if' inside */
    {
        return 0;
    }
    /* 'if' begin */
    if(a[i] > a[i-1] && a[i] > a[i+1])/* 'if' inside */
    {
        return 1;
    }
    /* 'if' begin */
    if(a[i] < a[i-1] && a[i] < a[i+1])/* 'if' inside */
    {
        return 1;
    }
    return 0;
}

void solve(){
    ll n; cin>>n;
    ll cnt = 0;
    vll a(n), t(n);
    daalo(a);
    ll mm = 0;
    for(ll i=1; i<n-1; i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(a[i] > a[i-1] && a[i] > a[i+1])/* 'if' inside */
        {
            t[i] = 1;
            cnt++;
        }
        /* 'if' begin */
        if(a[i] < a[i-1] && a[i] < a[i+1])/* 'if' inside */
        {
            t[i] = 1;
            cnt++;
        }
    }
    

    for(ll i=1; i<n-1; i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(t[i] == 1)/* 'if' inside */
        {
            ll cnt1 = t[i-1]+t[i]+t[i+1];
            ll tmp = a[i];
            a[i] = a[i-1];
            ll cnt2 = check(a, i-1) + check(a, i) + check(a, i+1);
            a[i] = a[i+1];
            ll cnt3 = check(a, i-1) + check(a, i) + check(a, i+1);
            a[i] = tmp;
            mm = max(mm, max(cnt1-cnt2, cnt1-cnt3));
        }
    }
    cout<<cnt-mm<<endl;
}

int main(){

    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    cin >> t;
    for(ll i=1; i<=t; i++)/* 'for' inside */
    {
        pt(i);
        solve();
    }

    return 0;
}