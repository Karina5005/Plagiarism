#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string>
#define ll long long int
#define mod 1000000007
#define modd 998244353
#define FAST
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define LOOP(i, a, b) for (int i = a; i <= b; i++)
#define LOP(i, a, b, c) for (int i = a; i < b; i += c)
#define BACKLOOP(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v).begin(), (v).end()
#define inp(a) cin >> a
#define VI vector<int>
#define VL vector<ll>
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define VPII vector<pair<int, int>>
#define VPLL vector<pair<ll, ll>>
#define PB push_back
#define PP pop_bacK
#define ff first
#define ss second
using namespace std;
/***************************************************************************************************/
void solve()
{
  int n;inp(n);
  VI a(n),b(n);FOR(i,0,n){
    inp(a[i]);
    b[i] = i+1;
  }
  priority_queue<int,VI> pq;
  for(auto &x : a) pq.push(x);
  bool flag=true;
  while(!pq.empty()){
    if(pq.top()>b.back()){
      int x = pq.top();
      pq.pop();
      pq.push(x/2);
    }
    else if(pq.top()==b.back()){
      pq.pop();
      b.pop_back();
    }
    else{
      flag=false;
      break;
    }
  }
  if(flag) cout<<"YES\n";
  else cout<<"NO\n";
}
/***************************************************************************************************/
int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int t;
  scanf("%d", &t);
  while (t--)
  {
    auto t_1 = chrono::high_resolution_clock::now();
    solve();
    auto t_2 = chrono::high_resolution_clock::now();
    //  cout <<". Elapsed (ms): " << chrono::duration_cast<chrono::milliseconds>(t_2 - t_1count() << endl;
  }
  return 0;
}