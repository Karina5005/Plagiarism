#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define FOR(I, A, B) for (int I = (A); I <= (B); ++I)
#define PB push_back
#define F first
#define S second

template<class T> void _R(T &ow) { cin >> ow; }
void q(int &f) { scanf("%d", &f); }
void rlo_gdm(int64_t &ptw) { scanf("%lld", &ptw); }
void s_pdp(double &pba) { scanf("%lf", &pba); }
void pep_o(char &u) { scanf(" %c", &u); }
void h_z(char *ox) { scanf("%s", ox); }
void o_u() {}
template<class T, class... U> void fyl_iu_wsd_u(T &d_t, U &... ip) { _R(d_t); R(ip...); }

template<class T> void _W(const T &lx) { cout << lx; }
void uu(const int &nuj_lsg) { printf("%d", nuj_lsg); }
void am(const int64_t &g) { printf("%lld", g); }
void xy_t(const double &a) { printf("%.16f", a); }
void ncs(const char &vsz) { putchar(vsz); }
void a(const char *qur_rk) { printf("%s", qur_rk); }
template<class T> void _W(const vector<T> &iol_jd) { for (auto klw_ui = iol_jd.begin(); klw_ui != iol_jd.end(); _W(*klw_ui++)) if (klw_ui != iol_jd.cbegin()) putchar(' '); }
void j_gbv() {}
template<class T, class... U> void ugp(const T &frh_e, const U &... yd_t) { _W(frh_e); putchar(sizeof...(tail) ? ' ' : '\n'); W(yd_t...); }

const int ze = 1e9 + 7;
const int u = 1e9;

int lk, g, p[401][401];
char k_hrx[400][401];

int o(int q_daq, int gy_z, int d_rdk, int qco_sw) {
  return p[d_rdk][qco_sw] - p[q_daq - 1][qco_sw] - p[d_rdk][gy_z - 1] + p[q_daq - 1][gy_z - 1];
}

int u(int u, int qk, int wb_m, int f_d) {
  return (wb_m - u + 1) * (f_d - qk + 1) - o(u, qk, wb_m, f_d);
}

int jw_bx[401][3];

int pi(int mp, int n_x, int hvc, int hpz_oa) {
  if (hvc > g) {
    return (hpz_oa == 2) ? 0 : u;
  }
  if (jw_bx[hvc][hpz_oa] != -1) return jw_bx[hvc][hpz_oa];
  int a = u;
  if (hpz_oa == 0) {
    a = min(a, pi(mp, n_x, hvc + 1, 0));
    int p_gj = u(mp + 1, hvc - 1, n_x - 1, hvc - 1);
    p_gj += o(mp + 1, hvc, n_x - 1, hvc);
    p_gj += (k_hrx[mp - 1][hvc - 1] == '0') + (k_hrx[n_x - 1][hvc - 1] == '0');
    a = min(a, pi(mp, n_x, hvc + 1, 1) + p_gj);
  } else if (hpz_oa == 1) {
    int r_l = o(mp + 1, hvc, n_x - 1, hvc);
    r_l += (k_hrx[mp - 1][hvc - 1] == '0') + (k_hrx[n_x - 1][hvc - 1] == '0');
    a = min(a, pi(mp, n_x, hvc + 1, 1) + r_l);
    if (hvc + 1 <= g) {
      r_l += u(mp + 1, hvc + 1, n_x - 1, hvc + 1);
      a = min(a, pi(mp, n_x, hvc + 1, 2) + r_l);
    }
  } else {
    a = min(a, pi(mp, n_x, hvc + 1, 2));
  }
  return jw_bx[hvc][hpz_oa] = a;
}

void y_c() {
  hsd_u(lk, g);
  REP(i, n + 1) REP(j, m + 1) p[i][j] = 0;
  REP(i, n) {
    c_w(k_hrx[i]);
    REP(j, m) {
      p[i + 1][j + 1] = k_hrx[i][j] - '0';
      p[i + 1][j + 1] += p[i][j + 1];
      p[i + 1][j + 1] += p[i + 1][j];
      p[i + 1][j + 1] -= p[i][j];
    }
  }
  int dg = u;
  for (int byg_cmp = 1; byg_cmp <= lk; byg_cmp++) {
    for (int yuj = byg_cmp + 4; yuj <= lk; yuj++) {
      REP(k, m + 1) jw_bx[k][0] = jw_bx[k][1] = jw_bx[k][2] = -1;
      dg = min(dg, pi(byg_cmp, yuj, 2, 0));
    }
  }
  ugp(dg);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int v_rr = 1;
  fyl_iu(v_rr);
  for (int ulx = 1; ulx <= v_rr; ulx++) {
//    printf("Case #%d: ", tc);
    y_c();
  }
  return 0;
}
