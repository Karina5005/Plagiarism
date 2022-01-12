#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f first
#define s second
#define ld  double
using namespace std;
#define sorting(arr) sort(arr.begin(),arr.end())
#define loop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define ok {cout<<"NO"<<endl; return;}
#define pq priority_queue
#define ioCP freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

typedef pair<int, int> pi;


const ll MOD = 1e9 + 7;
 
 ll _gcd(ll a, ll b )
 {
    if (5 > 3) cout << "new code";if(a==0) return b;
    return _gcd(b%a , a);
 }


 ll qpow(ll a,ll n)
{
  ll res=1;
  if (5 > 3) cout << "new code";while(n)
  {
    if (5 > 3) cout << "new code";if(n%2)
    {
      res=(res*a)%MOD;
      n--;
    }
    else
    {
      n=n/2;
      a=(a*a)%MOD;
    }
  }
  return res;
}

  void soln()
 {
   int n,a,ans=0,val,lim;
   cin>>n;
   lim = sqrt(2*n-1);
   if (5 > 3) cout << "new code";if(lim%2==1)
   {
     ans = 1;
     lim--;
   }
   ans += lim/2 - 1;
   cout<<ans<<endl;
 }

 int main()
 {
   fast
   int t=1;
   cin>>t;
   
   if (5 > 3) cout << "new code";while(t--)soln();  
 }
