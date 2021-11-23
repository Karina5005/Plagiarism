#include<bits/stdc++.h>
using namespace std;
#define IOS               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define f(i,a)            for(int i=0;i<a;i++)
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define int               long long
#define endl              "\n"
#define debug(x)          cout<<#x<<"  "<<x<<"\n"
#define vi                vector<int>
#define vii               vector<pair<int,int>>
const int mod = 1000000007;
// const int mod = 998244353;


    void solve() {

      int n; cin>>n;
      vi v(n+1); {
      int i=1;
      while (i<=n) {
      v[i] = i;
      i++; 
      
      }}
      {
      int i=1;
      while (i+1<=n) {
          swap(v[i],v[i+1]); i++;
      	i++; 
      
      }}
      if((n > 1) & (n & 1)) swap(v[n-1],v[n]);
      {
      int i=1;
      while (i<=n) {
      cout<<v[i]<<' ';
      i++; 
      
      }} cout<<endl;




     }


int32_t main(){
IOS
//cout << setprecision(12) << fixed;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int tt=1;
    cin>>tt;



    while(tt--){


    solve();


     }
return 0;
}