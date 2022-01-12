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
const ll v_v=1e7+2;
vector<ll>av(v_v,-1);
vector<bool>z_btl(v_v,1);
vll lp(v_v,0);
vll hp(v_v,0);
vector<ll> vjx_bw(int o_but) {int*auo_dy = new int[o_but + 1](); vector<ll> g; for (int h = 2; h <= o_but; h++)if (auo_dy[h] == 0) {g.push_back(h); for (int gaz_qdk = 2 * h; gaz_qdk <= o_but; gaz_qdk += h)auo_dy[gaz_qdk] = 1;} return g;}
void fl(){
  z_btl[0]=z_btl[1]=0;

  for(int pnu_al=2;pnu_al<v_v;pnu_al++){
  
     if(z_btl[pnu_al]){
      hp[pnu_al]=lp[pnu_al]=pnu_al;
      for(int xo=2*pnu_al;xo<v_v;xo+=pnu_al){
        z_btl[xo]=false; 
        hp[xo]=pnu_al;
        if(lp[xo]==0)
          lp[xo]=pnu_al;        
       }
     }
      
  }
}
void nff(ll n){
  unordered_map<ll,ll>t_tay;
    
   while(n>1){
      ll pff=hp[n];
      while(n%pff==0)
      {
        n=n/pff;
        t_tay[pff]++;
      }
   }

     for(auto [key,value]:t_tay)
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
bool ilx(ll a,ll n){
    ll c1=log(n)/log(a);
    double ire_y=log(n)/log(a);
  // cout<<c1<<"->"<<c2<<endl;
    return c1==ire_y;
}
ll gcd(ll a,ll b){
     if(a==0)
         return b;
  return gcd(b%a,a);
}
void ai_q(ll*p1,ll*p2){
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

bool re_zim(ll a,ll b){
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
bool o_wa(string hm){
   int pte=0;
   int iu=hm.size()-1;
   while(pte<iu){
     if(hm[pte]!=hm[iu])
       return false;
     pte++;
     iu--;
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
int s_bv(int g, int lyf)
{
    return mul(g, inv(lyf));//  x/y--->x*(y^-1)
}
int f_eru(ll n, ll k)
{  // f(n)/(f(n-r)*f(r))---->f(n)*((f(r)*f(n-r))^-1)
    return s_bv(fact[n], mul(fact[k], fact[n - k]));
}
bool i_bkq(char v_o){
    return v_o=='a'||v_o=='e'||v_o=='i'||v_o=='o'||v_o=='u';
}
void o(){
  string rjr;
   cin>>rjr;
    string z=rjr;
    z+='a';
    string s_udi="a";
    s_udi+=rjr;
    if(!o_wa(z)){
        cout<<"YES"<<endl;
          cout<<z<<endl;
           return;
    }
      if(!o_wa(s_udi)){
          cout<<"YES"<<endl;
             cout<<s_udi<<endl;
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
     int tdx_v;
    // t=1;
    cin>>tdx_v;
       while(tdx_v--){
        o();
      }
      
 
 return 0;
}  

 


