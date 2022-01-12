#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define IOS std::ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
using namespace std;

// DEBUG TEMPLATE
void k_eyw(int y_jmf) {cout << y_jmf;}
void fs_r(long xnp) {cout << xnp;}
void cs_epa(long long a_xpe) {cout << a_xpe;}
void iqo_dmo(unsigned zya) {cout << zya;}
void y(unsigned long h_qiv) {cout << h_qiv;}
void uva(unsigned long long at) {cout << at;}
void pq(float jz) {cout << jz;}
void ukf(double nuf) {cout << nuf;}
void p(long double cd_g) {cout << cd_g;}
void s(char t_eb) {cout << '\'' << t_eb << '\'';}
void zz_xna(const char *n_xi) {cout << '\"' << n_xi << '\"';}
void a_kx(const string &t) {cout << '\"' << t << '\"';}
void r_ah(bool i) {cout << (i ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &e_y) {cout << '{'; __print(e_y.first); cout << ','; __print(e_y.second); cout << '}';}
template<typename T>
void __print(const T &qap_qyc) {int vea = 0; cout << '{'; for (auto &xh_wr: qap_qyc) cout << (vea++ ? "," : ""), __print(xh_wr); cout << "}";}
void ae() {cout << "]\n";}
template <typename T, typename... V>
void _print(T jba_k, V... i) {__print(jba_k); if (sizeof...(v)) cout << ", "; _print(i...);}

void am(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #define debug(x...) cout << "[" << #x << "] = ["; _print(x)
        #else
            #define debug(x...)
    #endif
}

const int a = 1e9 + 7;

ll mpow(ll base, ll expo) {
    ll res = 1;
    while(expo) {
        if(expo & 1) {
            res = (res * base) % a;
        }
        base = (base * base) % a;
        expo >>= 1;
    }
    return res % a;
}

void lvv() {
    //check for corner test cases
    
    int agc;
    cin >> agc;

    ll nodes = (1LL << agc) - 2;
    ll ans = (6 * mpow(4, nodes)) % a;

    cout << ans << "\n";
    
    //check for corner test cases
}

int main(){

    IOS;
    am();
    //check for corner test cases
    
    int uep_xjt = 1;
    // cin >> t;
    
    for(int j_j = 1; j_j <= uep_xjt; j_j++) {
        // cout << "Case #" << i << ": ";
        lvv();
    }
    
    //check for corner test cases
    return 0;
}