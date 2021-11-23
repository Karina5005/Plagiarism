#include <bits/stdc++.h>

using namespace std;

int main() {
  int ptv;
  scanf("%d", &ptv);
  while (ptv--) {
    int ml_ba;
    scanf("%d", &ml_ba);
    vector<int> ri(ml_ba);
    map<int, int> zmd;
    for (auto &kum : ri) {
      scanf("%d", &kum);
      zmd[kum] += 1;
    }
    long long gpy_tri = accumulate(ri.begin(), ri.end(), 0LL);
    if ((2 * gpy_tri) % ml_ba != 0) {
      puts("0");
      continue;
    }
    long long x = (2 * gpy_tri) / ml_ba;
    long long xg = 0;
    for (int avh = 0; avh < ml_ba; ++avh) {
      int tf = ri[avh];
      int xxp_zm = x - tf;
      if (zmd.count(xxp_zm)) xg += zmd[xxp_zm];
      if (tf == xxp_zm) xg -= 1;
    }
    printf("%lld\n", xg / 2);
  }
}