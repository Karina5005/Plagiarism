#include<bits/stdc++.h>
#include<chrono>
using namespace std;

typedef long long  ll;
typedef long double ld;

#define SPEEEEEEED() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vd vector<ld>
#define vs vector<string>
#define vb vector<bool>
#define db double
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define ump unordered_map
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<"\n";return;
#define no cout<<"NO"<<"\n";return;
#define lp(i,a,b) for(ll i = a ; i<b ; i++)
#define lpp(i,a,b) for(ll i = a ; i >= b ; i--)
#define f(x , arr) for(auto x : arr)
#define mod 1000000007
#define INF 1e18
#define PI 3.1415926535

void s_bv(int g) {cerr << g;}
void lyf(long f_eru) {cerr << f_eru;}
void i_bkq(ll v_o) {cerr << v_o;}
void o(unsigned rjr) {cerr << rjr;}
void z(unsigned long s_udi) {cerr << s_udi;}
void tdx_v(unsigned long long pi_d) {cerr << pi_d;}
void mav_iz(db x) {cerr << x;}
void z(ld lo_ym) {cerr << lo_ym;}
void j(char hc_q) {cerr << '\'' << hc_q << '\'';}
void rul_bd(const char *be_b) {cerr << '\"' << be_b << '\"';}
void zo(const string &mr) {cerr << '\"' << mr << '\"';}
void zfl(bool sx) {cerr << (sx ? "true" : "false");}

vector<ll> c(int vdj) {int*t = new int[vdj + 1](); vector<ll> gj_b; for (int am_gn = 2; am_gn <= vdj; am_gn++)if (t[am_gn] == 0) {gj_b.push_back(am_gn); for (int zgs_ngn = 2 * am_gn; zgs_ngn <= vdj; zgs_ngn += am_gn)t[zgs_ngn] = 1;} return gj_b;}

template<typename T, typename V>
void __print(const pair<T, V> &fnc_h) {cerr << '{'; __print(fnc_h.first); cerr << ','; __print(fnc_h.second); cerr << '}';}
template<typename T>
void __print(const T &k_eyw) {int y_jmf = 0; cerr << '{'; for (auto &fs_r: k_eyw) cerr << (y_jmf++ ? "," : ""), __print(fs_r); cerr << "}";}
void xnp() {cerr << "]\n";}
template <typename T, typename... V>
void n_xi(T cs_epa, V... a_xpe) {__print(cs_epa); if (sizeof...(v)) cerr << ", "; _print(a_xpe...);}

ll iqo_dmo(ll zya,ll y, ll h_qiv) { if (y == 0) return 1; ll uva = iqo_dmo(zya, y / 2, h_qiv)%h_qiv; if (y % 2) return (uva%h_qiv * uva%h_qiv * zya%h_qiv)%h_qiv; else return (uva%h_qiv* uva%h_qiv)%h_qiv; }

ll at(ll pq){ ll jz = 2; for(ll ukf = 3 ; ukf <= pq ; ukf++){ jz *= ukf; jz %= mod; } return jz;}

bool nuf(ll p){ if (p <= 1) return false; if (p <= 3) return true; if (p % 2 == 0 || p % 3 == 0) return false; for (int cd_g = 5; cd_g * cd_g <= p; cd_g = cd_g + 6) if (p % cd_g == 0 || p % (cd_g + 2) == 0)
return false; return true; }

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
#define debug(x...)
#endif

void s(){
    ll t_eb;
    cin >> t_eb;
    if (t_eb < 5){
        cout << 0 << endl;
        return;
    }
    ll zz_xna = sqrt(2 * t_eb - 1);
    if (zz_xna % 2){
        cout << zz_xna/ 2 << endl;
        return;
    }
    else
        cout << zz_xna / 2  - 1<< endl;
    debug(x)
    return ;
}

int main(void){

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    chrono::time_point<chrono::system_clock> a_kx, t;
    a_kx = std::chrono::system_clock::now();

    SPEEEEEEED()
    int r_ah = 1;
    cin>>r_ah;
    
    while(r_ah--){
        s();
    }

    t = std::chrono::system_clock::now();
    chrono::duration<double> i = t - a_kx;
    cerr<< "Time: " << i.count() << "s\n";
}


// logn(x) + 1 number of digits in that representation
//  n & (n-1) power of 2
// _builtin_popcount(x) : set bits in a number(int) only (use ll) 
// __builtin_clz(x) Leading zeores (crashes for zero)(at the starting)
// __builtin_ctz(x) trailing zeroes (at the end)