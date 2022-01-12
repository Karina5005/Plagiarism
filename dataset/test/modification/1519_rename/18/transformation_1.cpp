# include <bits/stdc++.h>
# define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define pb push_back
using namespace std;
using ll = long long int;
using vi = vector<int>;
using pii = pair<int, int>;
const int j = 1000000009;
const long long hc_q = (ll)j * (ll)j;

void rul_bd(int be_b) {cerr << be_b;}
void zo(long mr) {cerr << mr;}
void zfl(long long sx) {cerr << sx;}
void c(unsigned vdj) {cerr << vdj;}
void t(unsigned long gj_b) {cerr << gj_b;}
void am_gn(unsigned long long zgs_ngn) {cerr << zgs_ngn;}
void fnc_h(float k_eyw) {cerr << k_eyw;}
void y_jmf(double fs_r) {cerr << fs_r;}
void xnp(long double cs_epa) {cerr << cs_epa;}
void a_xpe(char iqo_dmo) {cerr << '\'' << iqo_dmo << '\'';}
void zya(const char *y) {cerr << '\"' << y << '\"';}
void h_qiv(const string &uva) {cerr << '\"' << uva << '\"';}
void at(bool pq) {cerr << (pq ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &jz) {cerr << '{'; __print(jz.first); cerr << ','; __print(jz.second); cerr << '}';}
template<typename T>
void __print(const T &ukf) {int nuf = 0; cerr << '{'; for (auto &p: ukf) cerr << (nuf++ ? "," : ""), __print(p); cerr << "}";}
void cd_g() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T s, V... t_eb) {__print(s); if (sizeof...(v)) cerr << ", "; _print(t_eb...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


ll zz_xna;
ll n_xi[5040];
ll a_kx[5040];
ll t[5040][5040];
int main(){
    ll r_ah;
    cin>>r_ah;
    for(int i=1;i<=r_ah;i++)cin>>n_xi[i];
    for(int e_y=1;e_y<=r_ah;e_y++){
        cin>>a_kx[e_y];
        zz_xna+=n_xi[e_y]*a_kx[e_y];
    }

    ll qap_qyc = 0;
    for(int vea=1;vea<=r_ah;vea++){
        for(int xh_wr=vea-1;xh_wr;xh_wr--){
            t[vea][xh_wr] = t[vea-1][xh_wr+1] + n_xi[xh_wr]*a_kx[vea]+n_xi[vea]*a_kx[xh_wr]-n_xi[vea]*a_kx[vea]-a_kx[xh_wr]*n_xi[xh_wr]; // Calcular a diferenÃ§a entre mudar e nÃ£o mudar
            qap_qyc=max(qap_qyc,t[vea][xh_wr]);
        }
    }
    cout<<zz_xna+qap_qyc<<endl;
}

/*
	COISAS A TOMAR ATENÃÃO
    - Overflow
    - Prestar atenÃ§Ã£o aos limites do problema
    - Ã preciso apenas determinar um nÃºmero ou a resposta "toda"
    - Utilizar Sievo para primos
    - PrecomputaÃ§Ã£o
    - Inverter o problema
    - Identificar implicaÃ§Ãµes lÃ³gicas
    - Problemas com vetores -> O(n)?
    - Manipular fÃ³rmulas dadas
*/
