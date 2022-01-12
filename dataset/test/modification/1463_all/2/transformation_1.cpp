#include<bits/stdc++.h>
using namespace std;

#pragma region Debugger
void __print(int x) ;
void __print(long x) ;
void __print(long long x) ;
void __print(unsigned int x) ;
void __print(unsigned long x) ;
void __print(unsigned long long x) ;
void __print(float x) ;
void __print(double x) ;
void __print(long double x) ;
void __print(char x) ;
void __print(const char *x) ;
void __print(const std::string &x) ;
void __print(bool x) ;
 
template<typename T, typename V>
void __print(const pair<T, V> &x) ;
template<typename T>
void __print(const T &x) ;
void _print() ;
template <typename T, typename... V>
void _print(T t, V ...v) ;
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

void merge(vector<long long> &arr, long long l, long long mid, long long r, long long &ic);

void mergesort(vector<long long> &arr, long long l, long long r, long long &ic);

int find_inversion_count(vector<int> &arr){
	int n = arr.size();
	int ic=0;
	mergesort(arr, 0, n-1, ic);
	return ic;
}

vector<pair<long long, long long> > find_prime_factorization(long long x);

struct union_find{
    int n, set_size, *parent, *rank; 
    union_find(long long a) {
    this->n = a;
    this->set_size = a;
    this->parent = new long long [this->n + 1];
    this->rank = new long long [this->n + 1];
    for (long long i = 1; i <= this->n; i++) {
        this->parent[i] = i;
        this->rank[i] = 1;
    }
}


    int find(int x){
        if(x==parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    void merge(long long x, long long y) {
    long long xroot = this->find(x);
    long long yroot = this->find(y);
    if (xroot != yroot) {
        if (this->rank[xroot] <= this->rank[yroot]) {
            this->rank[yroot] += this->rank[xroot];
            this->parent[xroot] = yroot;
        } else {
            this->rank[xroot] += this->rank[yroot];
            this->parent[yroot] = xroot;
        }
        this->set_size--;
    }
}


    void reset() {
    this->set_size = this->n;
    for (long long i = 1; i <= this->n; i++) {
        this->rank[i] = 1;
        this->parent[i] = i;
    }
}


    int get_size(){
        return set_size;
    }

    void print_uf() {
    for (long long i = 1; i <= this->n; i++) {
        cout << i << ": " << this->parent[i] << " , ";
    }
    cout << "\n";
}

};  

void printvec(vector<long long> &arr);

void printmat(vector<vector<long long> > &arr);

typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

void solve();	

int main();

void solve() {
    long long n;
    cin >> n;
    vi a(n + 1);
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    long long sum1 = 0;
    for (long long i = 1; i <= n; i += 2) {
        sum1 += (a[i] - 1);
    }
    sum1 *= 2;
    if (sum1 <= sum) {
        for (long long i = 1; i <= n; i++) {
            if (i % 2 == 1)
                cout << "1 ";
            else
                cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    long long sum2 = 0;
    for (long long i = 2; i <= n; i += 2) {
        sum2 += (a[i] - 1);
    }
    sum2 *= 2;
    if (sum2 <= sum) {
        for (long long i = 1; i <= n; i++) {
            if (i % 2 == 0)
                cout << "1 ";
            else
                cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    cout << "WTF" << "\n";
}


void printvec(vector<long long> &arr) {
    for (long long i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";
}


void printmat(vector<vector<long long> > &arr) {
    for (long long i = 0; i < arr.size(); i++) {
        for (long long j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}


void mergesort(vector<long long> &arr, long long l, long long r, long long &ic) {
    if (l >= r)
        return;
    long long mid = (l + r) / 2;
    mergesort(arr, l, mid, ic);
    mergesort(arr, mid + 1, r, ic);
    merge(arr, l, mid, r, ic);
}


void merge(vector<long long> &arr, long long l, long long mid, long long r, long long &ic) {
    vector<long long> left, right;
    for (long long i = l; i <= mid; i++)
        left.push_back(arr[i]);
    for (long long i = mid + 1; i <= r; i++)
        right.push_back(arr[i]);
    long long i = 0;
    long long j = 0;
    long long n1 = left.size();
    long long n2 = right.size();
    long long k = l;
    while (i < n1 && j < n2)
        {
            if (left[i] <= right[j]) {
                arr[k++] = (left[i++]);
            } else {
                arr[k++] = (right[j++]);
                ic += (n1 - i);
            }
        }
    while (i < n1)
        {
            arr[k++] = (left[i++]);
        }
    while (j < n2)
        {
            arr[k++] = (right[j++]);
        }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
        {
            solve();
        }
}


vector<pair<long long, long long> > find_prime_factorization(long long x) {
    vector<pair<long long, long long> > ans;
    for (long long i = 2; i * i <= x; i++) {
        long long cnt = 0;
        while (x % i == 0)
            {
                cnt++;
                x /= i;
            }
        if (cnt > 0)
            ans.push_back(make_pair(i, cnt));
    }
    if (x > 1)
        ans.push_back(make_pair(x, 1));
    return ans;
}


void _print(int t, int v) {
    if (<null expr>)
        cerr << ", ";
}


void _print() {
    cerr << "]\n";
}


void __print(long long x) {
    cerr << x;
}


void __print(long long x) {
    cerr << x;
}


void __print(unsigned int x) {
    cerr << x;
}


void __print(unsigned long x) {
    cerr << x;
}


void __print(unsigned long long x) {
    cerr << x;
}


void __print(float x) {
    cerr << x;
}


void __print(double x) {
    cerr << x;
}


void __print(long double x) {
    cerr << x;
}


void __print(char x) {
    cerr << '\'' << x << '\'';
}


void __print(const char *x) {
    cerr << '"' << x << '"';
}


void __print(const std::string &x) {
    cerr << '"' << x << '"';
}


void __print(bool x) {
    cerr << (x ? "true" : "false");
}


void __print(const int &x) {
    cerr << '{';
    cerr << ',';
    cerr << '}';
}


void __print(const int &x) {
    long long f = 0;
    cerr << '{';
    cerr << "}";
}


void __print(long x) {
    cerr << x;
}


