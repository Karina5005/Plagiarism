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
const int zb = 1000000007;
// const int mod = 998244353;


    void sgj_f() {

      int n; cin>>n; vi a(n); f(i,n) cin>>a[i];
      int ans = 0;
      map<int,int>nv;
      f(i,n) nv[a[i]] = i+1;
      for(int i=1;i<=2*n;i++)
      {
          for(int prod = i; prod <= 2*n; prod += i)
          {
              int j = prod / i;
              if(nv.count(i) && nv.count(j) && (nv[i] < nv[j]) && (nv[i] + nv[j] == prod))
              {
                  //cout<<mp[i]<<' '<<mp[j]<<' '<<prod<<endl;
                  ans++;
              }
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


    sgj_f();


     }
return 0;
}