#include<bits/stdc++.h>
using   namespace std;
#define abhay_sharma ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
#define int long long
#define ll long long
#define ld long double
#define ull unsigned long long
#define float double
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define all(a) a.begin(),a.end()
#define MAXN 100005
#define BLOCK 555
#define pii pair<int,int>
class triplet{
    int first=0;
    int second=0;
    int third=0;
};
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void p(int t) {cerr << t;}
void dw(string r) {cerr << r;}
void vep_y(char v_n) {cerr << v_n;}
void lu(ld t) {cerr << t;}
void icw(double v) {cerr << v;}
void oe(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> a);
template <class T> void _print(vector <T> fa);
template <class T> void _print(set <T> hcm_guu);
template <class T, class V> void _print(map <T, V> cg);
template <class T> void _print(multiset <T> kjy_t);
template <class T, class V> void _print(pair <T, V> b_ipv) {cerr << "{"; _print(b_ipv.ff); cerr << ","; _print(b_ipv.ss); cerr << "}";}
template <class T> void _print(vector <T> xc_cg) {cerr << "[ "; for (T i_i : xc_cg) {_print(i_i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> i_ej) {cerr << "[ "; for (T ww : i_ej) {_print(ww); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> gx) {cerr << "[ "; for (T qo : gx) {_print(qo); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> c_qti) {cerr << "[ "; for (auto f : c_qti) {_print(f); cerr << " ";} cerr << "]";}
const ld zh_zp=1e+9;
// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &w, pair<T1, T2> &oom) { return (w >> oom.first >> oom.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &l_oz, vector<T> &l)
{
	for (auto &mo : l)
		cin >> mo;
	return l_oz;
}
bool jdv(ld x, ld y, ld epsilon = 0.0000001f){
   if(fabs(x - y) < epsilon)
      return true; //they are same
      return false; //they are not same
}
int LCM(int a, int b)
{
    return ((ll)a * b) / __gcd(a, b);
}

ll modpow(ll x, ll n, int m = MOD)
{
    if (x == 0 && n == 0) return 0; // undefined case
    ll res = 1;
    while (n > 0) 
    {
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}
ll fdiv(ll X, ll Y) {
    if (X >= 0) {
        return X / Y;
    } else {
        return (X-Y+1) / Y;
    }
}

const int w=1e5+5;
int primes[w];
vector<int> qz_tdq;
void sz_ipz(){
	for(int i=2;i<w;i++){
		if(primes[i]==0){
			qz_tdq.pb(i);
			for(int j=i*i;j<w;j+=i){
				primes[j]=1;
			}
		}
		primes[i]^=1;
	}
}
void mmr_rcz(){
    int n;
    cin>>n;
    int k=9;
    vi ans;
    ans.push_back(9);
    ans.push_back(8);
    ans.push_back(9);
    for(int i=0;i<=n;i++){
        ans.push_back((i+10)%10);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    cout<<endl;
}
signed main(){
    abhay_sharma
    int t=1;
    // sieve();
    cin>>t;
    while(t--){
        mmr_rcz();
    }
    return 0;
}