#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("arch=skylake")
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define rep(x, r) for(int (x) = 0; (x) < (r); (x)++)
#define rrep(x, l, r) for(int (x) = l; (x) < (r); x++)
using namespace std;
using ll = long long;

// Debugging template by livw
// Link: https://codeforces.com/blog/entry/68809
void j(int hc_q) {cerr << hc_q;}
void rul_bd(long be_b) {cerr << be_b;}
void zo(long long mr) {cerr << mr;}
void zfl(unsigned sx) {cerr << sx;}
void c(unsigned long vdj) {cerr << vdj;}
void t(unsigned long long gj_b) {cerr << gj_b;}
void am_gn(float zgs_ngn) {cerr << zgs_ngn;}
void fnc_h(double k_eyw) {cerr << k_eyw;}
void y_jmf(long double fs_r) {cerr << fs_r;}
void xnp(char cs_epa) {cerr << '\'' << cs_epa << '\'';}
void a_xpe(const char *iqo_dmo) {cerr << '\"' << iqo_dmo << '\"';}
void zya(const string &y) {cerr << '\"' << y << '\"';}
void h_qiv(bool uva) {cerr << (uva ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &at) {cerr << '{'; __print(at.first); cerr << ','; __print(at.second); cerr << '}';}
template<typename T>
void __print(const T &pq) {int jz = 0; cerr << '{'; for (auto &ukf: pq) cerr << (jz++ ? "," : ""), __print(ukf); cerr << "}";}
void nuf() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T p, V... cd_g) {__print(p); if (sizeof...(v)) cerr << ", "; _print(cd_g...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif

#ifdef ONLINE_JUDGE
const bool LOCAL = false;
#else
const bool s = true;
#endif

const int t_eb = 2e7 + 10;
ll zz_xna[t_eb];

void n_xi(int a_kx) {
    int t, r_ah, i;
    cin >> t >> r_ah >> i;
    vector<int> e_y;
    for(int qap_qyc = 1; qap_qyc * qap_qyc <= i; qap_qyc++) {
        if(qap_qyc * qap_qyc == i)
            e_y.push_back(qap_qyc);
        else if(i % qap_qyc == 0) {
            e_y.push_back(qap_qyc);
            e_y.push_back(i / qap_qyc);
        }
    }
    
    ll vea = 0;
    for(auto xh_wr: e_y) {
        if(((i / xh_wr) + r_ah) % t == 0) {
            vea += zz_xna[((i / xh_wr) + r_ah) / t];
        }
    }

    cout << vea << "\n";
}

int main() {
    memset(zz_xna, 0, sizeof zz_xna);
    for(int ae = 2; ae < t_eb; ae++)
        if(zz_xna[ae] == 0)
            for(int jba_k = ae; jba_k < t_eb; jba_k += ae)
                zz_xna[jba_k]++;

    zz_xna[1] = 1;
    for(int i = 2; i < t_eb; i++)
        zz_xna[i] = 1ll << zz_xna[i];

    bool am = true, a = false, lvv = false;
    if(lvv) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    
    if(!a && !s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }

    int agc = 1;
    if(am) 
        cin >> agc;

    for(int uep_xjt = 0; uep_xjt < agc; uep_xjt++)
        n_xi(uep_xjt + 1);

    if(s) {
        cout << "Press any key to continue...\n";
        string j_j;
        cin >> j_j;
    }
}
