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
	while(b){
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
	for(int i=l;i<=mid;i++) left.pb(arr[i]);
	for(int i=mid+1;i<=r;i++) right.pb(arr[i]);

	int i=0; int j=0;
	int n1 = left.size(); int n2 = right.size();

	int k=l;
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			arr[k++] = (left[i++]);
		}
		else{
			arr[k++] = (right[j++]);
			ic+=(n1-i);
		}
	}
	while(i<n1){
		arr[k++] = (left[i++]);
	}
	while(j<n2){
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
	for(int i=2;i*i<=x;i++){
		int cnt=0;
		while(x%i == 0){
			cnt++;
			x/=i;
		}
		if(cnt>0) ans.pb(MP(i,cnt));
	}
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
        for(int i=1;i<=n;i++){
            parent[i]=i;
            rank[i]=1;
        }
    }

    int find(int x){
        if(x==parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    void merge(int x, int y){
        int xroot = find(x);
        int yroot = find(y);
        if(xroot != yroot){
            if(rank[xroot] <= rank[yroot]){
                rank[yroot]+=rank[xroot];
                parent[xroot]=yroot;
            }
            else{
                rank[xroot]+=rank[yroot];
                parent[yroot]=xroot;
            }
            set_size--;
        }
        // if already x and y are in the same component, no need to do anything
    }

    void reset(){
        set_size = n;
        for(int i=1;i<=n;i++){
            rank[i]=1;
            parent[i]=i;
        }
    }

    int get_size(){
        return set_size;
    }

    void print_uf(){
        for(int i=1;i<=n;i++){
            cout<<i<<": "<<parent[i]<<" , ";
        }cout<<endl;
    }
};  

void printvec(vector<int> &arr){
	for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
	cout<<endl;
}

void printmat(vector<vector<int> > &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
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
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
		
	// option 1: 1,a2,1,a4,....
	int sum1=0;
	for(int i=1;i<=n;i+=2){
		sum1+=(a[i]-1);
	}
	sum1*=2;
	if(sum1<=sum){
		for(int i=1;i<=n;i++){
			if(i%2 == 1) cout<<"1 ";
			else cout<<a[i]<<" ";
		}cout<<endl;
		return;
	}

	// option 2: a1,1,a3,1,....
	int sum2=0;
	for(int i=2;i<=n;i+=2){
		sum2+=(a[i]-1);
	}
	sum2*=2;
	if(sum2<=sum){
		for(int i=1;i<=n;i++){
			if(i%2 == 0) cout<<"1 ";
			else cout<<a[i]<<" ";
		}cout<<endl;
		return;
	}
	
	cout<<"WTF"<<endl;
}	

signed main(){
	ios::sync_with_stdio(false); cin.tie(0);

	int t; cin>>t;
	while(t--){
		solve();
	}
}