

#include<bits/stdc++.h>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define lld long double
#define fo(i,s,n) for(ll i=s;i<=n;i++)
#define fr(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define trav(x) for(auto &it:x)
#define mod 1000000000+7
// #define mod 998244353
#define pi 3.141592653589793238462643383279
typedef pair<ll,ll> pii;
#define ub upper_bound
#define lb lower_bound
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
#define all(x) (x).begin()+1, (x).end() //--
#define inf 1e18
#define setp(x) setprecision(x)
#define min(a, b)       ((a) < (b) ? (a) : (b))
#define max(a, b)       ((a) < (b) ? (b) : (a))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << "{ "; __print(x.first); cerr << ", "; __print(x.second); cerr << " }";}
template<typename T>
void __print(const T &x) {int f = 0; cerr << " "; for (auto &i: x) cerr << (f++ ? " , " : ""), __print(i); cerr << " ";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


clock_t time_p=clock();
void timer(){time_p=clock()-time_p;cerr<<"\nTime Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"sec\n";}

void swap(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
void google(ll t) {cout << "Case #" << t << ": ";}
ll bimult(ll a , ll b , ll m) {ll res = 0; while(b) {if(b&1) {res = (res + a)%m;}a = (a + a)%m;b>>=1;}return res;}
ll biexp(ll a, ll b , ll m) {ll res = 1;while(b) {if(b&1) {res = res * a;res%=m;}a = a * a;a%=m;b>>=1;}return res;}
inline ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
inline ll ceil(ll a, ll b){  return (a%b==0) ? a/b : a/b +1 ;}
//#define onebits(x)      __builtin_popcountll(x)
ll set_bits(ll n) { ll cnt = 0;while(n) { n-=n&-n; cnt++;}return cnt;}
#define zerobits(x)      __builtin_ctzll(x)
//const ll N = 2000010;
//template<class A> using ordered_set = tree<A,null_type,less<A>,rb_tree_tag,tree_order_statistics_node_update>;
  // find_by_order() , order_of_key()
priority_queue< ll , vector<ll> ,greater<ll> > pq;
vi dx{1 , 0 , -1 , 0};
vi dy{0 , 1 , 0 , -1};
string S1 = "abcdefghijklmnopqrstuvwxyz";
string S2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// auto good = [&]()

// ---------------------------------------*******************--------------------------------------//
map<ll,vector<ll>> mm , pre;
void spidy() {
      ll n; cin>>n;
      vi x(n+1) , y(n+1);
      mm.clear(),pre.clear();
      fo(i,1,n) cin>>x[i];
      fo(i,1,n) {
            cin>>y[i];
            mm[x[i]].pb(y[i]);
      }      
      trav(mm) {
            sort(it.S.begin(),it.S.end(),greater<ll>());
      }

      ll mx = 0;
      trav(mm) {
            ll x = it.S.size() , y = 0;
            mx = max(mx,x);
            fo(i,0,x-1) {
                  y += it.S[i];
                  pre[it.F].pb(y);
            }
      }

      debug(pre[1]);
      debug(pre[2]);

      vi ans(n+1,0);
      vector<ll> te;
      
      // fo(i,1,min(mx,n)) {
      //       trav(pre) {
      //             if(i <= it.S.size())
      //                   ans[i] += it.S[it.S.size()-it.S.size()%i-1];
      //       }
      // }

      trav(pre) {
            ll x = it.S.size();
            debug(it.S);
            fo(i,0,x-1) {
                  ans[i+1] += it.S[it.S.size()-it.S.size()%(i+1)-1]; 
            } 
      }

      fo(i,1,n) cout<<ans[i]<<" "; cout<<"\n";
      

}


// ---------------------------------------*******************--------------------------------------//
 
 
int main()
{
      
      // ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll t=1;
      cin>>t;
      while(t--){
            spidy();
      }
      timer();
      return 0;
}