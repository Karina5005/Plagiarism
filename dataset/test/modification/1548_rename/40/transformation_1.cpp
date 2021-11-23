#include<bits/stdc++.h>
using namespace std;
#define ultimate ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector <ll>
#define vi vector <int>
#define pb push_back
#define test long long tcse;cin>>tcse;while(tcse--)
#define f(start,from,to) for(start=from;start<to;start++)
#define el '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vsort(vect) sort(vect.begin(),vect.end())
#define mine min_element
#define maxe max_element
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define F first
#define S second
#define mod 1000000007
#define yes cout<<"YES"<<el
#define no cout<<"NO"<<el
#define enl cout<<'\n'
#define ofk(x) order_of_key(x)
#define fbo(x) find_by_order(x)

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++DEBUGGING++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

template<class T> void qy_xn(T lv_po) {cout<<lv_po<<el;}
template<class T> void _pa(T r_ze) {cout<<r_ze<<' ';}
template<class T1, class T2> void _p(T1 ai, T2 k) {cout<<ai<<' '<<k<<el;}
template<class T1, class T2, class T3> void _p(T1 mz_b, T2 aq, T3 o_g) {cout<<mz_b<<' '<<aq<<' '<<o_g<<el;}
template<class T1, class T2, class T3, class T4> void _p(T1 h, T2 n, T3 da, T4 vzh_f) {cout<<h<<' '<<n<<' '<<da<<' '<<vzh_f<<' '<<el;}
template<class T1, class T2, class T3, class T4, class T5> void _p(T1 wa_la, T2 hou_m, T3 b, T4 pk_h, T5 aa_w) {cout<<wa_la<<' '<<hou_m<<' '<<b<<' '<<pk_h<<' '<<aa_w<<' '<<el;}
template<class T> void _pa(T zca_adj[], ll n) {ll i; f(i,0,n) cout<<zca_adj[i]<<' '; cout<<el;}
template<class T> void _p(vector<T> kv_jl) {for(auto bnl_im:kv_jl) cout<<bnl_im<<' '; cout<<el;}
template<class T> void _p(list<T> khy_z) {for(auto msq_kb:khy_z) cout<<msq_kb<<' '; cout<<el;}
template<class T> void _p(set<T> xby_yph) {for(auto rdf_bbr:xby_yph) cout<<rdf_bbr<<' '; cout<<el;}
template<class T> void _p(multiset<T> x) {for(auto de:x) cout<<de<<' '; cout<<el;}
template<class T> void _p(unordered_set<T> to_cij) {for(auto m_rzm:to_cij) cout<<m_rzm<<' '; cout<<el;}
template<class T1, class T2> void _p(map<T1,T2> wv) {for(auto kaw:wv) cout<<kaw.F<<"->"<<kaw.S<<el; cout<<el;}
template<class T1, class T2> void _p(unordered_map<T1,T2> ig) {for(auto h_ds:ig) cout<<h_ds.F<<"->"<<h_ds.S<<el; cout<<el;}
template<class T1, class T2> void _p(map<T1,vector<T2>> vvx_e) {for(auto dl_xzv:vvx_e) {cout<<dl_xzv.F<<"->";_p(dl_xzv.S);} cout<<el;}
template<class T1, class T2> void _p(unordered_map<T1,vector<T2>> wqv_pyn) {for(auto gpc:wqv_pyn) {cout<<gpc.F<<"->";_p(gpc.S);} cout<<el;}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

class segTree
{
public:
  ll n; vll ar;
  segTree(ll *a, ll N)
  {
    ll i; n=N; ar.resize(2*n+1);
	f(i,0,n) ar[n+i]=a[i];
	for(i=n-1;i>0;i--) ar[i]=__gcd(ar[i<<1],ar[i<<1|1]);	
  }
  ll gcd(int b_wq, int le)
  {
  	b_wq+=n; le+=n;
  	ll g=ar[b_wq];
  	while(b_wq<le)
  	{
  		if(b_wq&1) g=__gcd(g,ar[b_wq++]);
  		if(le&1) g=__gcd(g,ar[--le]);
  		b_wq>>=1; le>>=1;
	}
	return g;
  }
};

bool x(ll k, ll n, segTree& y_k)
{
	ll i;
	f(i,0,n-k+1) if(y_k.gcd(i+1,i+k)>1) return true;
	return false;
}

void t_fe()
{
   ll i,n,l,r,m; bool uud;
   cin>>n; ll a[n]; 
   f(i,0,n) cin>>a[i];
   if(n==1) {cun(1); return;}
   if(n==2)
   {
   	if(abs(a[0]-a[1])==1) cun(1);
   	else cun(2);
   	return;
   }
   for(i=n-1;i>=1;i--) a[i]=abs(a[i]-a[i-1]);
   a[0]=a[1]; 
   segTree c_pp(a,n);
   l=1; r=n;
   while(1)
   {
   	 m=l+(r-l)/2;
   	 //_p(l,m,r);
   	 uud=x(m,n,c_pp);
     if(l==r and uud) {qy_x(l); return;}
     else if(l==r and !uud) 
     {
     	if(x(l+1,n,c_pp)) qy_x(l+1);
     	else if((l-1)!=0) qy_x(l-1);
     	else cun(1);
     	return;
	 }
     if(uud) l=m+1;
     else r=m;
   }
}

int32_t main()
{
ultimate
test
t_fe();
}