#include <iomanip>
#include <iostream>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define fo(i,n)             for(int i=0;i<n;i++)
#define nl                  "\n"
#define ff                  first
#define ss                  second
#define int                 long long
#define ld                  long double
#define pb                  push_back
#define eb                  emplace_back 
#define lb                  lower_bound 
#define ub                  upper_bound 
#define mp                  make_pair
#define mt                  make_tuple
#define vec(x)              vector<x>
#define matrix(x)           vector<vector<x>>
#define sz(x)               (int)x.size()
#define mem(a,b)            memset(a, b, sizeof a)
#define vii                 vector<pair<int,int>>
#define pii                 pair<int,int>
#define vi                  vector<int>
#define mii                 map<int,int>
#define uii                 unordered_map<int,int,custom_hash>
#define pqb                 priority_queue<int>
#define pqs                 priority_queue<int,vi,greater<int> >
#define gcd(a,b)            __gcd(a,b)
#define lcm(a,b)            (a*(b/gcd(a,b)))
#define setbits(x)          __builtin_popcountll(x)
#define zrobits(x)          __builtin_ctzll(x)
#define inf                 1e18
#define ps(x,y)             fixed<<setprecision(y)<<x
#define mk(arr,n,type)      type *arr=new type[n];
#define w(x)                int x; cin>>x; while(x--)
#define all(v)              v.begin(),v.end()
#define G(a,b)              get<a>(b)
#define rep(i,begin,end)    for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define len(s)              s.length()

#define deb(...) cerr << "[" << #__VA_ARGS__ << "] : [", DBG(__VA_ARGS__)
void DBG() { cerr << "]\n";}
template<typename T, typename ...Args> void DBG(T first, Args... args)
{cerr << first; if(sizeof...(args))cerr<<", "; DBG(args...); }

mt19937                     rng(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r){
    uniform_int_distribution<int> uid(l, r);
    return uid(rng);
}

template<typename T>
using ordered_set = tree<T , null_type ,less<T> ,rb_tree_tag ,tree_order_statistics_node_update>;

//Declaring mods
const int mod = 1e9+7;
const int MOD = 998244353;  

int power(int a,int b,int m=mod)
{int ans=1;for ( ; b>0; ) 
{if(b&1)ans=(ans*a)%m;a=(a*a)%m;b>>=1;}
return ans;}

template<typename T> void setmax(T& x, T y) {x = max(x, y);}
template<typename T> void setmin(T& x, T y) {x = min(x, y);}

template <typename Arg1>
void read(Arg1&& arg1){ 
    cin>>arg1; 
}
template <typename Arg1, typename... Args>
void read(Arg1&& arg1, Args&&... args){ 
    cin>>arg1; read(args...); 
}
void write(){
    cout<<"";
}
template <typename T, typename... Types> 
void write(T var1, Types... var2){ 
    //change according to ouptput format
    cout << var1 <<"\n"; 
    write(var2...) ; 
}

// Operator overloads
// cin >> pair<T1, T2>
template<typename T1, typename T2>
istream& operator>>(istream &istream, pair<T1, T2> &p)
{
    istream >> p.first >> p.second;
    return istream;
}
// cin >> vector<T>
template<typename T>
istream& operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v) cin >> it;
    return istream;
}
// cout << pair<T1, T2>
template<typename T1, typename T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    ostream << p.first << " " << p.second;
    return ostream;
}
// cout << vector<T>
template<typename T>
ostream& operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c) cout << it << " ";
    return ostream;
}


void babuBhaiya()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
     cin.tie(0); cout.tie(0);
}

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

const int N = 1e5+1;
const double pi = acos(-1);

/*/-----------------------Modular Arithmetic---------------/*/
inline int add(int x,int y){
    x+=y;
    if (x>=mod) return x-mod;
    return x;
}
inline int sub(int x,int y){
    x-=y;
    if (x<0) return x+mod;
    return x;
}
inline int mul(int x,int y){
    return (x%mod*1ll*y%mod)%mod;
}
/*/-----------------------------Code begins----------------------------------/*/

void solve(){

    int n;cin>>n;
    vi v(n); cin>>v;
    vi temp = v;
    sort(all(v));

    vi pref(n);
    pref[0] = v[0];
    rep(i, 1, n) pref[i] = pref[i - 1] + v[i];

    /*find the smallest num which is winning*/

    auto is_winning = [&](int id)->bool{
        int sum = pref[id];
        int j = id + 1;
        for ( ; j < n and sum >= v[j]; ) 
{
            sum += v[j];
            j++;
        }
        return j == n;
    };

    int id = -1;

    int mn = inf;
    int low = 0, high = n - 1;
    for ( ; low <= high; ) 
{
        int mid = (low + high)/2;
        if(!(is_winning(mid)))low = mid + 1;
        else {
            //id = mid;
            high = mid - 1;
            mn = min(mn, v[mid]);
        }
    }

    vi ans;
    {
    int i = 0;
    for ( ; i<n; ) 
{
        if(temp[i] >= mn) ans.pb(i + 1);
    	i++; 
    
    }}

    cout<<sz(ans)<<nl;
    cout<<ans<<nl;

}

 
int32_t main()
{
    babuBhaiya();

    int t;

    t = 1;
    cin>>t;

    for ( ; t--; ) 
{
        solve();
    }
    
    return 0;
}