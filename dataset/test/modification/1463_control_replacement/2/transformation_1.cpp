#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#pragma region Debugger
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#pragma endregion Debugger

#define pb push_back
#define MP make_pair
#define F first
#define S second
#define int long long int
#define endl "\n"

const int mod = 1e9+7; 

int ceil_(int n, int k){
	return (n+k-1)/k;
}

int be(int a, int b){
	int ans = 1;
	a%=mod;
	for ( ; b; ) 
{
		if(b%2 == 1){
			ans = (ans*a)%mod;
		}
		a = (a*a)%mod;
		b/=2;
	}
	return ans;
}

int mod_mult(int a, int b){
	a = (a%mod); b = (b%mod);
	return (((a*b)%mod)+mod)%mod;
}

int mod_plus(int a, int b){
	a = (a%mod); b = (b%mod);
	return (((a+b)%mod)+mod)%mod;
}

int mod_minus(int a, int b){
	a = (a%mod); b = (b%mod);
	return (((a-b+mod)%mod)+mod)%mod;
}

int inv(int x){
	return be(x,mod-2);
}

int gcd_(int a, int b){
	if(b==0) return a;
	return gcd_(b,a%b);
}

int lcm_(int a, int b){
	return (a*b)/gcd_(a,b);
}

void merge(vector<int> &arr, int l, int mid, int r, int &ic){
	vector<int> left, right;
	{
	int i=l;
	for ( ; i<=mid; ) 
{
	left.pb(arr[i]);
	i++; 
	
	}}
	{
	int i=mid+1;
	for ( ; i<=r; ) 
{
	right.pb(arr[i]);
	i++; 
	
	}}

	int i=0; int j=0;
	int n1 = left.size(); int n2 = right.size();

	int k=l;
	for ( ; i<n1 && j<n2; ) 
{
		if(!(left[i]<=right[j])){
			arr[k++] = (right[j++]);
			ic+=(n1-i);
		}
		else{
			arr[k++] = (left[i++]);
		}
	}
	for ( ; i<n1; ) 
{
		arr[k++] = (left[i++]);
	}
	for ( ; j<n2; ) 
{
		arr[k++] = (right[j++]);
	}
}

void mergesort(vector<int> &arr, int l, int r, int &ic){
	if(l>=r) return;
	int mid = (l+r)/2;
	mergesort(arr, l, mid, ic);
	mergesort(arr, mid+1, r, ic);

	merge(arr, l, mid, r, ic);
}

int find_inversion_count(vector<int> &arr){
	int n = arr.size();
	int ic=0;
	mergesort(arr, 0, n-1, ic);
	return ic;
}

vector<pair<int,int> > find_prime_factorization(int x){
	vector<pair<int,int> > ans;
	{
	int i=2;
	for ( ; i*i<=x; ) 
{
		int cnt=0;
		for ( ; x%i == 0; ) 
{
			cnt++;
			x/=i;
		}
		if(cnt>0) ans.pb(MP(i,cnt));
		i++; 
	
	}}
	if(x>1) ans.pb(MP(x,1));
	return ans;
}

struct union_find{
    int n, set_size, *parent, *rank; //set_size is the number of components
    union_find(int a){
        n = a;
        set_size = a;
        parent = new int[n+1];
        rank = new int[n+1];
        {
        int i=1;
        for ( ; i<=n; ) 
{
            parent[i]=i;
            rank[i]=1;
        	i++; 
        
        }}
    }

    int find(int x){
        if(x==parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    void merge(int x, int y){
        int xroot = find(x);
        int yroot = find(y);
        if(xroot != yroot){
            if(!(rank[xroot] <= rank[yroot])){
                rank[xroot]+=rank[yroot];
                parent[yroot]=xroot;
            }
            else{
                rank[yroot]+=rank[xroot];
                parent[xroot]=yroot;
            }
            set_size--;
        }
        // if already x and y are in the same component, no need to do anything
    }

    void reset(){
        set_size = n;
        {
        int i=1;
        for ( ; i<=n; ) 
{
            rank[i]=1;
            parent[i]=i;
        	i++; 
        
        }}
    }

    int get_size(){
        return set_size;
    }

    void print_uf(){
        {
        int i=1;
        for ( ; i<=n; ) 
{
            cout<<i<<": "<<parent[i]<<" , ";
        	i++; 
        
        }}cout<<endl;
    }
};  

void printvec(vector<int> &arr){
	{
	int i=0;
	for ( ; i<arr.size(); ) 
{
	cout<<arr[i]<<" ";
	i++; 
	
	}}
	cout<<endl;
}

void printmat(vector<vector<int> > &arr){
	{
	int i=0;
	for ( ; i<arr.size(); ) 
{
		{
		int j=0;
		for ( ; j<arr[i].size(); ) 
{
			cout<<arr[i][j]<<" ";
			j++; 
		
		}}cout<<endl;
		i++; 
	
	}}
	cout<<endl;
}

typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

void solve(){
	int n; cin>>n;
	vi a(n+1);
	int sum=0;
	{
	int i=1;
	for ( ; i<=n; ) 
{
		cin>>a[i];
		sum+=a[i];
		i++; 
	
	}}
		
	// option 1: 1,a2,1,a4,....
	int sum1=0;
	{
	int i=1;
	for ( ; i<=n; ) 
{
		sum1+=(a[i]-1);
		i+=2; 
	
	}}
	sum1*=2;
	if(sum1<=sum){
		{
		int i=1;
		for ( ; i<=n; ) 
{
			if(!(i%2 == 1)) cout<<a[i]<<" ";
			else cout<<"1 ";
			i++; 
		
		}}cout<<endl;
		return;
	}

	// option 2: a1,1,a3,1,....
	int sum2=0;
	{
	int i=2;
	for ( ; i<=n; ) 
{
		sum2+=(a[i]-1);
		i+=2; 
	
	}}
	sum2*=2;
	if(sum2<=sum){
		{
		int i=1;
		for ( ; i<=n; ) 
{
			if(!(i%2 == 0)) cout<<a[i]<<" ";
			else cout<<"1 ";
			i++; 
		
		}}cout<<endl;
		return;
	}
	
	cout<<"WTF"<<endl;
}	

signed main(){
	 cin.tie(0);

	int t; cin>>t;
	for ( ; t--; ) 
{
		solve();
	}
}