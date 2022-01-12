#include <bits/stdc++.h>
#define mod 1000000007
#define pb(i) push_back(i)
#define ll long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msl map<string,int>
#define fr(a,x) for(auto a:x)
#define ll1(p) ll p;cin>>p
#define ll2(p,q) ll p,q;cin>>p>>q
#define ll3(p,q,r) ll p,q,r;cin>>p>>q>>r
#define ll4(p,q,r,s) ll p,q,r,s;cin>>p>>q>>r>>s
#define ch1(p) char p;cin>>p
#define ch2(p,q) char p,q;cin>>p>>q
#define str1(p) string p;cin>>p
#define str2(p,q) string p,q;cin>>p>>q
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define vi vector<int>


#define ins(i) insert(i)
#define sz size()
#define all(x) x.begin(),x.end()
#define BOOST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(i,s,n) for(long long int i=s;i<n;i++)
#define rf(i,s,n) for(long long int i=s;i>=n;i--)
#define fit(x) for(auto it=x.begin();it!=x.end();it++)
#define rfitr(x) for(auto it=x.rbegin();it!=x.rend();it++)
#define w(t) while(t--)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;
struct Tree{
int val;
Tree* right=NULL;
Tree* left=NULL;};

ll b_expo(long long x, ll  y, ll p=mod
+3

){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a; }
ll power(ll a,ll b){ll ans=1;f(i,0,b)ans*=a;return ans;}
ll prod(ll a, ll b, ll m = mod){long long res = 0;while(b){if(b & 1)res = (res + a) % m;a = (a + a) % m;b >>= 1;}return res;}


void solve()
{
  int a,b,c;
  cin>>a>>b>>c;

  int d1=b-a,d2=c-b,d3=c-a;

  if(a+2*d1>0&&(a+2*d1)%c==0){
      yes 
    //   cout<<1<<endl;
  }
  else if(c-2*d2>0&&(c-2*d2)%a==0){
      yes 
    //   cout<<2<<endl;
  }
  else if(d3%2==0&&a+d3/2>0&&(a+d3/2)%b==0){
      yes 
    //   cout<<3<<endl;
  }
  else  no


}
int main(){
    BOOST
    int t; cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}
