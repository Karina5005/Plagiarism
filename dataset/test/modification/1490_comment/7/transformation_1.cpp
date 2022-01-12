#include <bits/stdc++.h> 
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
  cin.tie(0)->sync_with_stdio(0); 
  /* 'if' begin */
  if (sz(name)) /* 'if' inside */
  {
    freopen((name + ".in").c_str(), "r", stdin); 
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
  /* 'if' begin */
  if(m%n==0)
  /* 'if' inside */
  {
    res = 0;
    int d = m/n;
    
    while(d%2==0) {d/=2;res++;}
    while(d%3==0) {d/=3 ;res++;}
    /* 'if' begin */
    if(d!=1) /* 'if' inside */
    res =-1;
  }
  return res;
}
bool asolve(int A, int B,int K)
{
    int XOR = A ^ B;
    
    int count = 0;
    while (XOR) {
        XOR = XOR & (XOR - 1);
        count++;
    }
    /* 'if' begin */
    if(count <=K) /* 'if' inside */
    return 1;
      else return 0;
}
unordered_set<ll> cubes;
void prc()
{
  for(ll i=1;i<=10000;i++)
  /* 'for' inside */
  {
    cubes.insert(i*i*i);
  }
}
void solve()
{
  ll x;cin>>x;

  for(ll i=1;i*i*i<=x;i++)
  /* 'for' inside */
  {
    /* 'if' begin */
    if(cubes.count(x-i*i*i))
    /* 'if' inside */
    {
      cout << "YES\n";
      return;
    }
  }
cout << "NO\n";
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  prc();
 int t;cin>> t;
 while(t--)
  
  solve();
  return 0;
}
 