#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
//----------------------DEBUGGER---------------------//
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
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
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
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

    for ( ; t--; ) 
{
       cin>>n;
       vector<ll>v(n);
       map<ll,ll>mp;

       {
       i=0;
       for ( ; i<n; ) 
{
          cin>>v[i];
          mp[v[i]]++;
       	i++; 
       
       }}
       cin>>q;
       vector<pair<pll,ll>>vec(q);
       vector<ll>sol(q);
       {
       i=0;
       for ( ; i<q; ) 
{
          cin>>vec[i].first.second>>vec[i].first.first;
          vec[i].second=i;
       	i++; 
       
       }}
       sort(vec.begin(),vec.end());
       val=0;    
       debug(vec);
       ok=true;

       {
       i=0;
       for ( ; i<q; ) 
{
          for ( ; val!=vec[i].first.first && ok==true; ) 
{   
             ok=false; 
            {
            j=0;
            for ( ; j<n; ) 
{
               if(v[j]!=mp[v[j]]){
                  ok=true;
               }
               v[j]=mp[v[j]];
            	j++; 
            
            }}
            if(ok==false)break;
            mp.clear();
            {
            j=0;
            for ( ; j<n; ) 
{
               mp[v[j]]++;
            	j++; 
            
            }}  
            val++;
            debug(v,val);
          }
          sol[vec[i].second]=v[vec[i].first.second-1];
       	i++; 
       
       }} 
       {
       i=0;
       for ( ; i<q; ) 
{
          cout<<sol[i]<<endl;
       	i++; 
       
       }}
    }
     
} 