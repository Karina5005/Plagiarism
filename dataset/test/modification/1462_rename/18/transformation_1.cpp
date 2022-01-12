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
const ll lvv=1e7+2;
vector<ll>agc(lvv,-1);
vector<bool>uep_xjt(lvv,1);
vll lp(lvv,0);
vll hp(lvv,0);
vector<ll> j_j(int o) {int*o = new int[o + 1](); vector<ll> wji_wne; for (int gym = 2; gym <= o; gym++)if (o[gym] == 0) {wji_wne.push_back(gym); for (int bhw_zb = 2 * gym; bhw_zb <= o; bhw_zb += gym)o[bhw_zb] = 1;} return wji_wne;}
void z(){
  uep_xjt[0]=uep_xjt[1]=0;

  for(int zja_ouj=2;zja_ouj<lvv;zja_ouj++){
  
     if(uep_xjt[zja_ouj]){
      hp[zja_ouj]=lp[zja_ouj]=zja_ouj;
      for(int gol=2*zja_ouj;gol<lvv;gol+=zja_ouj){
        uep_xjt[gol]=false; 
        hp[gol]=zja_ouj;
        if(lp[gol]==0)
          lp[gol]=zja_ouj;        
       }
     }
      
  }
}
void va(ll n){
  unordered_map<ll,ll>j;
    
   while(n>1){
      ll pff=hp[n];
      while(n%pff==0)
      {
        n=n/pff;
        j[pff]++;
      }
   }

     for(auto [key,value]:j)
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
bool t(ll a,ll n){
    ll c1=log(n)/log(a);
    double hf_q=log(n)/log(a);
  // cout<<c1<<"->"<<c2<<endl;
    return c1==hf_q;
}
ll gcd(ll a,ll b){
     if(a==0)
         return b;
  return gcd(b%a,a);
}
void wye_en(ll*p1,ll*p2){
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

bool d(ll a,ll b){
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
bool lqq(string yp_chu){
   int b=0;
   int l=yp_chu.size()-1;
   while(b<l){
     if(yp_chu[b]!=yp_chu[l])
       return false;
     b++;
     l--;
   }

   return 1;
}
int64_t*wn=new int64_t[200000+10];
int64_t ih(int64_t dcd,int64_t ax){
  int64_t bp=wn[dcd]/(wn[dcd-ax]*wn[ax]);
   return bp;
}
ll mul(ll x, ll y)
{
    return (x * 1ll * y) % mod;
}
ll inv(ll x)
{
    return pow_mod(x, mod - 2,mod);
}
int lni(int p, int fij)
{
    return mul(p, inv(fij));//  x/y--->x*(y^-1)
}
ll C(ll n, ll k)
{  // f(n)/(f(n-r)*f(r))---->f(n)*((f(r)*f(n-r))^-1)
    return lni(wn[n], mul(wn[k], wn[n - k]));
}
bool y(char p){
    return p=='a'||p=='e'||p=='i'||p=='o'||p=='u';
}
void wo_jk(vector<ll>&qk,ll L,ll R,ll offset){
    vll dum(R-L+1);
    fr(0,R-L){
       int v=((R-L+1)+i-offset)%(R-L+1);
       dum[v]=qk[i+L]; 
    }

    fr(L,R){
        qk[i]=dum[i-L];
    }
}

void dvh(){
   ll n;
    cin>>n;
    vll v(n);
     for(auto&edb_ttp:v)cin>>edb_ttp;
      sort(all(v));
   int64_t hg_vf=0;
   fr(0,n-1){
     int64_t wqh=ub(all(v),v[i]+2)-v.begin();
     int64_t a_cq=wqh-i-1;
     if(a_cq>=2)
     hg_vf+=a_cq*(a_cq-1)/2;
   } 
   cout<<hg_vf<<endl;
}  
int main(){ 
  ios_base::sync_with_stdio(false);
     cin.tie(NULL); 

     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("oos.txt","w",stdout);
     #endif
     wn[0]=wn[1]=1;
     fr(2,2e5+9)wn[i]=(wn[i-1]*i);
   ll t;
    cin>>t;
    //t=1;
    while(t--){
       dvh();
    }
    
 return 0;
}  

 


