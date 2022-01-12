#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void __print(int x) ;
void __print(long x) ;
void __print(long long x) ;
void __print(unsigned x) ;
void __print(unsigned long x) ;
void __print(unsigned long long x) ;
void __print(float x) ;
void __print(double x) ;
void __print(long double x) ;
void __print(char x) ;
void __print(const char *x) ;
void __print(const string &x) ;
void __print(bool x) ;
 
template<typename T, typename V>
void __print(const pair<T, V> &x) ;
template<typename T>
void __print(const T &x) ;
void _print() ;
template <typename T, typename... V>
void _print(T t, V... v) ;
 
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
; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    #endif
 
    ll t=1,i,j,k,n,m,x,y,ans,sum,sz,a,b,c,d,q,val,l,r,lo,hi,mid;
    char ch;
    string s,rs,str,s1,s2;
    bool ok;   
    double dou1,dou2,dou3;

    cin>>t;

    while(t--)
    {
       cin>>n;
       vector<ll>v(n);
       map<ll,ll>mp;

       for(i=0;i<n;i++){
          cin>>v[i];
       }

       sort(v.begin(),v.end());

       if(v[0]==v.back()){
           if(v[0]==0){
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
             x=v[i];
             val=0;
             while(x!=0){
                mp[val]+=(x&1);
                x=x>>1;
                val++;
             }
          }
          debug(mp);

          val=0;  
          for(auto it:mp){
             val=__gcd(val,it.second);
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

void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

void _print() {cerr << "]\n";}

void __print(int x) {cerr << x;}

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

void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}

void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}

void __print(long x) {cerr << x;}

