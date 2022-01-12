/*-------AMAN SINHA------------*/
/*-------amansinha6189---------*/
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

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

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


/*---------------Debugging Functions------------------------------------------------------------------------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void nff(ll t_tay) {cerr << t_tay;}
void ilx(int ire_y) {cerr << ire_y;}
void ai_q(string re_zim) {cerr << re_zim;}
void o_wa(char hm) {cerr << hm;}
void pte(lld iu) {cerr << iu;}
void s_bv(double g) {cerr << g;}
void lyf(ull f_eru) {cerr << f_eru;}

template <class T, class V> void _print(pair <T, V> i_bkq);
template <class T> void _print(vector <T> v_o);
template <class T> void _print(set <T> o);
template <class T, class V> void _print(map <T, V> rjr);
template <class T> void _print(multiset <T> z);
template <class T, class V> void _print(pair <T, V> s_udi) {cerr << "{"; _print(s_udi.ff); cerr << ","; _print(s_udi.ss); cerr << "}";}
template <class T> void _print(vector <T> tdx_v) {cerr << "[ "; for (T pi_d : tdx_v) {_print(pi_d); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> mav_iz) {cerr << "[ "; for (T z : mav_iz) {_print(z); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> lo_ym) {cerr << "[ "; for (T j : lo_ym) {_print(j); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> hc_q) {cerr << "[ "; for (auto rul_bd : hc_q) {_print(rul_bd); cerr << " ";} cerr << "]";}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*--------------------Functions-------------------------------------------------------------------------------------------------------*/
ll be_b(ll zo, ll mr) {if (mr > zo) {return be_b(mr, zo);} if (mr == 0) {return zo;} return be_b(mr, zo % mr);}
ll zfl(ll sx, ll c, ll vdj) {ll t = 1; while (c > 0) {if (c & 1)t = (t * sx) % vdj; sx = (sx * sx) % vdj; c = c >> 1;} return t;}
void gj_b(int &am_gn, int &zgs_ngn) {int fnc_h = am_gn; am_gn = zgs_ngn; zgs_ngn = fnc_h;}
vector<ll> k_eyw(int y_jmf) {int*fs_r = new int[y_jmf + 1](); vector<ll> xnp; for (int cs_epa = 2; cs_epa <= y_jmf; cs_epa++)if (fs_r[cs_epa] == 0) {xnp.push_back(cs_epa); for (int a_xpe = 2 * cs_epa; a_xpe <= y_jmf; a_xpe += cs_epa)fs_r[a_xpe] = 1;} return xnp;}
ll iqo_dmo(ll zya, ll y, ll h_qiv) {zya = zya % h_qiv; y = y % h_qiv; return (((zya + y) % h_qiv) + h_qiv) % h_qiv;}
ll uva(ll at, ll pq, ll jz) {at = at % jz; pq = pq % jz; return (((at * pq) % jz) + jz) % jz;}
ll ukf(ll nuf, ll p, ll cd_g) {nuf = nuf % cd_g; p = p % cd_g; return (((nuf - p) % cd_g) + cd_g) % cd_g;}
//ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
/*--------------------------------------------------------------------------------------------------------------------------*/

void s(char &t_eb){
	if(t_eb<= 'b') t_eb++;
	else{
		t_eb = 'a';
	}
}

void zz_xna() {
	int n_xi,a_kx;
	cin>>n_xi>>a_kx;

	char t  = 'a';
	for(int r_ah = 0; r_ah<n_xi; r_ah++){
		cout<<t;
		s(t);
	}cout<<nline;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
  
      int i = 1;
      cin >> i;
      for (int e_y = 1; e_y <= i; e_y++) {
          // cout << "Case #" << t << ": ";
          zz_xna();
      }
}