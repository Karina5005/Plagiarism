#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f first
#define s second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vb vector<bool>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define lb lower_bound
#define ub upper_bound
#define fr(a,b) for(ll i=a;i<=b;i++)
#define loop(k,a,b) for(int k=a;k<b;k++)
#define endl "\n"
#define mod 998244353  //10^9+7
//#define mod 998244353
#define ep 0.0001
const ll N=1e7+2;
vector<ll>divisor(N,-1);
vector<bool>isprime(N,1);
vll lp(N,0);
vll hp(N,0);
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; {
int i = 2;
while (i <= n) {
if (arr[i] == 0) {vect.push_back(i); {
int j = 2 * i;
while (j <= n) {
arr[j] = 1;
j += i; 

}}} 
i++; 

}}return vect;}
void prime(){
  isprime[0]=isprime[1]=0;

  {
  int i=2;
  while (i<N) {
  
     if(isprime[i]){
      hp[i]=lp[i]=i;
      {
      int j=2*i;
      while (j<N) {
        isprime[j]=false; 
        hp[j]=i;
        if(lp[j]==0)
          lp[j]=i;        
       	j+=i; 
       
       }}
     }
      
  	i++; 
  
  }}
}
void primefacts(ll n){
  unordered_map<ll,ll>pf;
    
   while(n>1){
      ll pff=hp[n];
      while(n%pff==0)
      {
        n=n/pff;
        pf[pff]++;
      }
   }

     for(auto [key,value]:pf)
        cout<<key<<"^"<<value<<" ";
      cout<<endl;
}
ll max(ll a,ll b){
   return (a>b)?a:b;
}
ll min(ll a,ll b){
  return (a>b)?b:a;
}
ll lg(ll a,ll n){
    return log10(n)/log10(a);
}
bool ispower(ll a,ll n){
    ll c1=log(n)/log(a);
    double c2=log(n)/log(a);
  // cout<<c1<<"->"<<c2<<endl;
    return c1==c2;
}
ll gcd(ll a,ll b){
     if(a==0)
         return b;
  return gcd(b%a,a);
}
void swap(ll*p1,ll*p2){
    ll t=*p1;
    *p1=*p2;
    *p2=t;
}
ll sum(ll n){
  ll ans=0;
   while(n>0){
     ans++;
     n=n/10;
   }
 ll t=0;
 while(ans--){

   t=t*10+1;
 }
  return t;
}
ll digit(ll n){
  ll c=0;
   while(n>0){
     n=n/10;
      c++;
   }

   return c;
}

bool cmpv(ll a,ll b){
   return a>b;
}
//ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
//ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll pow_mod(ll a,ll b,ll m){
  a=a%m;
  ll res=1;
  while(b>0){
    if(b&1)
      res=(res*a)%m;
    a=(a*a)%m;
    b=b>>1;
  }
  return res;
}

//vector<ll>v(sieve(20000));
//set<ll>st(all(v));
bool pali(string str){
   int i=0;
   int j=str.size()-1;
   while(i<j){
     if(str[i]!=str[j])
       return false;
     i++;
     j--;
   }

   return 1;
}
ll*fact=new ll[200000+10];
ll ncr(ll n,ll r){
  ll ans=fact[n]/(fact[n-r]*fact[r]);
   return ans;
}
ll mul(ll x, ll y)
{
    return (x * 1ll * y) % mod;
}
ll inv(ll x)
{
    return pow_mod(x, mod - 2,mod);
}
int divide(int x, int y)
{
    return mul(x, inv(y));//  x/y--->x*(y^-1)
}
int C(ll n, ll k)
{  // f(n)/(f(n-r)*f(r))---->f(n)*((f(r)*f(n-r))^-1)
    return divide(fact[n], mul(fact[k], fact[n - k]));
}
bool check_vowel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
void solve(){
  string str;
   cin>>str;
    string s1=str;
    s1+='a';
    string s2="a";
    s2+=str;
    if(!pali(s1)){
        cout<<"YES"<<endl;
          cout<<s1<<endl;
           return;
    }
      if(!pali(s2)){
          cout<<"YES"<<endl;
             cout<<s2<<endl;
              return;
      }
   cout<<"NO"<<endl;
}
int main(){ 
  ios_base::sync_with_stdio(false);
     cin.tie(NULL); 

     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("oos.txt","w",stdout);
     #endif
     int t;
    // t=1;
    cin>>t;
       while(t--){
        solve();
      }
      
 
 return 0;
}  

 


