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
    /* 'if' begin */
    if (p % 2 == 0) /* 'if' inside */
    {
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
  /* 'if' begin */
  if (l >= r)/* 'if' inside */
  return -1;
  ll ans = -1;
  cout << "? " << l << " " << r << endl;
  cin >> ans; return ans;
}
 
bool comp(pair<ll, ll>p1, pair<ll, ll>p2)
{
  /* 'if' begin */
  if (p1.F == p2.F)
  /* 'if' inside */
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
 

 

 

 

 

bool custormsort(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
  /* 'if' begin */
  if(a.F!=b.F)
  /* 'if' inside */
  {
    return a.first>b.first;
  }
  return a.second<b.second;
 
}

 

 

 

     

 

 

 

 

    

bool checkprime(ll n)
{
  for(ll i=2;i*i<=n;i++)
  /* 'for' inside */
  {
    /* 'if' begin */
    if(n%i==0)/* 'if' inside */
    return false;
  }
  return true;
}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m));}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m));}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll fbb=1;
void py(bool y)
{
  /* 'if' begin */
  if(y)/* 'if' inside */
  cout<<"YES\n";
  else
    cout<<"NO\n";
}
void fb(ll ans)
{
  cout<<"Case #"<<fbb++<<": "<<ans<<endl;
}
bool sortdesc(const pair<ll,char>&a,const pair<ll,char>&b)
{
  /* 'if' begin */
  if(a.F==b.F)
  /* 'if' inside */
  {
    /* 'if' begin */
    if(a.S!=b.S)
    /* 'if' inside */
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

vector<bool>vis(1005,false);
vector<ll>dist(1005,INT_MAX);

int main()
{
  fastio;
  
  ll t = 1;
  cin >> t;
  
  while (t--)
  {
    ll n;
    cin>>n;
    /* 'if' begin */
    if(n%2==0)
    /* 'if' inside */
    {
      for(ll i=1;i<=n;i+=2)
      /* 'for' inside */
      {
        cout<<i+1<<" "<<i<<" ";
      }
    }
    else
    {
      cout<<"3 1 2 ";
      for(ll i=4;i<=n;i+=2)
      /* 'for' inside */
      {
        cout<<i+1<<" "<<i<<" "; 
      }
    }
    cout<<endl;

  }
   
  return 0;
  }
