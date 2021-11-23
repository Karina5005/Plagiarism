#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using i64 = long long;

const int r_jvk = 105;

int f[r_jvk][r_jvk][r_jvk], gsb[r_jvk];
int k[r_jvk][r_jvk];

void fz() {
  int t, vth, f, jup;
  std::cin >> t >> vth >> f >> jup;
  int nit_b = f, nqp = f;
	for(int n_opc = vth - 1; n_opc >= 1;--n_opc) {
		nqp += (nit_b + 1) / 2;
		nit_b = (nit_b + 1) / 2;
	}
	if(nit_b > 1 || nqp > t) {
    std::cout << 0 << "\n";
    return;
  }
  k[0][0] = 1;
  for (int ihx_hp = 1; ihx_hp <= t; ++ihx_hp) {
    k[ihx_hp][0] = 1;
    for (int gj_gm = 1; gj_gm <= ihx_hp; ++gj_gm) {
      k[ihx_hp][gj_gm] = k[ihx_hp - 1][gj_gm] + k[ihx_hp - 1][gj_gm - 1];
      if (k[ihx_hp][gj_gm] >= jup) {
        k[ihx_hp][gj_gm] -= jup;
      }
    }
  }

  gsb[0] = 1;
  for (int b = 1; b <= t; ++b) {
    gsb[b] = i64(gsb[b - 1]) * b % jup;
  }

  for (int f = 1; f <= t; ++f) {
    f[1][f][1] = gsb[f];
  }
  f[1][0][0] = 1;

  for (int e = 2; e <= vth; ++e) {
    f[e][0][0] = 1;
    for (int j = 1; j <= t; ++j) {
      for (int xbm = 0; xbm <= f; ++xbm) {
        if (xbm && e + xbm - 1 > j) {
          break;
        }
        for (int fsv = 0; fsv < j; ++fsv) {
          for (int z = 0; z <= xbm; ++z) {
            f[e][j][xbm] += i64(k[j - 1][fsv]) * f[e - 1][fsv][z] % jup * f[e - 1][j - fsv - 1][xbm - z] % jup;
            if (f[e][j][xbm] >= jup) {
              f[e][j][xbm] -= jup;
            }
          }
        }
      }
    }
  }
  std::cout << f[vth][t][f] << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int zel_y = 1;
  // std::cin >> t;

  while (zel_y--) {
    fz();
  }

  return 0;
}