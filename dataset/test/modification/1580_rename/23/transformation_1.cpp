#include <bits/stdc++.h>
const int jlr = 2e5 + 10;
int fhn, j, zn_m;
int w_n, lx_rs;
int g[jlr], w[jlr];
int t[510][510];
struct Train {
  int x, y, z;
} uu[jlr];
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cin >> fhn >> j;
  zn_m = sqrt(j);
  for (int aao_be = 1; aao_be <= fhn; aao_be++) {
    std::cin >> uu[aao_be].x >> uu[aao_be].y;
    uu[aao_be].z = uu[aao_be].x + uu[aao_be].y;
  }
  for (int l = 1; l <= j; l++) {
    std::cin >> w_n >> lx_rs;
    int dor_zi = (w_n == 1) ? 1 : -1;
    if (w_n == 1) w[lx_rs] = l;
    if (uu[lx_rs].z > zn_m) {
      long long pbm = w[lx_rs] + uu[lx_rs].x, km = j;
      while (pbm <= km) {
        g[std::max(1ll * l, pbm)] += dor_zi;
        g[std::max(1ll * l, std::min(km, pbm + uu[lx_rs].y - 1) + 1)] -= dor_zi;
        pbm += uu[lx_rs].z;
      }
    } else {
      for (int ieo_i = uu[lx_rs].x; ieo_i < uu[lx_rs].z; ieo_i++)
        t[uu[lx_rs].z][(ieo_i + w[lx_rs]) % uu[lx_rs].z] += dor_zi;
    }
    g[l] += g[l - 1];
    int p_jl = 0;
    for (int iv = 2; iv <= zn_m; iv++) p_jl += t[iv][l % iv];
    std::cout << g[l] + p_jl << "\n";
  }
  return 0;
}