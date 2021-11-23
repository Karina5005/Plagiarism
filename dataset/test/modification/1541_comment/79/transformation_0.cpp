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
int ans = 0;
      int n; cin>>n; vii v(n);
      f(i,n) cin>>v[i].first , v[i].second = i+1;
      sort(v.begin(),v.end()); bool ok = 1;
      f(i,n)
      {
          for(int j = i+1;j<n;j++)
          {
              int prod = v[i].first * v[j].first;
              if(prod > ((2*n) - 1)) {break;}
              if(prod == (v[i].second + v[j].second)) ans++;
          }
      }
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