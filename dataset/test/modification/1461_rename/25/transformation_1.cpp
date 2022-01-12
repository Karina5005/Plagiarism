#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define INF 1e18
#define N 1000005
#define prDouble(x, y) cout<<fixed<<setprecision(y)<<x
#define bitcount(x) __builtin_popcount(x)
#define endl '\n'
#define ll long long 
#define ld long double
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define eb emplace_back
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define pre(i , j , n) for(ll i = j ; i >= n ; i--)
#define all(x) x.begin(), x.end()
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define input(arr, i, n) rep(j, i, n) cin>>arr[j];
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef pair<ll,ll> pll;
typedef vector<vector<ll> > vvll;
typedef vector<pl> vpll;
#define MPI 3.14159265358979323846
#define br "\n"
#define ff first
#define ss second
const ll y = 1000000007;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void p(ll t) {cerr << t;}
void wo_jk(int qk) {cerr << qk;}
void v(string dvh) {cerr << dvh;}
void edb_ttp(char hg_vf) {cerr << hg_vf;}
void wqh(ld t) {cerr << t;}
void a_cq(double b_fcl) {cerr << b_fcl;}

template <class T, class V> void _print(pair <T, V> os);
template <class T> void _print(vector <T> m);
template <class T> void _print(set <T> hs_ftf);
template <class T, class V> void _print(map <T, V> k_r);
template <class T> void _print(multiset <T> ge);
template <class T, class V> void _print(pair <T, V> h_rc) {cerr << "{"; _print(h_rc.ff); cerr << ","; _print(h_rc.ss); cerr << "}";}
template <class T> void _print(vector <T> xfi_e) {cerr << "[ "; for (T st_puc : xfi_e) {_print(st_puc); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> wk_nh) {cerr << "[ "; for (T wi : wk_nh) {_print(wi); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> owi) {cerr << "[ "; for (T zd_ckh : owi) {_print(zd_ckh); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> tvq) {cerr << "[ "; for (auto d_mk : tvq) {_print(d_mk); cerr << " ";} cerr << "]";}

ll bin_exp(ll a, ll b){
    a = a % y;
    ll ans = 1;
    while(b > 0){
        if((b & 1) == 1) ans = (a * ans) % y;
        a = (a * a) % y;
        b /= 2;
    }
    return ans;
}

ll mod_inv(ll n){
    ll a = bin_exp(n,y - 2);
    return a;
}

ll sub(ll a,ll b){
    return ((a - b + y) % y);
}

ll mul(ll a,ll b){
    return ((a*b)%y);
}

ll add(ll a,ll b){
    return ((a+b+y)%y);
}

ll divide(ll a,ll b){
    return((a*mod_inv(b)) % y);
}

ll _gcd(ll a, ll b){
    if(b == 0)
        return a;
    return _gcd(b, a%b);
}

ll gcd(ll a, ll b) {
    if(a > b)
        return _gcd(a, b);
    return _gcd(b, a);
}

ll max(ll a, ll b){
    return a > b ? a : b;
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

// ââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââ//



void e(){
    int t_rf,dor_tkw;
    cin>>t_rf>>dor_tkw;
    vector<vector<char>> z_w(t_rf,vector<char>(dor_tkw));
    rep(i,0,n){
        rep(j,0,m){
            cin>>z_w[i][j];
        }
    }

    vvll wwk_ras(t_rf,vll(dor_tkw,0));
    vvll du_v(t_rf,vll(dor_tkw,0));
    
    rep(i,0,n){
        rep(j,0,m){
            if(i==0 || j==0){
                wwk_ras[i][j] = (z_w[i][j]=='*');
            }
            else{
                if(z_w[i][j]=='.'){
                    wwk_ras[i][j] = 0;
                }
                else{
                    wwk_ras[i][j] = 1+min(wwk_ras[i-1][j],wwk_ras[i][j-1]);
                }
            }
        }
    }
    rep(i,0,n){
        for(int s=dor_tkw-1;s>=0;s--){
            if(i==0 || s==dor_tkw-1){
                du_v[i][s] = (z_w[i][s]=='*');
            }
            else{
                if(z_w[i][s]=='.'){
                    du_v[i][s] = 0;
                }
                else{
                    du_v[i][s] = 1+min(du_v[i-1][s],du_v[i][s+1]);
                }
            }
        }
    }

    ll sum =0;
    rep(i,0,n){
        rep(j,0,m){
            sum+=min(wwk_ras[i][j],du_v[i][j]);
        }   
    }
    cout<<sum<<endl;
}


signed main() {
    /*#ifndef ONLINE_JUDGE
	    freopen("Error.txt", "w", stderr);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    // init();
    fastio();
    int kz;
    cin>>kz;
    while(kz--)
        e();


}
