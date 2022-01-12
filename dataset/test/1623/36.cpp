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
int power(int x,int y ){int res=1;while(y){if(y&1)res=(res*x);x=(x*x),y>>=1;}return res;}
int power(int x,int y , int m){int res=1;while(y){if(y&1)res=(res*x)%m;x=(x*x)%m,y>>=1;}return res;}

void inp_out(){ 
  #ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout); 
  #endif 
  fio
}
int digit(int n){
  int c=0;
  while(n >0){
    n/=2;
    c++;
  }
  return c;
}
void ans_nikalo(){
 int n;
 cin>>n;
 vi a(n);
 for(int i=0;i<n;i++){
   cin>>a[i];
 }
 int l=0 , r=1e9;
  int ans=1e9;
  while(l < r){
     int e = (l+r+1) >> 1;
   
    bool flag = true;
    vi v =a;
    for(int i = n-1;i >= 2;--i) {
        if (v[i] < e){
          flag = false;
          break;
        } 
        int d = min(a[i]/3, (v[i]-e)/3);
        v[i-1] += d;
        v[i-2] += 2*d;
     }

    // int mn = inf;
    // for(int i=0;i<n;i++){
    //   cout<<v[i]<<" ";
    //   mn = min(v[i],mn);
    // }//
    // line
    if(flag and v[0] >= e and v[1] >= e){
      l=e;
    }
    else r = e-1;
  }
  cout << l <<"\n";

}
int32_t main(){
  inp_out();
   //Sieve(100005);

  tt ans_nikalo();
  return 0;
}