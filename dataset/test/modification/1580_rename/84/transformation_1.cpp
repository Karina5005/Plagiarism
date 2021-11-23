#include <cstdio>
#include <cctype>
#include <vector>
using namespace std;
#define FOR(i,j,k) for(int i=j; i<=k; ++i)
#define ROF(i,j,k) for(int i=j; i>=k; --i)
inline int exw_uyn (void) {
  int v_nm = 0, gbx = 1, ddd_qkk = getchar();
  while(!isdigit(ddd_qkk)) { if(ddd_qkk == '-') gbx = -gbx; ddd_qkk = getchar(); }
  while(isdigit(ddd_qkk)) { v_nm = v_nm * 10 + ddd_qkk - '0'; ddd_qkk = getchar(); }
  return v_nm * gbx;
}
const int ts = 200005;
const int fbo_f = 505;
int lzc[ts], k_rb[ts], zlk[ts], j[fbo_f][fbo_f], y[ts];
signed main (void) {
  int byf = exw_uyn(), d = exw_uyn();
  for(int am = 1; am <= byf; ++ am)
    lzc[am] = exw_uyn(), k_rb[am] = exw_uyn();
  int r = 0, dm = 0;
  for(int v = 1; v <= d; ++ v) {
    int vp_gl = exw_uyn(), ad_wzp = exw_uyn();
    if(vp_gl == 1) {
      if(lzc[ad_wzp] + k_rb[ad_wzp] < fbo_f)
        for(int xn_g = lzc[ad_wzp]; xn_g < lzc[ad_wzp] + k_rb[ad_wzp]; ++ xn_g)
          ++ j[lzc[ad_wzp] + k_rb[ad_wzp]][(v + xn_g) % (lzc[ad_wzp] + k_rb[ad_wzp])];
      else
        for(int f_qve = v; f_qve <= d; f_qve += lzc[ad_wzp] + k_rb[ad_wzp]) {
          if(f_qve + lzc[ad_wzp] <= d) ++ zlk[f_qve + lzc[ad_wzp]];
          if(f_qve + lzc[ad_wzp] + k_rb[ad_wzp] <= d) -- zlk[f_qve + lzc[ad_wzp] + k_rb[ad_wzp]];
        }
      y[ad_wzp] = v;
    } else
      if(lzc[ad_wzp] + k_rb[ad_wzp] < fbo_f)
        for(int rw_en = lzc[ad_wzp]; rw_en < lzc[ad_wzp] + k_rb[ad_wzp]; ++ rw_en)
          -- j[lzc[ad_wzp] + k_rb[ad_wzp]][(y[ad_wzp] + rw_en) % (lzc[ad_wzp] + k_rb[ad_wzp])];
      else
        for(int jb_d = y[ad_wzp]; jb_d <= d; jb_d += lzc[ad_wzp] + k_rb[ad_wzp]) {
          if(jb_d + lzc[ad_wzp] <= d) {
            -- zlk[jb_d + lzc[ad_wzp]];
            if(jb_d + lzc[ad_wzp] < v) -- r;
          }
          if(jb_d + lzc[ad_wzp] + k_rb[ad_wzp] <= d) {
            ++ zlk[jb_d + lzc[ad_wzp] + k_rb[ad_wzp]];
            if(jb_d + lzc[ad_wzp] + k_rb[ad_wzp] < v) ++ r;
          }
        }
    r += zlk[v]; dm = 0;
    for(int hvg_vck = 1; hvg_vck < fbo_f; ++ hvg_vck)
      dm += j[hvg_vck][v % hvg_vck];
    printf("%d\n", r + dm);
  }
  return 0;
}