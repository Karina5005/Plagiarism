#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void xh_wr(int ae) {cerr << ae;}
void jba_k(long i) {cerr << i;}
void am(long long a) {cerr << a;}
void lvv(unsigned agc) {cerr << agc;}
void uep_xjt(unsigned long j_j) {cerr << j_j;}
void o(unsigned long long o) {cerr << o;}
void wji_wne(float gym) {cerr << gym;}
void bhw_zb(double z) {cerr << z;}
void zja_ouj(long double gol) {cerr << gol;}
void va(char j) {cerr << '\'' << j << '\'';}
void t(const char *hf_q) {cerr << '\"' << hf_q << '\"';}
void wye_en(const string &d) {cerr << '\"' << d << '\"';}
void lqq(bool yp_chu) {cerr << (yp_chu ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &b) {cerr << '{'; __print(b.first); cerr << ','; __print(b.second); cerr << '}';}
template<typename T>
void __print(const T &l) {int wn = 0; cerr << '{'; for (auto &ih: l) cerr << (wn++ ? "," : ""), __print(ih); cerr << "}";}
void dcd() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T ax, V... bp) {__print(ax); if (sizeof...(v)) cerr << ", "; _print(bp...);}
 
#ifdef LOCAL
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
//----------------------------Debugger End--------------------------//

#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define M 1000000007
#define M2 998244353
#define INF LONG_LONG_MAX
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    #endif
 
    ll t=1,i,j,k,n,m,x,y,ans,sum,sz,a,b,c,d,q,val,l,r,lo,hi,mid;
    char lni;
    string p,fij,y,p,wo_jk;
    bool qk;   
    double v,dvh,edb_ttp;

    cin>>t;

    while(t--)
    {
       cin>>n;
       vector<ll>hg_vf(n);
       map<ll,ll>wqh;

       for(i=0;i<n;i++){
          cin>>hg_vf[i];
       }

       sort(hg_vf.begin(),hg_vf.end());

       if(hg_vf[0]==hg_vf.back()){
           if(hg_vf[0]==0){
              for(i=1;i<=n;i++){
                 cout<<i<<" ";
              }
           } 
           else{
              for(i=1;i<=n;i++){
                 if(n%i==0){
                    cout<<i<<" ";
                 }
              }
           }
       }
       else{
          for(i=0;i<n;i++){
             x=hg_vf[i];
             val=0;
             while(x!=0){
                wqh[val]+=(x&1);
                x=x>>1;
                val++;
             }
          }
          debug(mp);

          val=0;  
          for(auto a_cq:wqh){
             val=__gcd(val,a_cq.second);
          }
          debug(val);
         for(i=1;i<=val;i++){
            if(val%i==0){
               cout<<i<<" ";
            }
         }
         
       }
       cout<<endl;
    }
     
} 