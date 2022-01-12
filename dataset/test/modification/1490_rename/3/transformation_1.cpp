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
void t() { cerr << "]\n";}
template<typename T, typename ...Args> void DBG(T hf_q, Args... wye_en)
{cerr << hf_q; if(sizeof...(args))cerr<<", "; DBG(wye_en...); }

mt19937                     d(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r){
    uniform_int_distribution<int> lqq(l, r);
    return lqq(d);
}

template<typename T>
using ordered_set = tree<T , null_type ,less<T> ,rb_tree_tag ,tree_order_statistics_node_update>;

//Declaring mods
const int yp_chu = 1e9+7;
const int b = 998244353;  

int power(int a,int b,int m=yp_chu)
{int ans=1;while(b>0){if(b&1)ans=(ans*a)%m;a=(a*a)%m;b>>=1;}
return ans;}

template<typename T> void setmax(T& l, T wn) {l = max(l, wn);}
template<typename T> void setmin(T& ih, T dcd) {ih = min(ih, dcd);}

template <typename Arg1>
void read(Arg1&& ax){ 
    cin>>ax; 
}
template <typename Arg1, typename... Args>
void read(Arg1&& bp, Args&&... lni){ 
    cin>>bp; read(lni...); 
}
void p(){
    cout<<"";
}
template <typename T, typename... Types> 
void write(T fij, Types... y){ 
    //change according to ouptput format
    cout << fij <<"\n"; 
    write(y...) ; 
}

// Operator overloads
// cin >> pair<T1, T2>
template<typename T1, typename T2>
istream& operator>>(istream &p, pair<T1, T2> &wo_jk)
{
    p >> wo_jk.first >> wo_jk.second;
    return p;
}
// cin >> vector<T>
template<typename T>
istream& operator>>(istream &qk, vector<T> &v)
{
    for (auto &dvh : v) cin >> dvh;
    return qk;
}
// cout << pair<T1, T2>
template<typename T1, typename T2>
ostream& operator<<(ostream &edb_ttp, const pair<T1, T2> &hg_vf)
{
    edb_ttp << hg_vf.first << " " << hg_vf.second;
    return edb_ttp;
}
// cout << vector<T>
template<typename T>
ostream& operator<<(ostream &wqh, const vector<T> &a_cq)
{
    for (auto &b_fcl : a_cq) cout << b_fcl << " ";
    return wqh;
}


void os()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

struct custom_hash {
    static uint64_t m(uint64_t hs_ftf) {
        hs_ftf += 0x9e3779b97f4a7c15;
        hs_ftf = (hs_ftf ^ (hs_ftf >> 30)) * 0xbf58476d1ce4e5b9;
        hs_ftf = (hs_ftf ^ (hs_ftf >> 27)) * 0x94d049bb133111eb;
        return hs_ftf ^ (hs_ftf >> 31);
    }

    size_t operator()(uint64_t k_r) const {
        static const uint64_t ge = chrono::steady_clock::now().time_since_epoch().count();
        return m(k_r + ge);
    }
};

const int h_rc = 1e5+1;
const double xfi_e = acos(-1);

/*/-----------------------Modular Arithmetic---------------/*/
inline int st_puc(int x,int y){
    x+=y;
    if (x>=yp_chu) return x-yp_chu;
    return x;
}
inline int wk_nh(int x,int y){
    x-=y;
    if (x<0) return x+yp_chu;
    return x;
}
inline int wi(int x,int y){
    return (x%yp_chu*1ll*y%yp_chu)%yp_chu;
}
/*/-----------------------------Code begins----------------------------------/*/

void owi(){

    int n;cin>>n;
    vi v(n); cin>>v;
    vi temp = v;
    sort(all(v));

    vi pref(n);
    pref[0] = v[0];
    rep(i, 1, n) pref[i] = pref[i - 1] + v[i];

    /*find the smallest num which is winning*/

    auto zd_ckh = [&](int id)->bool{
        int sum = pref[id];
        int j = id + 1;
        while(j < n and sum >= v[j]){
            sum += v[j];
            j++;
        }
        return j == n;
    };

    int id = -1;

    int mn = inf;
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(zd_ckh(mid)){
            //id = mid;
            high = mid - 1;
            mn = min(mn, v[mid]);
        }
        else low = mid + 1;
    }

    vi ans;
    for(int i = 0;i<n;i++){
        if(temp[i] >= mn) ans.pb(i + 1);
    }

    cout<<sz(ans)<<nl;
    cout<<ans<<nl;

}

 
int32_t main()
{
    os();

    int t;

    t = 1;
    cin>>t;

    while(t--){
        owi();
    }
    
    return 0;
}