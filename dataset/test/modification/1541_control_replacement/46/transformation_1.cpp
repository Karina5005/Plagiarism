#include <bits/stdc++.h>
#define Fast1 ios_base::sync_with_stdio(false)
#define Fast2 cin.tie(NULL)
#define ll long long int
#define inf 1000000000000000000
using namespace std;
const int N = 10000010;
const int mod = 1e9+7;
// long long x,y;

// long long ExtendedGCD(long long a, long long b){
//     if(b == 0){
//         x = 1;
//         y = 0;
//         return a;
//     }
//     long long g = ExtendedGCD(b, a%b);
//     long long x1 = x;
//     long long y1 = y;
//     x = y1;
//     y = x1 - (a/b)*y1;
//     return g;
// }

 
// A function to print all prime
// factors of a given number n
// vector<ll > v;
// void primeFactors(int n)
// {
//     // Print the number of 2s that divide n
//     while (n % 2 == 0)
//     {
//         v.push_back(2);
//         n = n/2;
//     }
 
//     // n must be odd at this point. So we can skip
//     // one element (Note i = i +2)
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             v.push_back(i);
//             //cout << i << " ";
//             n = n/i;
//         }
//     }
 
//     // This condition is to handle the case when n
//     // is a prime number greater than 2
//     if (n > 2)
//         v.push_back(n);
//         //cout << n << " ";
// }

//vector<int> v;

// void Seive(int n){
//     bool prime[n+1];
//     memset(prime,true,sizeof(prime));
//     for(int p=2;p*p<=n;p++){
//         if(prime[p]){
//             for(int i=p*p;i<=n;i+=p){
//                 prime[i] = false;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]){
//             v.push_back(i);
//         }
//     }
//}

// The longest common subsequence in C++

bool cmp(ll a , ll b){
  return a>b;
}


void solve(){
  int n;cin >> n;
  ll arr[n+1];
  pair<ll,ll> brr[n+1];
  {
  int i=1;
  while (i<=n) {
    cin >> arr[i];
    brr[i] = {arr[i], i};
  	i++; 
  
  }}
  sort(brr+1,brr+1+n);
  // for(int i=1;i<=n;i++){
  //   cout << brr[i].first <<" " << brr[i].second << endl;
  // }
  ll ans = 0;
  {
  int i=1;
  while (i<n) {
    {
    int j=i+1;
    while (j<=n) {
        ll ind_sum = brr[i].second + brr[j].second;
        ll prod = brr[i].first * brr[j].first;
        if(prod == ind_sum) ans++;
        if(prod > 2 *n){
            break;
        }
    	j++; 
    
    }}
  	i++; 
  
  }}
  cout << ans << endl;
}
 
int main(){
    Fast1;
    Fast2;
    int t;cin >> t;
    while(t--){
        solve();
    }
    //solve();
}