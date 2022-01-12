#include<bits/stdc++.h>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define lld long double
#define f(i,s,n) for(ll i=s;i<=n;i++)
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
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
#define all(x) (x).begin(), (x).end() //--
#define inf 1e18
#define setp(x) setprecision(x)
#define min(a, b)       ((a) < (b) ? (a) : (b))
#define max(a, b)       ((a) < (b) ? (b) : (a))

void wn(int ih) {cerr << ih;}
void dcd(long ax) {cerr << ax;}
void bp(long long lni) {cerr << lni;}
void p(unsigned fij) {cerr << fij;}
void y(unsigned long p) {cerr << p;}
void wo_jk(unsigned long long qk) {cerr << qk;}
void v(float dvh) {cerr << dvh;}
void edb_ttp(double hg_vf) {cerr << hg_vf;}
void wqh(long double a_cq) {cerr << a_cq;}
void b_fcl(char os) {cerr << '\'' << os << '\'';}
void m(const char *hs_ftf) {cerr << '\"' << hs_ftf << '\"';}
void k_r(const string &ge) {cerr << '\"' << ge << '\"';}
void h_rc(bool xfi_e) {cerr << (xfi_e ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &st_puc) {cerr << "{ "; __print(st_puc.first); cerr << ", "; __print(st_puc.second); cerr << " }";}
template<typename T>
void __print(const T &wk_nh) {int wi = 0; cerr << " "; for (auto &owi: wk_nh) cerr << (wi++ ? " , " : ""), __print(owi); cerr << " ";}
void zd_ckh() {cerr << "]\n";}
template <typename T, typename... V>
void y(T tvq, V... d_mk) {__print(tvq); if (sizeof...(v)) cerr << ", "; _print(d_mk...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


clock_t e=clock();
void t_rf(){e=clock()-e;cerr<<"\nTime Taken : "<<(float)(e)/CLOCKS_PER_SEC<<"sec\n";}

void dor_tkw(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
void z_w(ll t) {cout << "Case #" << t << ": ";}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

vll wwk_ras(2e5+1);
void du_v() {
      wwk_ras[0] = 1 , wwk_ras[1] = 1;
      f(i,2,2e5) {
            wwk_ras[i] = wwk_ras[i-1]*i;
            wwk_ras[i]%=mod;
      }
}


ll bimult(ll a , ll b , ll m) {
      ll res = 0;
      while(b) {
            if(b&1) {
                  res = (res + a)%m;
            }
            a = (a + a)%m;
            b>>=1;
      }
      return res;     
}
ll biexp(ll a, ll b , ll m) {
      ll res = 1;
      while(b) {
            if(b&1) {
                  res = res * a;
                  res%=m;
            }
            a = a * a;
            a%=m;
            b>>=1;
      }
      return res;
}



ll ncr(ll a , ll b , ll m) {
      ll res = bimult(wwk_ras[a] , biexp(wwk_ras[b],m-2,m) , m);
      res = bimult(res , biexp(wwk_ras[a-b],m-2 , m) , m);
      return res;
}

inline ll s(ll a, ll b) { return b == 0 ? a : s(b, a % b); }
inline ll kz(ll a, ll b) { return a * b / s(a, b); }
inline ll pm(ll a, ll b){  return (a%b==0) ? a/b : a/b +1 ;}
//#define onebits(x)      __builtin_popcountll(x)
ll set_bits(ll n) { ll cnt = 0;while(n) { n-=n&-n; cnt++;}return cnt;}
#define zerobits(x)      __builtin_ctzll(x)


vll r(2000000+10);

void lr(){
      f(i,2,2000000+5) r[i] = -1;
      r[1] = 1;
      f(i,2,2000000+5){
            if(r[i] == -1){
                  for(ll j = i ; j<= 2000000 + 5; j+=i){
                        if(r[j] == -1){
                              r[j] = i;
                        }
                  }
            }
      }
}

vll gt(ll n){
      vll bim;
      while(r[n]!=1){
            bim.pb(r[n]);
            n = n/r[n];
      }
      return bim;
}

vll kzz_za(2000000+10,0);
 
void za_c() {
      for (ll i = 2; i <= 2000000+2; i++) {
            if (kzz_za[i] == 0) { // Number is prime
                  for (ll j = i; j <= 2000000+2; j += i) {
                        kzz_za[j]++;
                  }
            }
      }
}

bool ew_tgu(ll n) {
      if(n == 1) return false;
      if(n == 2 || n == 3) return true;
      if(n%2 == 0 || n%3 == 0) return false;
      for(ll i=5; i*i<=n; i=i+6) {
            if(n%i==0 || n%(i+2)==0)
            return false;
      }
      return true;
}

// "excitement leads to disappointment"
// if -x <= a <= x , see for ( 0 0 0 ... ).
// for storing freq use vector if arr[i] <= 2e5 .. ( 0 <= a[i] <= n ).

// #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
  // find_by_order() , order_of_key()
const ll rx = 2000010;
priority_queue< ll , vector<ll> ,greater<ll> > dvl_y;
vll m{1 , 0 , -1 , 0};
vll oa_m{0 , 1 , 0 , -1};
string qqo = "abcdefghijklmnopqrstuvwxyz";
string wt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// ---------------------------------------*******************--------------------------------------//


void au_wqh()
{
  ll n;
  cin>>n;
   ll ans=0;
   //a^2=2*b+1;  // c^2 hi sabse bada hoga and c<=n
   if(n>=3)
   {
       for(ll i=3;i*i<=2*n+1;i+=2) // i for a
       {
           ll a=i;
           ll b=(a*a-1)/2;
           ll c=a*a-b;
           ll cc=a*a+b*b;
           if(c<=n && c*c==cc) {
               ans++;
               debug(a);
               debug(b);
               debug(c);
           }
        
       }
    }
  cout<<ans<<endl;
 
}


/* stuff you should really look for
    * "Keep your thought process clear!"
    * THINK FIRST!, THEN CODE!
    * List/write down the OBSERVATIONS and think in a DISCIPLINED way !
    * Observe/simulate the test cases properly
    * Re-read the question.
    * DON'T GET STUCK ON ONE APPROACH
    * int overflow, array bounds
    * special cases (n=1?), set assert, clear structure for next test case.
    * comparitive(&&,||,==) execute first than bit operator(<<,>>,&,^,|).
    * do smth instead of nothing and stay organized
    * oeis.org
*/
// Template by Benq.


// ---------------------------------------*******************--------------------------------------//
 
 
int main()
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //   prime_factorization();
    //   f_factorial();
    //   pf_count();
      ll t=1;
       cin>>t;
      while(t--){
          string w_hd="testcase=";
          debug(s);
          debug(t);
         // cout<<endl;
            au_wqh();
      }
      t_rf();
      return 0;
}