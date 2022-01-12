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
mt19937 l((int)std::chrono::steady_clock::now().time_since_epoch().count());
int dor_zi(int pbm, int km); 
void ieo_i(int p_jl, int iv);
void x(int g_alu, int s);

const int ixe = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi qq_yso[N];

int rcm[N];

void iuq_px(){
    cout<<"YES";
}
void a(){
    cout<<"NO";
}
int mpow(int doc, int cte_y) {
  doc %= ixe;
  int jt = 1;
  while (cte_y > 0) {
    if (cte_y & 1) jt = ((ll)jt * doc) % ixe;
    doc = ((ll)doc * doc) % ixe;
    cte_y >>= 1;
  }
  return jt;
}

void foq() {
ll len;cin>>len;
string cei_hnd,fpx_o;cin>>cei_hnd>>fpx_o;

vector<pair<ll,ll>>n_d;
ll j=0,zero=0,one=0;
fr(i,0,len){
    if(cei_hnd[i]=='0') zero++;
    else one++;
    if(zero==one){
        n_d.pb({j,i});
        j=i+1;
    }
}

for(auto ee_u:n_d){
    ll start=ee_u.first;
    ll end=ee_u.second;
    if(cei_hnd[start]==fpx_o[start]) continue;
    else{
        for(int bev_k=start;bev_k<=end;bev_k++){
            if(cei_hnd[bev_k]=='0') cei_hnd[bev_k]='1';
            else cei_hnd[bev_k]='0';
        }
    }
    
}

 for(int t=0;t<len;t++){
    if(cei_hnd[t]!=fpx_o[t]){
        cout<<"NO"<<endl;
        return;
    }
}

cout<<"YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int nqw = 1;
    cin >> nqw;
    
   while(nqw--){
      foq();
  }

    return 0;
}