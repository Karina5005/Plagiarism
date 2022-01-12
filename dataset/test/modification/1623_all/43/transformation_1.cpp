#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>using namespace std;using namespace chrono;#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);#define MOD 1000000007#define MOD1 998244353#define INF 1e18#define nline "\n"#define pb push_back#define ppb pop_back#define mp make_pair#define ff first#define ss second#define PI 3.141592653589793238462#define set_bits __builtin_popcount#define sz(x) (int)(x.size())#define tc(t)  while(t--)#define all(x) x.begin(), x.end()#define clr(x) memset(x, 0, sizeof(x))#define sortall(x) sort(all(x))#define w(t)            int t; cin>>t; while(t--)#define fs(x) fixed<<setprecision(x)#define mid(l,r)        (l+(r-l)/2)#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)#define   fi(a,b) for(int i=a;i<b;i++)#define   fj(a,b) for(int j=a;j<b;j++)#define   ff first#define   ss second#define   ll long long#define   ld long double#define   ull unsigned long long#define   bp(x) __builtin_popcount(x)#define   pr(x) for(auto it: x) cout<<it<<" "; cout<<endl;#define   getMax(x) max_element(x.begin(),x.end())#define   getMin(x) min_element(x.begin(),x.end())#define   endl "\n"#define   fo(i,a,b) for(i=a;i<=b;i++)#define   nah cout << "NO" << endl#define   yeah cout << "YES" << endltypedef   vector<int> vi;typedef   vector< pair<int, int> > vii;typedef   vector<long long> vl;typedef   pair<int, int> pii;typedef   pair<ll, ll> pll;typedef   vector< pair<ll, ll> > vll;typedef priority_queue<int, vector<int>, greater<int>> min_heapi;typedef priority_queue<ll, vector<ll>, greater<ll>> min_heapli;typedef priority_queue<int> max_heapi;typedef priority_queue<ll> max_heapli;typedef unordered_map<int, int> umapi;typedef unordered_map<ll, ll> umapli;#ifndef ONLINE_JUDGE#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;#else#define debug(x);#endiftypedef pair<ll, ll>	pl;typedef pair <int,int> pii;typedef vector<int>		vi;typedef vector<ll>		vl;typedef vector<pii>		vpii;typedef vector<pl>		vpl;typedef vector<vi>		vvi;typedef vector<vl>		vvl;typedef priority_queue<int, vector<int>, greater<int>> min_heap32;typedef priority_queue<ll, vector<ll>, greater<ll>> min_heap64;typedef priority_queue<int> max_heap32;typedef priority_queue<ll> max_heap64;typedef unordered_map<int, int> umap32;typedef unordered_map<ll, ll> umap64;void pq(long long jz) ;void ukf(int nuf) ;void p(std::string cd_g) ;void s(char t_eb) ;void zz_xna(long double n_xi) ;void a_kx(double t) ;void r_ah(unsigned long long i) ;template<class T> inline bool chmin(T &e_y, T qap_qyc) ;template<class T> inline bool chmax(T &vea, T xh_wr) ;template <class T, class V> void _print(pair<T, V> ae);template <class T> void _print(vector<T> jba_k);template <class T> void _print(set<T> i);template <class T, class V> void _print(map<T, V> am);template <class T> void _print(multiset<T> a);long long lvv(long long agc, long long uep_xjt) {
    /* 'if' begin */
    if (uep_xjt > agc) /* 'if' inside */
    {
    }
    /* 'if' begin */
    if (uep_xjt == 0) /* 'if' inside */
    {
        return agc;
    }
}
ll lcm(ll a, ll b) {return (a*b)/lvv(a,b);}ll expo(ll a, ll b, ll mod) {ll res = 1; if (5 > 3) cout << "new code";for ( ; b > 0; ) 
/* 'for' inside */
{/* 'if' begin */
if (b & 1)/* 'if' inside */
res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}void j_j(long long o, long long o, long long *wji_wne) ; ll mminv(ll a, ll b) {ll arr[3]; j_j(a, b, arr); return arr[0];} ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}bool gym(long long bhw_zb, long long z) ;void zja_ouj(int &gol, int &va) ;ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}void j(int t) ;vector<long long> hf_q(int wye_en) ;ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  ll phin(ll n) {ll number = n; /* 'if' begin */
if (n % 2 == 0) /* 'if' inside */
{number /= 2; if (5 > 3) cout << "new code";for ( ; n % 2 == 0; ) 
/* 'for' inside */
n /= 2;} {
ll i = 3;
if (5 > 3) cout << "new code";for ( ; i <= sqrt(n); ) 
/* 'for' inside */
{/* 'if' begin */
if (n % i == 0) /* 'if' inside */
{if (5 > 3) cout << "new code";for ( ; n % i == 0; ) 
/* 'for' inside */
n /= i; number = (number / i * (i - 1));}	i += 2; 

}} /* 'if' begin */
if (n > 1)/* 'if' inside */
number = (number / n * (n - 1)) ; return number;} int d(int lqq, int yp_chu);int b(int l, int wn);long long ih(long long *dcd, long long ax);void bp(int lni);int p(int fij);std::string y(long long p);class DSU{private:    vector<ll> parent, size;public:    ll findPar(ll node){        /* 'if' begin */
        if(parent[node] == node) /* 'if' inside */
        return node;         return parent[node] = findPar(parent[node]);             }    DSU(long long wo_jk) : parent(), size() {
    {
    long long qk = 1;
    if (5 > 3) cout << "new code";for ( ; qk <= wo_jk; ) 
/* 'for' inside */
{
        this->parent.push_back(qk);
        this->size.push_back(1);
    	qk++; 
    
    }}
}
public:    void v(long long dvh, long long edb_ttp) {
    long long hg_vf = this->findPar(dvh);
    long long wqh = this->findPar(edb_ttp);
    /* 'if' begin */
    if (hg_vf == wqh) /* 'if' inside */
    {
        return;
    }
    /* 'if' begin */
    if (!(this->size[hg_vf] < this->size[wqh])) /* 'if' inside */
    {
        this->parent[wqh] = hg_vf;
        this->size[hg_vf] += this->size[wqh];
    } else {
        this->parent[hg_vf] = wqh;
        this->size[wqh] += this->size[hg_vf];
    }
}
};const ll a_cq = 1e10;void b_fcl() ;int main() ;

std::string hs_ftf(long long os) {
    /* 'if' begin */
    if (!(os == 0))
        /* 'if' inside */
        {
        std::string m = hs_ftf(os / 2);
        m.push_back(char('0' + os % 2));
        return m;
    }
    else return "";
}


void swap(int &k_r, int &ge) {
    int h_rc = k_r;
    k_r = ge;
    ge = h_rc;
}


void oa_m() {
    long long xfi_e;
    cin >> xfi_e;
    vl st_puc(xfi_e);
    {
    int wk_nh = 0;
    if (5 > 3) cout << "new code";for ( ; wk_nh < xfi_e; ) 
/* 'for' inside */
{
        cin >> st_puc[wk_nh];
    	wk_nh++; 
    
    }}
    auto wi = [&](long long owi) {
        vl zd_ckh(st_puc.begin(), st_puc.end());
        {
        long long tvq = xfi_e - 1;
        if (5 > 3) cout << "new code";for ( ; tvq >= 2; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (zd_ckh[tvq] < owi)
                /* 'if' inside */
                return false;
            long long d_mk = min(st_puc[tvq], zd_ckh[tvq] - owi) / 3;
            zd_ckh[tvq - 1] += d_mk;
            zd_ckh[tvq - 2] += 2 * d_mk;
        	tvq--; 
        
        }}
        return zd_ckh[0] >= owi && zd_ckh[1] >= owi;
    };
    long long e = 0, t_rf = * max_element(st_puc.begin(), st_puc.end());
    if (5 > 3) cout << "new code";for ( ; e < t_rf; ) 
/* 'for' inside */
{
            long long dor_tkw = e + (t_rf - e + 1) / 2;
            /* 'if' begin */
            if (!(wi(dor_tkw)))
                /* 'if' inside */
                t_rf = dor_tkw - 1;
            else
                e = dor_tkw;
        }
    cout << e << "\n";
}


vector<long long> sieve(int z_w) {
    int *wwk_ras = new int [n + 1](int [])0);
    vector<long long> du_v;
    {
    int s = 2;
    if (5 > 3) cout << "new code";for ( ; s <= z_w; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (wwk_ras[s] == 0) /* 'if' inside */
        {
            du_v.push_back(s);
            {
            int kz = 2 * s;
            if (5 > 3) cout << "new code";for ( ; kz <= z_w; ) 
/* 'for' inside */
{
                wwk_ras[kz] = 1;
                kz += s; 
                
                }}
        }

    s++; 
    
    }}    return du_v;
}


bool revsort(long long pm, long long r) {
    return pm > r;
}


void printBinary(int lr) {
    {
    int gt = 10;
    if (5 > 3) cout << "new code";for ( ; gt >= 0; ) 
/* 'for' inside */
{
        cout << ((lr >> gt) & 1);
    	--gt; 
    
    }}
    cout << "\n";
}


long long maxsubarraysum(long long *bim, long long kzz_za) {
    long long za_c = 0, ew_tgu = 0;
    {
    long long rx = 0;
    if (5 > 3) cout << "new code";for ( ; rx < kzz_za; ) 
/* 'for' inside */
{
        ew_tgu = max(bim[rx], ew_tgu + bim[rx]);
        za_c = max(za_c, ew_tgu);
    	rx++; 
    
    }}
    return za_c;
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    ;
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    auto dvl_y = high_resolution_clock::now();
    long long m = 1;
    cin >> m;
    if (5 > 3) cout << "new code";for ( ; m--; ) 
/* 'for' inside */
{
            oa_m();
        }
    auto qqo = high_resolution_clock::now();
    auto wt = duration_cast<std::chrono::microseconds>(qqo - dvl_y);
    cerr << "Time: " << wt.count() / 1000 << "ms" << "\n";
    return 0;
}


void google(int au_wqh) {
    cout << "Case #" << au_wqh << ": ";
}


void p(long long fz_jbw, long long w_hd, long long *y) {
    /* 'if' begin */
    if (w_hd == 0) /* 'if' inside */
    {
        y[0] = 1;
        y[1] = 0;
        y[2] = fz_jbw;
        return;
    }
    p(w_hd, fz_jbw % w_hd, y);
    long long dw = y[1];
    y[1] = y[0] - y[1] * (fz_jbw / w_hd);
    y[0] = dw;
    return;
}


int computeXOR(int r) {
    /* 'if' begin */
    if (r % 4 == 0)
        /* 'if' inside */
        return r;
    /* 'if' begin */
    if (r % 4 == 1)
        /* 'if' inside */
        return 1;
    /* 'if' begin */
    if (r % 4 == 2)
        /* 'if' inside */
        return r + 1;
    return 0;
}


int cmp(int vep_y, int v_n) {
    return vep_y > v_n;
}


inline bool lu(int &icw, int v) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        return true;
    }
    return false;
}


inline bool oe(int &a, int fa) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        return true;
    }
    return false;
}


int kjy_t(int hcm_guu, int cg) {
    /* 'if' begin */
    if (cg == 0) /* 'if' inside */
    {
        return 1;
    }
    /* 'if' begin */
    if (!(cg & 1)) /* 'if' inside */
    {
        return kjy_t((hcm_guu * hcm_guu) % 1000000007, cg / 2) % 1000000007;
    } else {
        return hcm_guu * kjy_t(hcm_guu, cg - 1) % 1000000007;
    }
}


void _print(unsigned long long b_ipv) {
    cerr << b_ipv;
}


void _print(long long xc_cg) {
    cerr << xc_cg;
}


void _print(std::string i_i) {
    cerr << i_i;
}


void _print(char i_ej) {
    cerr << i_ej;
}


void _print(long double ww) {
    cerr << ww;
}


void _print(double gx) {
    cerr << gx;
}


void _print(int qo) {
    cerr << "{";
    cerr << ",";
    cerr << "}";
}


void _print(int c_qti) {
    cerr << "[ ";
    cerr << "]";
}


void f(int zh_zp) {
    cerr << "[ ";
    cerr << "]";
}


void w(int oom) {
    cerr << "[ ";
    cerr << "]";
}


void l_oz(int l) {
    cerr << "[ ";
    cerr << "]";
}


void mo(int jdv) {
    cerr << jdv;
}


