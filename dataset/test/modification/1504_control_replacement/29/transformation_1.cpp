#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(ll i=0;i<n;i++)
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define ff(i,a,b) for(ll i=a;i>=b;i--)
#define frs(i,a,b,step) for(ll i=a;i<b;i+=step)
#define ffs(i,a,b,step) for(ll i=a;i>=b;i-=step)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];

int a[N];

void yes(){
    cout<<"YES";
}
void no(){
    cout<<"NO";
}
int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void solve() {
ll len;cin>>len;
string a,b;cin>>a>>b;

vector<pair<ll,ll>>v;
ll j=0,zero=0,one=0;
fr(i,0,len){
    if(!(a[i]=='0')) one++;
    else zero++;
    if(zero==one){
        v.pb({j,i});
        j=i+1;
    }
}

for(auto x:v){
    ll start=x.first;
    ll end=x.second;
    if(!(a[start]==b[start])) {
        {
        int i=start;
        while (i<=end) {
            if(a[i]=='0') a[i]='1';
            else a[i]='0';
        	i++; 
        
        }}
    }
    elsecontinue;
    
}

 {
 int i=0;
 while (i<len) {
    if(a[i]!=b[i]){
        cout<<"NO"<<endl;
        return;
    }
	i++; 

}}

cout<<"YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    cin >> t;
    
   while(t--){
      solve();
  }

    return 0;
}