#include<bits/stdc++.h>
 
using namespace std;
 
 
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ar array
#define vc vector
#define vi vector<int>
#define vii vector<int,int>
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void oa_m(ll qqo) {cerr << qqo;}
void wt(int au_wqh) {cerr << au_wqh;}
void fz_jbw(string w_hd) {cerr << w_hd;}
void y(char p) {cerr << p;}
void dw(lld r) {cerr << r;}
void vep_y(double v_n) {cerr << v_n;}
void lu(ull icw) {cerr << icw;}
 
template <class T, class V> void _print(pair <T, V> v);
template <class T> void _print(vector <T> oe);
template <class T> void _print(set <T> a);
template <class T, class V> void _print(map <T, V> fa);
template <class T> void _print(multiset <T> hcm_guu);
template <class T, class V> void _print(pair <T, V> cg) {cerr << "{"; _print(cg.ff); cerr << ","; _print(cg.ss); cerr << "}";}
template <class T> void _print(vector <T> kjy_t) {cerr << "[ "; for (T b_ipv : kjy_t) {_print(b_ipv); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> xc_cg) {cerr << "[ "; for (T i_i : xc_cg) {_print(i_i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> i_ej) {cerr << "[ "; for (T ww : i_ej) {_print(ww); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> gx) {cerr << "[ "; for (auto qo : gx) {_print(qo); cerr << " ";} cerr << "]";}
 
 
const int c_qti=1e5;

 
void f(){ int zh_zp,w=0; cin>>zh_zp; //set<pair<int,int>> s;
	ar<int,2> a[zh_zp];
	 for(int oom=0;oom<zh_zp;++oom) { cin>>a[oom][0]; a[oom][1]=oom+1;}

	 sort(a,a+zh_zp);
	
	for(int l_oz=0;l_oz<zh_zp&&a[l_oz][0]*a[l_oz][0]<=2*zh_zp;l_oz++){
		for(int l=l_oz+1;l<zh_zp&&a[l_oz][0]*a[l][0]<=2*zh_zp;l++){ 
			if(a[l_oz][0]*a[l][0]==a[l_oz][1]+a[l][1] && a[l_oz][1]!=a[l][1]){ 
			w++;
			}
			// else if(a[i]*a[j]>i+j) break;
		}
	}
	//debug(s);
	cout<<w<<endl;
	//s.clear();
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    cout<<"start ";
#endif
    ll mo=1; 
     cin>>mo;
    while(mo--){
       f();
    }
return 0;}