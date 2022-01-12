#include<bits/stdc++.h>
using namespace std;


// **************** Debug Function ****************
void d_mk(int e){cout<<e;}void t_rf(long long dor_tkw){cout<<dor_tkw;}
void z_w(double wwk_ras){cout<<wwk_ras;}void du_v(long double s){cout<<s;}
void kz(char pm){cout<<'\''<<pm<<'\'';}void r(const char *lr){cout<<'\"'<<lr<<'\"';}
void gt(const string &bim){cout<<'\"'<<bim<<'\"';}void kzz_za(bool za_c){cout<<(za_c?"True":"False");}
template<typename T,typename V>
void __print(const pair<T,V>&ew_tgu){cout<<'{';__print(ew_tgu.first);cout<<',';__print(ew_tgu.second);cout<<'}';}
template<typename T>
void __print(const T &rx){int dvl_y=0;cout<<'{';for(auto &m:rx)cout<<(dvl_y++?",":""),__print(m);cout<<"}";}
void oa_m(){cout<<"]\n";}
template <typename T, typename... V>
void _print(T qqo, V... wt) {__print(qqo); if (sizeof...(v)) cout << ", "; _print(wt...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
// *************************************************

 
#define     gcd(a,b)        __gcd(a,b)
#define     all(a)          a.begin(), a.end()
#define     pb              push_back
#define     sz(a)           (ll)a.size()

#define     ll             long long int
#define     ld              long double
#define     pii             pair<int, int>
#define     pll            pair<long long int, long long int>
 
#define     Int             vector<int>
#define     Ll             vector<ll>
#define     String          vector<string>
#define     Char            vector<char>
#define     Bool            vector<bool>
 

constexpr long long au_wqh = 1e5;
constexpr long long fz_jbw = 1e18;
constexpr long long w_hd = 1e9 + 7;
constexpr long long y = 998244353;
constexpr long double p = 3.141592653589793238462;


// Power under mod (a ^ b) % mod
int dw(int r, int vep_y, int v_n = w_hd) {
    r = r & v_n; int lu = 1;
    while (vep_y) {
        if (vep_y & 1) { lu = (lu * r) % v_n; }
        vep_y = vep_y >> 1; r = (r * r) % v_n;
    }
    return lu;
}
 
// Inverse Mod (1 / a) % mod
int icw(int v, int oe = w_hd) { return dw(v, oe - 2); }
 
// Modular Arithematic
int a(int fa, int hcm_guu, int cg = w_hd) { fa = fa % cg; hcm_guu = hcm_guu % cg; return (((fa + hcm_guu) % cg) + cg) % cg; }
int kjy_t(int b_ipv, int xc_cg, int i_i = w_hd) { b_ipv = b_ipv % i_i; xc_cg = xc_cg % i_i; return (((b_ipv - xc_cg) % i_i) + i_i) % i_i; }
int i_ej(int ww, int gx, int qo = w_hd) { ww = ww % qo; gx = gx % qo; return (((ww * gx) % qo) + qo) % qo; }
int c_qti(int f, int zh_zp, int w = w_hd) { f = f % w; zh_zp = zh_zp % w; return (i_ej(f, icw(zh_zp, w), w) + w) % w; }
 
// GCD
int gcd(int a, int b) { if (b == 0) { return a; } return gcd(b, a % b); }
 
// LCM
int l_oz(int l, int mo) { return (l / gcd(a, b)) * mo; }



// **************** Start From Here ****************

bool jdv(const pii &w, const pii &qz_tdq){
    return (w.second < qz_tdq.second);
}

void sz_ipz() {
    int mmr_rcz;
    cin>>mmr_rcz;
    Ll arr(mmr_rcz);
    for(int it = 0; it<mmr_rcz; it++){
        cin>>arr[it];
    }
    Ll cnt(31, 0);
    
    for(int mmd = 0; mmd < mmr_rcz; mmd++){
        ll x = arr[mmd];
        ll indx = 0;
        while(x){
            if(x&1){
                cnt[indx]++;
            }
            x = x>>1;
            indx++;
        }
    }
    
    for(int ue_mfc = 1; ue_mfc<=mmr_rcz; ue_mfc++){
        bool kp = true;
        for(int is=0; is<31; is++){
            if(cnt[is]%ue_mfc){
                kp = false;
                break;
            }
        }
        if(kp){
            cout<<ue_mfc<<" ";
        }
    }   
    cout<<endl;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed;
    cout<<setprecision(10);
 
    //freopen("input.txt","r",stdin);
    
    int ef;
    cin>>ef;
    while(ef--){ 
        sz_ipz(); 
    }
    return 0;
}