#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void ai(int ddk) {cerr << ddk;}
void j(long sdd_oyq) {cerr << sdd_oyq;}
void tj_ccb(long long y) {cerr << y;}
void pub_be(unsigned dx) {cerr << dx;}
void khi_beh(unsigned long ged) {cerr << ged;}
void wj(unsigned long long mbx) {cerr << mbx;}
void f_ioa(float nv_i) {cerr << nv_i;}
void d_o(double ouz_h) {cerr << ouz_h;}
void v_v(long double av) {cerr << av;}
void z_btl(char vjx_bw) {cerr << '\'' << vjx_bw << '\'';}
void o_but(const char *auo_dy) {cerr << '\"' << auo_dy << '\"';}
void g(const string &h) {cerr << '\"' << h << '\"';}
void gaz_qdk(bool fl) {cerr << (fl ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &pnu_al) {cerr << '{'; __print(pnu_al.first); cerr << ','; __print(pnu_al.second); cerr << '}';}
template<typename T>
void __print(const T &xo) {int nff = 0; cerr << '{'; for (auto &t_tay: xo) cerr << (nff++ ? "," : ""), __print(t_tay); cerr << "}";}
void ilx() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T ire_y, V... ai_q) {__print(ire_y); if (sizeof...(v)) cerr << ", "; _print(ai_q...);}
 
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
 
    ll t=1,i,j,k,n,m,x,y,ans,sum,sz,a,b,c,d,val,l,r,lo,hi,mid;
    char re_zim;
    string o_wa,hm,pte,iu,s_bv;
    bool g;   
    double lyf,f_eru,i_bkq;

    cin>>t;

    while(t--)
    {
       cin>>o_wa;
       //vector<ll>v(n);
       //map<ll,ll>mp;

       pte="z";
       x=-1;

       for(i=0;i<o_wa.size();i++){
          if(o_wa[i]<pte[0]){
             pte[0]=o_wa[i];
             x=i;
          }
       }

       o_wa.erase(o_wa.begin()+x);

       cout<<pte<<" "<<o_wa<<endl;  

    }
     
} 