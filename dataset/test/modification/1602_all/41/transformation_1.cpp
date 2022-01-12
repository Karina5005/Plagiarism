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
 
    ll t=1,i,j,k,n,m,x,y,ans,sum,sz,a,b,c,d,val,l,r,lo,hi,mid;
    char ch;
    string s,rs,str,s1,s2;
    bool ok;   
    double dou1,dou2,dou3;

    cin>>t;

    while(t--)
    {
       cin>>s;
       //vector<ll>v(n);
       //map<ll,ll>mp;

       str="z";
       x=-1;

       for(i=0;i<s.size();i++){
          if(s[i]<str[0]){
             str[0]=s[i];
             x=i;
          }
       }

       s.erase(s.begin()+x);

       cout<<str<<" "<<s<<endl;  

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

