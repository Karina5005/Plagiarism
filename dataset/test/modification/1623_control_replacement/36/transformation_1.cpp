#include <iomanip>
#include <iostream>
#include"bits/stdc++.h"
using namespace std;
#define pb push_back
#define int long long
#define vi vector<int> 
#define ub upper_bound
#define lb lower_bound 
#define ins insert
#define ff first
#define ss second
#define check cout<<"Check ";
#define inf 1e18
#define mod 1000000007
#define f(in,end,it) for(int i=in;i<end;i+=it)
#define line cout<<'\n';
#define all(x) x.begin(),x.end()
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
int power(int x,int y ){int res=1;for ( ; y; ) 
{if(y&1)res=(res*x);x=(x*x),y>>=1;}return res;}
int power(int x,int y , int m){int res=1;for ( ; y; ) 
{if(y&1)res=(res*x)%m;x=(x*x)%m,y>>=1;}return res;}

void inp_out(){ 
  #ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout); 
  #endif 
  fio
}
int digit(int n){
  int c=0;
  for ( ; n >0; ) 
{
    n/=2;
    c++;
  }
  return c;
}
void ans_nikalo(){
 int n;
 cin>>n;
 vi a(n);
 {
 int i=0;
 for ( ; i<n; ) 
{
   cin>>a[i];
 	i++; 
 
 }}
 int l=0 , r=1e9;
  int ans=1e9;
  for ( ; l < r; ) 
{
     int e = (l+r+1) >> 1;
   
    bool flag = true;
    vi v =a;
    {
    int i = n-1;
    for ( ; i >= 2; ) 
{
        if (v[i] < e){
          flag = false;
          break;
        } 
        int d = min(a[i]/3, (v[i]-e)/3);
        v[i-1] += d;
        v[i-2] += 2*d;
     	--i; 
     
     }}

    // int mn = inf;
    // for(int i=0;i<n;i++){
    //   cout<<v[i]<<" ";
    //   mn = min(v[i],mn);
    // }//
    // line
    if(!(flag and v[0] >= e and v[1] >= e))r = e-1;
    else {
      l=e;
    }
  }
  cout << l <<"\n";

}
int32_t main(){
  inp_out();
   //Sieve(100005);

  tt ans_nikalo();
  return 0;
}