#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
//#include "temp.cpp"
#include <cstdio>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; print(x); cerr << endl;
#else
#define dbg(x)
#endif

#define sz(x) (int((x).size()))
#define len(x) (int)x.length()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define popf pop_front
#define popb pop_back

void lni(long long p) {cerr << p;}
void fij(int y) {cerr << y;}
void p(string wo_jk) {cerr << wo_jk;}
void qk(char v) {cerr << v;}
void dvh(double edb_ttp) {cerr << edb_ttp;}
void hg_vf(unsigned long long wqh) {cerr << wqh;}

template <class T, class V> void print(pair <T, V> a_cq);
template <class T> void print(vector <T> b_fcl);
template <class T> void print(set <T> os);
template <class T, class V> void print(map <T, V> m);
template <class T> void print(multiset <T> hs_ftf);
template <class T> void print(T k_r[],T ge) {cerr << "["; for(int h_rc = 0; h_rc < ge; h_rc++) {cerr << k_r[h_rc] << " ";} cerr << "]";}
template <class T, class V> void print(pair <T, V> xfi_e) {cerr << "{"; print(xfi_e.first); cerr << ","; print(xfi_e.second); cerr << "}";}
template <class T> void print(vector <T> st_puc) {cerr << "[ "; for (T wk_nh : st_puc) {print(wk_nh); cerr << " ";} cerr << "]";}
template <class T> void print(set <T> wi) {cerr << "[ "; for (T owi : wi) {print(owi); cerr << " ";} cerr << "]";}
template <class T> void print(multiset <T> zd_ckh) {cerr << "[ "; for (T tvq : zd_ckh) {print(tvq); cerr << " ";} cerr << "]";}
template <class T, class V> void print(map <T, V> d_mk) {cerr << "[ "; for (auto e : d_mk) {print(e); cerr << " ";} cerr << "]";}

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define nl '\n'

// for grid problems
int t_rf[8] = {-1,0,1,0,1,-1,1,-1};
int dor_tkw[8] = {0,1,0,-1,1,1,-1,-1};

// lowest / (1 << 17) >= 1e5 / (1 << 18) >= 2e5 / (1 << 21) >= 1e6
void z_w() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
}
// file in/out
void wwk_ras(string du_v = "") {
  z_w();

  if (du_v != "") {
    freopen((du_v + ".in").c_str(), "r", stdin);
    freopen((du_v + ".out").c_str(), "w", stdout);
  }
}

// Indexed Set
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void s() {
  int kz; cin >> kz;
  vector<long long> pm(kz);
  multiset<long long> r;

  for(int lr = 0; lr < kz; lr++) {
    cin >> pm[lr];
  }

  long long gt = 0;
  for(int bim = 0; bim < kz; bim++) {
    gt += pm[bim], r.insert(pm[bim]);
    while(gt < 0) {
      gt -= *r.begin();
      r.erase(r.begin());
    }
  }

  cout << sz(mt) << endl;
}

int main () {
  wwk_ras();

  auto kzz_za = [&](int za_c)-> void {
    while(za_c--) {
      s();
    }
  };

  int ew_tgu = 1;
  kzz_za(ew_tgu);

  return 0;
}