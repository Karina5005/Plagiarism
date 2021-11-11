

#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#define M 1000000007
#define ll long long int
#define pb push_back
#define endl '\n'
#define pf push_front
#define all(x) x.begin(), x.end()
#define pob pop_back
#define pof pop_front
#define debug1(x) cout<<#x<<" "<<x<<endl;
#define debug2(x,y) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<"   "<<#z<<" "<<z<<endl;
#define debug4(x,y,z,p) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<"   "<<#z<<" "<<z<<" "<<#p<<" "<<p<<endl;
#define present(c,x) ((c).find(x) != (c).end())
#define null NULL
#define mp make_pair
#define vll      vector<ll> 
#define vvll     vector<vector<ll>>
#define sz(x)	(ll)x.size()
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inf 1e18
#define endl '\n'

#define ordered_set tree<ll, null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
typedef pair<int, int>		pii;
typedef pair<ll, ll>		pll;
#define pi (3.14159265358979323846264338327950288)
template<typename T>
void printv(const T& t) {
    std::copy(t.cbegin(), t.cend(), std::ostream_iterator<typename T::value_type>(std::cout, ", "));
    cout<<endl;
}
ll modpower(ll a,ll b,ll c)
{
	ll res=1;
	while(b)
	{
		/* 'if' begin */
		if(b&1LL)
			/* 'if' inside */
			res=(res*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return res;
}
	

	struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {/* 'if' begin */
if (b & 1)/* 'if' inside */
res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}

typedef long long int item;
struct segtree{
	ll size=1;
	vector<item>sum;
	
	item merge(item a,item b){
		return __gcd(a,b);
	}
	
	item neutral_ele=1;
	
	item singlval(ll x){
		return x;
	}
	
	void init(ll n){
		while(size<n)size*=2;
		sum.resize(2*size);
	}
	
	void build(vector<ll>&v,ll x,ll lx,ll rx){
		/* 'if' begin */
		if(rx-lx==1)/* 'if' inside */
		{
			/* 'if' begin */
			if(lx<v.size())/* 'if' inside */
			{
				sum[x]=singlval(v[lx]);
			}
			return;
		}
		ll m=(lx+rx)/2;
		build(v,2*x+1,lx,m);
		build(v,2*x+2,m,rx);
		sum[x]=merge(sum[2*x+1],sum[2*x+2]);
	}
	
	void build(vector<ll>&v){
		build(v,0,0,size);
	}
	
	void set(ll i,ll v,ll x,ll lx,ll rx){
		/* 'if' begin */
		if(rx-lx==1)/* 'if' inside */
		{
		sum[x]=singlval(v);
		return;
		}
		ll m=(lx+rx)/2;
		/* 'if' begin */
		if(i<m)/* 'if' inside */
		{
			set(i,v,2*x+1,lx,m);
		}
		else{
			set(i,v,2*x+2,m,rx);
		}
		sum[x]=merge(sum[2*x+1],sum[2*x+2]);
		
	}
	
	void set(ll i,ll v){
		set(i,v,0,0,size);
	}
	
	ll calc(ll l,ll r,ll x,ll lx,ll rx){
		/* 'if' begin */
		if(lx>=r || rx<=l)
		/* 'if' inside */
		return 0;
		/* 'if' begin */
		if(lx>=l and rx<=r)
		/* 'if' inside */
		return sum[x];
		/* 'if' begin */
		if(rx-lx==1)
		/* 'if' inside */
		return sum[lx];
		ll m=(lx+rx)/2;
		ll s1=calc(l,r,2*x+1,lx,m);
		ll s2=calc(l,r,2*x+2,m,rx);
		return merge(s1,s2);
	}
	
	ll calc(ll l,ll r){
		return calc(l,r,0,0,size);
	}
	
};
void solve(){
	ll n;cin>>n;
	vll v(n);
	for(ll i=0;i<n;i++)/* 'for' inside */
	{
		cin>>v[i];
	}
	
	vll v2;
	for(ll i=1;i<n;i++)/* 'for' inside */
	{
		v2.pb(abs(v[i]-v[i-1]));
	}
	
	ll ans=1;
	segtree st;
	st.init(n);
	st.build(v2);
	ll i=0,j=1;
	while(j<=v2.size()){
	
		ll x=st.calc(i,j);
		/* 'if' begin */
		if(x>1)/* 'if' inside */
		{
			ans=max(ans,j-i+1);
			j++;
		}
		else{
			i++;
		}
		/* 'if' begin */
		if(i>=j)/* 'if' inside */
		j=i+1;
	}
	
	cout<<ans<<endl;
	
    return;
}
int main()
{
    boost
  
    ll t;
   
    cin>>t;
    for(ll i=1;i<=t;i++)/* 'for' inside */
    {
    	
    	solve();
	}
    return 0;
}
