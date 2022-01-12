#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr(i,a,b)         for(int i=a;i<b;i++)
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define int               long long
#define pb                push_back
#define endl              "\n"
#define debug(x)          cout<<#x<<"  "<<x<<"\n"
#define ii                pair<int,int>
#define vi                vector<int>
#define vii               vector<pair<int,int>>
const int mod = 1000000007;
// const int mod = 998244353;
const int N = 2e5+7;
int arr[N];


  void solve() {

    int n,k,i,j;
    cin>>n>>k;
    k--;
    int d=n/2;
    cout<<((k+((n%2)*(k/d)))%n)+1<<endl;
  
  }


int32_t main(){
  
  cin.tie(0);cout.tie(0);
  cout << setprecision(12) << fixed;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  int tt=1; 
  cin>>tt;



  for ( ; tt--; ) 
{
   solve();
   }
  return 0;
  }