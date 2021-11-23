#include <bits/stdc++.h>
#define Fast1 ios_base::sync_with_stdio(false)
#define Fast2 cin.tie(NULL)
#define ll long long int
#define inf 1000000000000000000
using namespace std;
const int N = 10000010;
const int mod = 1e9+7;




 

 

 








bool cmp(ll a , ll b){
  return a>b;
}


void solve(){
  int n;cin >> n;
  ll arr[n+1];
  pair<ll,ll> brr[n+1];
  for(int i=1;i<=n;i++)/* 'for' inside */
  {
    cin >> arr[i];
    brr[i] = {arr[i], i};
  }
  sort(brr+1,brr+1+n);
  
  ll ans = 0;
  for(int i=1;i<n;i++)/* 'for' inside */
  {
    for(int j=i+1;j<=n;j++)/* 'for' inside */
    {
        ll ind_sum = brr[i].second + brr[j].second;
        ll prod = brr[i].first * brr[j].first;
        /* 'if' begin */
        if(prod == ind_sum) /* 'if' inside */
        ans++;
        /* 'if' begin */
        if(prod > 2 *n)/* 'if' inside */
        {
            break;
        }
    }
  }
  cout << ans << endl;
}
 
int main(){
    Fast1;
    Fast2;
    int t;cin >> t;
    while(t--){
        solve();
    }
    
}