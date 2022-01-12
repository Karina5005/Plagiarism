#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void v_o(int o) {cerr << o;}
void rjr(long z) {cerr << z;}
void s_udi(long long tdx_v) {cerr << tdx_v;}
void pi_d(unsigned mav_iz) {cerr << mav_iz;}
void z(unsigned long lo_ym) {cerr << lo_ym;}
void j(unsigned long long hc_q) {cerr << hc_q;}
void rul_bd(float be_b) {cerr << be_b;}
void zo(double mr) {cerr << mr;}
void zfl(long double sx) {cerr << sx;}
void c(char vdj) {cerr << '\'' << vdj << '\'';}
void t(const char *gj_b) {cerr << '\"' << gj_b << '\"';}
void am_gn(const string &zgs_ngn) {cerr << '\"' << zgs_ngn << '\"';}
void fnc_h(bool k_eyw) {cerr << (k_eyw ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &y_jmf) {cerr << '{'; __print(y_jmf.first); cerr << ','; __print(y_jmf.second); cerr << '}';}
template<typename T>
void __print(const T &fs_r) {int xnp = 0; cerr << '{'; for (auto &cs_epa: fs_r) cerr << (xnp++ ? "," : ""), __print(cs_epa); cerr << "}";}
void a_xpe() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T iqo_dmo, V... zya) {__print(iqo_dmo); if (sizeof...(v)) cerr << ", "; _print(zya...);}
 
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
    char y;
    string h_qiv,uva,at,pq,jz;
    bool ukf;   
    double nuf,p,cd_g;

    cin>>t;

    while(t--)
    {
       cin>>n;
       vector<ll>s(n);
       map<ll,ll>t_eb;

       for(i=0;i<n;i++){
          cin>>s[i];
          t_eb[s[i]]++;
       }
       cin>>q;
       vector<pair<pll,ll>>zz_xna(q);
       vector<ll>n_xi(q);
       for(i=0;i<q;i++){
          cin>>zz_xna[i].first.second>>zz_xna[i].first.first;
          zz_xna[i].second=i;
       }
       sort(zz_xna.begin(),zz_xna.end());
       val=0;    
       debug(vec);
       ukf=true;

       for(i=0;i<q;i++){
          while(val!=zz_xna[i].first.first && ukf==true){   
             ukf=false; 
            for(j=0;j<n;j++){
               if(s[j]!=t_eb[s[j]]){
                  ukf=true;
               }
               s[j]=t_eb[s[j]];
            }
            if(ukf==false)break;
            t_eb.clear();
            for(j=0;j<n;j++){
               t_eb[s[j]]++;
            }  
            val++;
            debug(v,val);
          }
          n_xi[zz_xna[i].second]=s[zz_xna[i].first.second-1];
       } 
       for(i=0;i<q;i++){
          cout<<n_xi[i]<<endl;
       }
    }
     
} 