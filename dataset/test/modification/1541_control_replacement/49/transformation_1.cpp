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

      int n; cin>>n; vi a(n); f(i,n) cin>>a[i];
      int ans = 0;
      map<int,int>mp;
      f(i,n) mp[a[i]] = i+1;
      {
      int i=1;
      while (i<=2*n) {
          {
          int prod = i;
          while (prod <= 2*n) {
              int j = prod / i;
              if(mp.count(i) && mp.count(j) && (mp[i] < mp[j]) && (mp[i] + mp[j] == prod))
              {
                  //cout<<mp[i]<<' '<<mp[j]<<' '<<prod<<endl;
                  ans++;
              }
          	prod += i; 
          
          }}
      	i++; 
      
      }}
      cout<<ans<<endl;



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