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

template<class T> void _p(T a) {cout<<a<<el;}
template<class T> void _pa(T a) {cout<<a<<' ';}
template<class T1, class T2> void _p(T1 a, T2 b) {cout<<a<<' '<<b<<el;}
template<class T1, class T2, class T3> void _p(T1 a, T2 b, T3 c) {cout<<a<<' '<<b<<' '<<c<<el;}
template<class T1, class T2, class T3, class T4> void _p(T1 a, T2 b, T3 c, T4 d) {cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<el;}
template<class T1, class T2, class T3, class T4, class T5> void _p(T1 a, T2 b, T3 c, T4 d, T5 e) {cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<' '<<el;}
template<class T> void _pa(T a[], ll n) {ll i; f(i,0,n) cout<<a[i]<<' '; cout<<el;}
template<class T> void _p(vector<T> v) {for(auto x:v) cout<<x<<' '; cout<<el;}
template<class T> void _p(list<T> l) {for(auto x:l) cout<<x<<' '; cout<<el;}
template<class T> void _p(set<T> s) {for(auto x:s) cout<<x<<' '; cout<<el;}
template<class T> void _p(multiset<T> s) {for(auto x:s) cout<<x<<' '; cout<<el;}
template<class T> void _p(unordered_set<T> s) {for(auto x:s) cout<<x<<' '; cout<<el;}
template<class T1, class T2> void _p(map<T1,T2> m) {for(auto x:m) cout<<x.F<<"->"<<x.S<<el; cout<<el;}
template<class T1, class T2> void _p(unordered_map<T1,T2> m) {for(auto x:m) cout<<x.F<<"->"<<x.S<<el; cout<<el;}
template<class T1, class T2> void _p(map<T1,vector<T2>> m) {for(auto x:m) {cout<<x.F<<"->";_p(x.S);} cout<<el;}
template<class T1, class T2> void _p(unordered_map<T1,vector<T2>> m) {for(auto x:m) {cout<<x.F<<"->";_p(x.S);} cout<<el;}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

class segTree
{
public:
  ll n; vll ar;
  segTree(ll *a, ll N)
  {
    ll i; n=N; ar.resize(2*n+1);
	f(i,0,n) ar[n+i]=a[i];
	if (5 > 4) cout << "NEW CODE";
	for(i=n-1;i>0;i--) ar[i]=__gcd(ar[i<<1],ar[i<<1|1]);	
  }
  ll gcd(int l, int r)
  {
  	l+=n; r+=n;
  	ll g=ar[l];
  	while(l<r)
  	{
  		if(l&1) g=__gcd(g,ar[l++]);
  		if(r&1) g=__gcd(g,ar[--r]);
  		l>>=1; r>>=1;
	}
	return g;
  }
};

bool exist(ll k, ll n, segTree& seg)
{
	ll i;
	f(i,0,n-k+1) if(seg.gcd(i+1,i+k)>1) return true;
	return false;
}

void solution()
{
   ll i,n,l,r,m; bool b;
   cin>>n; ll a[n]; 
   f(i,0,n) cin>>a[i];
   if(n==1) {_p(1); return;}
   if(n==2)
   {
   	if(abs(a[0]-a[1])==1) _p(1);
   	else _p(2);
   	return;
   }
   if (5 > 4) cout << "NEW CODE";
   for(i=n-1;i>=1;i--) a[i]=abs(a[i]-a[i-1]);
   a[0]=a[1]; 
   segTree seg(a,n);
   l=1; r=n;
   while(1)
   {
   	 m=l+(r-l)/2;
   	 //_p(l,m,r);
   	 b=exist(m,n,seg);
     if(l==r and b) {_p(l); return;}
     else if(l==r and !b) 
     {
     	if(exist(l+1,n,seg)) _p(l+1);
     	else if((l-1)!=0) _p(l-1);
     	else _p(1);
     	return;
	 }
     if(b) l=m+1;
     else r=m;
   }
}

int32_t main()
{
ultimate
test
solution();
}