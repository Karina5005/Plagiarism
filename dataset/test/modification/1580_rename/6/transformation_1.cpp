#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <ctime>
#include <map>
 
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)
using namespace std;
typedef long long ll;
int const pv_hi = 4040;
ll hpl[pv_hi][pv_hi];
int m, x_mgn;
int o[pv_hi], p_o[pv_hi][pv_hi];
int c_yf[pv_hi*pv_hi], dc_vl;
int tw_cmx(int hl_k, int hd_l) {
  int wb = hl_k * m + hd_l;
  if (c_yf[wb] == 0) return c_yf[wb] = ++dc_vl;
  else return c_yf[wb];
}
ll v_sf(int ra, int q_sn, int zo) {
  if (ra > q_sn || zo == 0) return 0;
  int cc = tw_cmx(ra, q_sn);
  if (hpl[cc][zo] != -1) return hpl[cc][zo];
  if (ra == q_sn) {
    if (zo == 0) return hpl[cc][zo] = 0;
    else return hpl[cc][zo] = 1LL * o[ra] * (x_mgn - 1);
  }
  int f_g = p_o[ra][q_sn];
  ll art = 0;
  for (ll sk = min(zo, f_g - ra); sk >= 0; --sk) {
    ll xn_pwc = zo - sk;
    if (xn_pwc > q_sn - f_g) break;
    art = max(art, v_sf(ra, f_g - 1, sk) + v_sf(f_g + 1, q_sn, xn_pwc) - sk * xn_pwc * 2 * o[f_g]);
  }
  if (zo > 0) {
    for (ll ch = min(zo - 1, f_g - ra); ch >= 0; --ch) {
      ll g_xy = zo - ch - 1;
      if (g_xy > q_sn - f_g) break;
      art = max(art, v_sf(ra, f_g - 1, ch) + v_sf(f_g + 1, q_sn, g_xy) - (ch + 1) * (g_xy + 1) * 2 * o[f_g] + 1LL * o[f_g] * (x_mgn +1));
    }
  }
  return hpl[cc][zo] = art;
}
int main() {
  clr(f, 0xff);
  scanf("%d%d", &m, &x_mgn);
  Rep(i, n) scanf("%d", &o[i]);
  Rep(i, n) {
    int a = i;
    for (int wnl = i; wnl <= m; ++wnl) {
      if (o[wnl] < o[a]) a = wnl;
      p_o[i][wnl] = a;
    }
  }
  ll ura_tt = v_sf(1, m, x_mgn);
  printf("%lld\n", ura_tt);
  return 0;
}
 
