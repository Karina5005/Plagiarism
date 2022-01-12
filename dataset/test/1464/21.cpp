/***Farhan132***/
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
 
 
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double dd;
typedef vector<ll> vll;
typedef pair<ll , ll> ii;
typedef vector< ii > vii;
typedef pair < pair < ll , ll > , pair < ll , ll > > cm; 
 
#define ff first
#define ss second
#define pb push_back
#define in insert
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define f1(b) for(int i=1;i<=(b);i++)
#define f11(b) for(int j=1;j<=(b);j++)
#define f2(a,b) for(int i=(a);i<=(b);i++)
#define f22(a,b) for(int j=(a);j<=(b);j++)
#define sf(a) scanf("%lld",&a)
#define sff(a,b) scanf("%lld %lld", &a , &b)
#define pf(a) printf("%lld\n",a)
#define pff(a,b) printf("%lld %lld\n", a , b)
#define bug printf("**!\n")
#define mem(a , b) memset(a, b ,sizeof(a))
#define front_zero(n) __builtin_clzll(n)
#define back_zero(n) __builtin_ctzll(n)
#define total_one(n) __builtin_popcountll(n)
#define clean fflush(stdout)
 
const ll mod =  (ll) 998244353;
//const ll mod =  (ll) 1e9 + 7;
const ll maxn = (ll)2e5 + 5;
const int nnn = 1048590;
const int inf = numeric_limits<int>::max()-1;
//const ll INF = numeric_limits<ll>::max()-1;
//const ll INF = (ll)1e18;
 
ll dx[]={0,1,0,-1};
ll dy[]={1,0,-1,0};
ll dxx[]={0,1,0,-1,1,1,-1,-1};
ll dyy[]={1,0,-1,0,1,-1,1,-1};
 
bool USACO = 0;
 
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<ii, null_type,less< ii >, rb_tree_tag,tree_order_statistics_node_update>

const ll N = 1e5 + 5;

ll calc(string s, ll x, ll y){
  ll n = s.size();
  s = '0' + s;
  vector < ll > pref(n + 5, 0) , suf(n + 5, 0) , c1(n + 5, 0) , c2(n + 5, 0);
  for(ll i = 1; i <= n; i++){
    if(s[i] == '1'){
      pref[i] = pref[i - 1] + (x * c1[i - 1]);
    }else{
      pref[i] = pref[i - 1] + (y * (i - 1 - c1[i - 1]));
      c1[i]++;
    }
    c1[i] += c1[i - 1];
  }
  ll ans = 2e18;
  for(ll i = n; i >= 1; i--){
    if(s[i] == '0'){
      suf[i] = suf[i + 1] + (x * (n - i - c2[i + 1]));
      c2[i]++;
    }else{
      suf[i] = suf[i + 1] + (y * (c2[i + 1]));
    }
    c2[i] += c2[i + 1];
  }
  for(ll i = 0; i <= n; i++){
    ans = min(ans , pref[i] + suf[i + 1] + (c1[i] * (n - i - c2[i + 1]) * x) + ((i - c1[i]) * c2[i + 1] * y));
  }
  return ans;
}

void solve(){

   string s;
   cin >> s;
   ll x , y; cin >> x >> y;

   ll ans = calc(s , x , y);
   reverse(s.begin() , s.end());
   ans = min(ans , calc(s , y , x));

   cout << ans << '\n';
   
   return;
}

 
int main() {
    
    
    #ifdef LOCAL
        freopen("in", "r", stdin);
        freopen("out.txt", "w", stdout);
    #else 
       ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    #endif
   // pre(N);
   // mem(T.ft , 0);
    ll T = 1;
   // cin >> T;
    ll CT = 0;
    while(T--){
       //cout << "Case #" << ++CT <<": " ;
        solve();
    }
 
    return 0;
}