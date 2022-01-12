#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void ang_cvn(int lc) {cerr << lc;}
void v(long ihd) {cerr << ihd;}
void rc(long long c) {cerr << c;}
void msb(unsigned yhf) {cerr << yhf;}
void u_tni(unsigned long nk) {cerr << nk;}
void utx(unsigned long long n) {cerr << n;}
void ey(float aop) {cerr << aop;}
void e_i(double l) {cerr << l;}
void u_g(long double jlr) {cerr << jlr;}
void fhn(char j) {cerr << '\'' << j << '\'';}
void zn_m(const char *w_n) {cerr << '\"' << w_n << '\"';}
void lx_rs(const string &g) {cerr << '\"' << g << '\"';}
void w(bool t) {cerr << (t ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &uu) {cerr << '{'; __print(uu.first); cerr << ','; __print(uu.second); cerr << '}';}
template<typename T>
void __print(const T &aao_be) {int l = 0; cerr << '{'; for (auto &dor_zi: aao_be) cerr << (l++ ? "," : ""), __print(dor_zi); cerr << "}";}
void pbm() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T km, V... ieo_i) {__print(km); if (sizeof...(v)) cerr << ", "; _print(ieo_i...);}
 
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
    char p_jl;
    string iv,x,g_alu,s,ixe;
    bool qq_yso;   
    double rcm,iuq_px,a;

    cin>>t;

    while(t--)
    {
       cin>>n;
       vector<ll>doc(n);
       map<ll,ll>cte_y;

       for(i=0;i<n;i++){
          cin>>doc[i];
          cte_y[doc[i]]++;
       }
       cin>>q;
       vector<pair<pll,ll>>jt(q);
       vector<ll>foq(q);
       for(i=0;i<q;i++){
          cin>>jt[i].first.second>>jt[i].first.first;
          jt[i].second=i;
       }
       sort(jt.begin(),jt.end());
       val=0;    
       debug(vec);
       qq_yso=true;

       for(i=0;i<q;i++){
          while(val!=jt[i].first.first && qq_yso==true){   
             qq_yso=false; 
            for(j=0;j<n;j++){
               if(doc[j]!=cte_y[doc[j]]){
                  qq_yso=true;
               }
               doc[j]=cte_y[doc[j]];
            }
            if(qq_yso==false)break;
            cte_y.clear();
            for(j=0;j<n;j++){
               cte_y[doc[j]]++;
            }  
            val++;
            debug(v,val);
          }
          foq[jt[i].second]=doc[jt[i].first.second-1];
       } 
       for(i=0;i<q;i++){
          cout<<foq[i]<<endl;
       }
    }
     
} 