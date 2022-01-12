#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void cei_hnd(int fpx_o) {cerr << fpx_o;}
void n_d(long ee_u) {cerr << ee_u;}
void bev_k(long long t) {cerr << t;}
void nqw(unsigned cai_mbx) {cerr << cai_mbx;}
void kr(unsigned long axi_ijb) {cerr << axi_ijb;}
void wuo_o(unsigned long long vom) {cerr << vom;}
void atn_s(float g_fth) {cerr << g_fth;}
void dgz(double pwg) {cerr << pwg;}
void awr(long double zqi_ifn) {cerr << zqi_ifn;}
void ebe(char lx_z) {cerr << '\'' << lx_z << '\'';}
void ka(const char *sr_dg) {cerr << '\"' << sr_dg << '\"';}
void rts(const string &xk) {cerr << '\"' << xk << '\"';}
void v_ri(bool e_xgd) {cerr << (e_xgd ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &otf) {cerr << '{'; __print(otf.first); cerr << ','; __print(otf.second); cerr << '}';}
template<typename T>
void __print(const T &kno_xf) {int h = 0; cerr << '{'; for (auto &trk: kno_xf) cerr << (h++ ? "," : ""), __print(trk); cerr << "}";}
void jox() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T hu_d, V... io_i) {__print(hu_d); if (sizeof...(v)) cerr << ", "; _print(io_i...);}
 
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
    char k_s;
    string pvq_dlp,i_r,av,cxp_e,eq_d;
    bool yb;   
    double qf_ux,yjm,fve;

    cin>>t;

    while(t--)
    {
       cin>>n;
       vector<ll>cd_v(n);
       map<ll,ll>exe_mj;

       for(i=0;i<n;i++){
          cin>>cd_v[i];
       }

       sort(cd_v.begin(),cd_v.end());

       if(cd_v[0]==cd_v.back()){
           if(cd_v[0]==0){
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
             x=cd_v[i];
             val=0;
             while(x!=0){
                exe_mj[val]+=(x&1);
                x=x>>1;
                val++;
             }
          }
          debug(mp);

          val=0;  
          for(auto cp:exe_mj){
             val=__gcd(val,cp.second);
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