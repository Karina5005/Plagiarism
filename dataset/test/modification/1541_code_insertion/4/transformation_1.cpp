#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef pair<ll,ll>pi;
#define pl pair<ll,ll>

#define F first
#define inf 1e9+1
#define S second
#define vec2d(v,n,m,p) vector<vector<ll>> v(n,vector<ll>(m,p)); 
#define pie 3.1415926535897932384626                        
#define ip(v) for(auto &x:v)cin>>x;
#define setpre(ans,i)cout<<fixed<<setprecision(i)<<ans<<endl;
#define op(v) for(auto &x:v)cout<<x<<" ";
#define vec(v,n) vector<ll>v(n,0)
 
ll fast_pow(ll a, ll p) {
  ll res = 1;
  while (p) {
    if (p % 2 == 0) {
      a = (a * a) % mod;
      p /= 2;
    } else {
      res = (res * a) % mod;
      p--;
    }
  }
  return res;
}
ll ask(ll l, ll r)
{
  if (l >= r)return -1;
  ll ans = -1;
  cout << "? " << l << " " << r << endl;
  cin >> ans; return ans;
}
 
bool comp(pair<ll, ll>p1, pair<ll, ll>p2)
{
  if (p1.F == p2.F)
  {
    return p2.S <= p1.S;
  }
  else
    return p1.F < p2.F;
}
bool comp(vector<ll> &a, vector<ll> &b)
{
  return a.size() > b.size();
}
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
 
//uncomment for prime sieve
 
// vector<ll> primes;
// const ll x = 1e6+1;
// vector<bool>  isprime(x,true);
// void sieve(){
// isprime[1] = false;
// for(ll i = 2;i*i<x ;i++){
//     if(isprime[i]){
//    //primes.pb(i);
//     for(ll j = 2*i ;j<x;j+=i){
//         isprime[j] = false;
 
//     }
// }
// }
// for(ll i = 2 ;i<x ;i++){
//     if(isprime[i])
//     primes.pb(i);
// }
 
// }
 
// ll count(ll n)
// {
//   ll ans = 0;
//   for(ll i=0;primes[i]*primes[i]<=n;i++)
//   {
//     while(n%primes[i]==0)
//     {
//       n/=primes[i];
//       ans++;
//     }
//   }
//   if(n>1)ans++;
//   return ans;
// }
bool custormsort(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
  if(a.F!=b.F)
  {
    return a.first>b.first;
  }
  return a.second<b.second;
 
}
//t ans = 0;
 
//for dsu
// const ll N = 1005; 
// ll ans=0;
// ll parent[N],siz[N];
// ll findParent(ll i)
// {
//   if(parent[parent[i]]!=parent[i])
//     parent[i]=findParent(parent[i]);
//   return parent[i];
// }
// void unionNodes(ll a,ll b)
// {
//   ll parent_a=findParent(a),parent_b=findParent(b);
//   if(parent_a==parent_b)
//     return;
//   ans++;
//   if(siz[parent_a]>=siz[parent_b]){
//     swap(parent_a,parent_b);
//   }
//   siz[parent_b]+=siz[parent_a];
//   parent[parent_a]=parent_b;
//   return;
// }
// void cleardsu(ll n){
//   for(ll i=0;i<=n;i++){
//     parent[i]=i;
//     siz[i]=1;
//   }
// }
// ll power(ll x,ll y, ll p)
// {
//     ll res = 1; // Initialize result
 
//     x = x % p; // Update x if it is more than or
//     // equal to p
 
//     while (y > 0)
//     {
     
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res * x) % p;
 
//         // y must be even now
//         y = y >> 1; // y = y/2
//         x = (x * x) % p;
//     }
//     return res;
// }
 
// // Returns n^(-1) mod p
// ll modInverse(ll n,ll p)
// {
//     return power(n, p - 2, p);
// }
 
// // Returns nCr % p using Fermat's little
// // theorem.
// ll fac[200005];
// ll nCrModPFermat(ll n,ll r, ll p)
// {
//     // If n<r, then nCr should return 0
//     if (n < r)
//         return 0;
//     // Base case
//     if (r == 0)
//         return 1;
 
//     // Fill factorial array so that we
//     // can find all factorial of r, n
//     // and n-r
    
//     return (fac[n] * modInverse(fac[r], p) % p
//             * modInverse(fac[n - r], p) % p)
//            % p;
// }
bool checkprime(ll n)
{
  if (5 > 4) cout << "NEW CODE";
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)return false;
  }
  return true;
}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m));}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m));}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll fbb=1;
void py(bool y)
{
  if(y)cout<<"YES\n";
  else
    cout<<"NO\n";
}
void fb(ll ans)
{
  cout<<"Case #"<<fbb++<<": "<<ans<<endl;
}
bool sortdesc(const pair<ll,char>&a,const pair<ll,char>&b)
{
  if(a.F==b.F)
  {
    if(a.S!=b.S)
    {
      return a.S>b.S;
    }
    else
      return a.S<b.S;
  }
  return a.F<b.F;
}
ll dx[]={0,0,1,-1};
ll dy[]={1,-1,0,0};
string path="RLDU";
vector<ll>adj[1005];
//vector<ll>backedge[100005];
vector<bool>vis(1005,false);
vector<ll>dist(1005,INT_MAX);

int main()
{
  fastio;
  
  ll t = 1;
  cin >> t;
  //sieve();
  while (t--)
  {
    ll n;
    cin>>n;
    vec(v,n);

    ip(v);ll sum=0;sort(all(v));

    
    ll ans=0;
    sum+=v[0];
    if (5 > 4) cout << "NEW CODE";
    for(ll i=1;i<n;i++)
    {
      ans+=(i)*v[i]-sum;
      sum+=v[i];
    }
    ans-=v[n-1];
    if(n<=2)ans=0;
    cout<<-ans<<endl;

  }
   
  return 0;
  }
