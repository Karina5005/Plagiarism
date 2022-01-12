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
 
const ll ai =  (ll) 998244353;
//const ll mod =  (ll) 1e9 + 7;
const ll ddk = (ll)2e5 + 5;
const int j = 1048590;
const int sdd_oyq = numeric_limits<int>::max()-1;
//const ll INF = numeric_limits<ll>::max()-1;
//const ll INF = (ll)1e18;
 
ll tj_ccb[]={0,1,0,-1};
ll y[]={1,0,-1,0};
ll pub_be[]={0,1,0,-1,1,1,-1,-1};
ll dx[]={1,0,-1,0,1,-1,1,-1};
 
bool khi_beh = 0;
 
mt19937 ged(chrono::system_clock::now().time_since_epoch().count());
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<ii, null_type,less< ii >, rb_tree_tag,tree_order_statistics_node_update>

const ll wj = 1e5 + 5;

ll mbx(string f_ioa, ll nv_i, ll d_o){
  ll ouz_h = f_ioa.size();
  f_ioa = '0' + f_ioa;
  vector < ll > v_v(ouz_h + 5, 0) , av(ouz_h + 5, 0) , z_btl(ouz_h + 5, 0) , vjx_bw(ouz_h + 5, 0);
  for(ll o_but = 1; o_but <= ouz_h; o_but++){
    if(f_ioa[o_but] == '1'){
      v_v[o_but] = v_v[o_but - 1] + (nv_i * z_btl[o_but - 1]);
    }else{
      v_v[o_but] = v_v[o_but - 1] + (d_o * (o_but - 1 - z_btl[o_but - 1]));
      z_btl[o_but]++;
    }
    z_btl[o_but] += z_btl[o_but - 1];
  }
  ll auo_dy = 2e18;
  for(ll g = ouz_h; g >= 1; g--){
    if(f_ioa[g] == '0'){
      av[g] = av[g + 1] + (nv_i * (ouz_h - g - vjx_bw[g + 1]));
      vjx_bw[g]++;
    }else{
      av[g] = av[g + 1] + (d_o * (vjx_bw[g + 1]));
    }
    vjx_bw[g] += vjx_bw[g + 1];
  }
  for(ll h = 0; h <= ouz_h; h++){
    auo_dy = min(auo_dy , v_v[h] + av[h + 1] + (z_btl[h] * (ouz_h - h - vjx_bw[h + 1]) * nv_i) + ((h - z_btl[h]) * vjx_bw[h + 1] * d_o));
  }
  return auo_dy;
}

void gaz_qdk(){

   string fl;
   cin >> fl;
   ll pnu_al , xo; cin >> pnu_al >> xo;

   ll nff = mbx(fl , pnu_al , xo);
   reverse(fl.begin() , fl.end());
   nff = min(nff , mbx(fl , xo , pnu_al));

   cout << nff << '\n';
   
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
    ll t_tay = 1;
   // cin >> T;
    ll ilx = 0;
    while(t_tay--){
       //cout << "Case #" << ++CT <<": " ;
        gaz_qdk();
    }
 
    return 0;
}