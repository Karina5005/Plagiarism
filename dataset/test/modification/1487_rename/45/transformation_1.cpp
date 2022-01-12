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


const ll ai = 1e9 + 7;
 
 ll _gcd(ll a, ll b )
 {
    if(a==0) return b;
    return _gcd(b%a , a);
 }


 ll qpow(ll a,ll n)
{
  ll res=1;
  while(n)
  {
    if(n%2)
    {
      res=(res*a)%ai;
      n--;
    }
    else
    {
      n=n/2;
      a=(a*a)%ai;
    }
  }
  return res;
}

  void ddk()
 {
   int j,sdd_oyq,tj_ccb=0,y,pub_be;
   cin>>j;
   pub_be = sqrt(2*j-1);
   if(pub_be%2==1)
   {
     tj_ccb = 1;
     pub_be--;
   }
   tj_ccb += pub_be/2 - 1;
   cout<<tj_ccb<<endl;
 }

 int main()
 {
   fast
   int dx=1;
   cin>>dx;
   
   while(dx--)ddk();  
 }
