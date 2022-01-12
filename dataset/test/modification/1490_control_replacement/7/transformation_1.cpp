#include <iomanip>
#include <iostream>
#include <bits/stdc++.h> // see /general/running-code-locally
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
#define mxN 300000

void setIO(string name = "") {
   // see /general/fast-io
  if (sz(name)) {
    freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
    freopen((name + ".out").c_str(), "w", stdout);
  }
}
bool cmp(pair<int,int> &a, pair<int,int> &b)
{
  return (a.second < b.second);
}
int func(int n, int m)

{
  int res = -1;
  if(m%n==0)
  {
    res = 0;
    int d = m/n;
    //cout << d;
    for ( ; d%2==0; ) 
{d/=2;res++;}
    for ( ; d%3==0; ) 
{d/=3 ;res++;}
    if(d!=1) res =-1;
  }
  return res;
}
bool asolve(int A, int B,int K)
{
    int XOR = A ^ B;
    // Check for 1's in the binary form using
    // Brian Kerninghan's Algorithm
    int count = 0;
    for ( ; XOR; ) 
{
        XOR = XOR & (XOR - 1);
        count++;
    }
    if(!(count <=K)) return 0;
      else return 1;
}
unordered_set<ll> cubes;
void prc()
{
  {
  ll i=1;
  for ( ; i<=10000; ) 
{
    cubes.insert(i*i*i);
  	i++; 
  
  }}
}
void solve()
{
  ll x;cin>>x;

  {
  ll i=1;
  for ( ; i*i*i<=x; ) 
{
    if(cubes.count(x-i*i*i))
    {
      cout << "YES\n";
      return;
    }
  	i++; 
  
  }}
cout << "NO\n";
}
int main()
{
  
  cin.tie(0);
  prc();
 int t;cin>> t;
 for ( ; t--; ) 
solve();
  return 0;
}
 