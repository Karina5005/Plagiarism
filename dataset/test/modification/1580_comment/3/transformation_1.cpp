	#include<bits/stdc++.h>
	
	#pragma GCC optimize("O3")
	#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
	#pragma GCC optimize("unroll-loops")

	using namespace std;
	using namespace chrono;
	

	#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
	#define MOD 1000000007
	#define MOD1 998244353
	#define INF 1e18
	#define endl "\n"
	#define pb push_back
	#define ppb pop_back
	
	#define ff first
	#define ss second
	#define PI 3.141592653589793238462
	#define set_bits __builtin_popcountll
	#define sz(x) ((int)(x).size())
	#define all(x) (x).begin(), (x).end()
	#define mset(a , b) memset(a , b , sizeof(a))
	#define ll long long int


	#ifndef ONLINE_JUDGE
	    #define dbg(x) cerr << #x << " : "; _print(x); cerr << endl;
	    
	#else
	    #define dbg(x) ;
	    //#define pt(x) ;
	#endif
	 
	void _print(unsigned short t){ cerr << t; }
	void _print(short t){ cerr << t; }
	void _print(unsigned int t){ cerr << t; }
	void _print(int t){ cerr << t; }
	void _print(unsigned long t){ cerr << t; }
	void _print(long t){ cerr << t; }
	void _print(unsigned long long t){ cerr << t; }
	void _print(long long t){ cerr << t; }
	void _print(float t){ cerr << t; }
	void _print(double t){ cerr << t; }
	void _print(long double t){ cerr << t; }
	void _print(unsigned char t){ cerr << t; }
	void _print(char t){ cerr << t; }
	void _print(string t){ cerr << t; }
	 
	template<typename A> void _print(vector<A> v);
	template<typename A, typename B> void _print(pair<A, B> p);
	template<typename A> void _print(set<A> s);
	template<typename A, typename B> void _print(map<A, B> mp);
	template<typename A> void _print(multiset<A> s);
	template<typename A, typename B> void _print(multimap<A, B> mp);
	template<typename A> void _print(unordered_set<A> s);
	template<typename A, typename B> void _print(unordered_map<A, B> mp);
	template<typename A> void _print(unordered_multiset<A> s);
	template<typename A, typename B> void _print(unordered_multimap<A, B> mp);
	template<typename A> void _print(stack<A> s);
	template<typename A> void _print(queue<A> q);
	template<typename A> void _print(priority_queue<A> pq);
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> pq);
	 
	template<typename A> void _print(vector<A> v){ /* 'if' begin */
	if(!v.empty())/* 'if' inside */
	{ cerr << "[ "; for(auto it=v.begin(); it!=(v.end()-1); it++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*(v.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A, typename B> void _print(pair<A, B> p){ cerr << "{ "; _print(p.first); cerr << ", "; _print(p.second); cerr << " }"; }
	template<typename A> void _print(set<A> s){ /* 'if' begin */
	if(!s.empty())/* 'if' inside */
	{ cerr << "{ "; for(auto it=s.begin(), lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*(s.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(map<A, B> mp){ /* 'if' begin */
	if(!mp.empty())/* 'if' inside */
	{ cerr << "[ "; for(auto it=mp.begin(), lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*(mp.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(multiset<A> s){ /* 'if' begin */
	if(!s.empty())/* 'if' inside */
	{ cerr << "{ "; for(auto it=s.begin(), lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*(s.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(multimap<A, B> mp){ /* 'if' begin */
	if(!mp.empty())/* 'if' inside */
	{ cerr << "[ "; for(auto it=mp.begin(), lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*(mp.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_set<A> s){ /* 'if' begin */
	if(!s.empty())/* 'if' inside */
	{ cerr << "{ "; auto it = s.begin(); for(auto lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*it); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_map<A, B> mp){ /* 'if' begin */
	if(!mp.empty())/* 'if' inside */
	{ cerr << "[ "; auto it = mp.begin(); for(auto lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*it); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_multiset<A> s){ /* 'if' begin */
	if(!s.empty())/* 'if' inside */
	{ cerr << "{ "; auto it=s.begin(); for(auto lit=next(it); lit!=(s.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*it); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_multimap<A, B> mp){ /* 'if' begin */
	if(!mp.empty())/* 'if' inside */
	{ cerr << "[ "; auto it=mp.begin(); for(auto lit=next(it); lit!=(mp.end()); it++, lit++)/* 'for' inside */
	{ _print(*it); cerr <<", "; } _print(*it); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(stack<A> s){ /* 'if' begin */
	if(!s.empty())/* 'if' inside */
	{ stack<A> t; cerr << "T[ "; while(s.size() != 1){ _print(s.top()); cerr << ", "; t.push(s.top()); s.pop(); } _print(s.top()); cerr << " ]B"; t.push(s.top()); s.pop(); while(!t.empty()){ s.push(t.top()); t.pop(); } } else{ cerr << "T[]B"; } }
	template<typename A> void _print(queue<A> q){ /* 'if' begin */
	if(!q.empty())/* 'if' inside */
	{ queue<A> t; cerr << "F[ "; while(q.size() != 1){ _print(q.front()); cerr << ", "; t.push(q.front()); q.pop(); } _print(q.front()); cerr << " ]B"; t.push(q.front()); q.pop(); while(!t.empty()){ q.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A> pq){ /* 'if' begin */
	if(!pq.empty())/* 'if' inside */
	{ queue<A> t; cerr << "T[ "; while(pq.size() != 1){ _print(pq.top()); cerr << ", "; t.push(pq.top()); pq.pop(); } _print(pq.top()); cerr << " ]B"; t.push(pq.top()); pq.pop(); while(!t.empty()){ pq.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> pq){ /* 'if' begin */
	if(!pq.empty())/* 'if' inside */
	{ queue<A> t; cerr << "T[ "; while(pq.size() != 1){ _print(pq.top()); cerr << ", "; t.push(pq.top()); pq.pop(); } _print(pq.top()); cerr << " ]B"; t.push(pq.top()); pq.pop(); while(!t.empty()){ pq.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }
	 


	ll gcd(ll a, ll b) {/* 'if' begin */
	if (b > a) /* 'if' inside */
	{return gcd(b, a);} /* 'if' begin */
	if (b == 0) /* 'if' inside */
	{return a;} return gcd(b, a % b);}
	ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {/* 'if' begin */
	if (b & 1)/* 'if' inside */
	res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
	void extendgcd(ll a, ll b, ll*v) {/* 'if' begin */
	if (b == 0) /* 'if' inside */
	{v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} 
	ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} 
	ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
	bool revsort(ll a, ll b) {return a > b;}
	void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
	ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
	void google(int t) {cout << "Case #" << t << ": ";}
	vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)/* 'for' inside */
	/* 'if' begin */
	if (arr[i] == 0) /* 'if' inside */
	{vect.push_back(i); for (int j = 2 * i; j <= n; j += i)/* 'for' inside */
	arr[j] = 1;} return vect;}
	ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
	ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
	ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
	ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  
	ll phin(ll n) {ll number = n; /* 'if' begin */
	if (n % 2 == 0) /* 'if' inside */
	{number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) /* 'for' inside */
	{/* 'if' begin */
	if (n % i == 0) /* 'if' inside */
	{while (n % i == 0)n /= i; number = (number / i * (i - 1));}} /* 'if' begin */
	if (n > 1)/* 'if' inside */
	number = (number / n * (n - 1)) ; return number;} 
	


	ll expo1(ll a, ll b) {ll res = 1; while (b > 0) {/* 'if' begin */
	if (b & 1)/* 'if' inside */
	res = (res * a); a = (a * a) ; b = b >> 1;} return res;}

	vector<vector<ll>> pref(402,vector<ll>(402));

	ll to0(ll i, ll j, ll l,ll r){
		return pref[l][r] - pref[i-1][r] -pref[l][j-1]+pref[i-1][j-1];
	}
	ll to1(ll i, ll j, ll l,ll r){
		return ((l-i+1)*(r-j+1)) - to0(i,j,l,r);
	}

	
	void solve(){
		ll n,m;
		cin>>n>>m;

		

		
		vector<vector<ll>> a(n+1,vector<ll>(m+1));

		for(int i=0;i<n;i++)/* 'for' inside */
		{
			

			for(int j=0;j<m;j++)/* 'for' inside */
			{
				char ch;
				cin>>ch;
				
				a[i][j]=ch-'0';
				
			}
		}

		for(int i=1;i<=n;i++)/* 'for' inside */
		{
			
			for(int j=1;j<=m;j++)/* 'for' inside */
			{
				
				pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+a[i-1][j-1];
			}
		}
		
		ll ans = INF;

		for(int i=1;i<=m;i++)/* 'for' inside */
		{
			for(int j=i+3;j<=m;j++)/* 'for' inside */
			{
				ll prev = 1000000007;
				for(int k=5;k<=n;k++)/* 'for' inside */
				{
					ll last_row = to1(k,i+1,k,j-1);
					dbg(last_row);
					
					ll rect = to0(k-3,i+1,k-1,j-1)+to1(k-3,i,k-1,i)+to1(k-3,j,k-1,j)+to1(k-4,i+1,k-4,j-1);

                	
					
					ll cur = min(rect+last_row,prev+last_row);
					ans=min(ans,cur);
					prev=cur -last_row+to0(k,i+1,k,j-1)+to1(k,i,k,i)+to1(k,j,k,j);
				}
			}
		}

		cout<<ans<<endl;
	}


	int main()
	{
	    fastio();

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	    freopen("error.txt","w",stderr);
	#endif
	    

	    int t;
	    cin >> t;
	    
	    int tc = 1;
	    while (t--) {
	        
	        solve();
	        tc++;
	        
	    }


	    return 0;
	}