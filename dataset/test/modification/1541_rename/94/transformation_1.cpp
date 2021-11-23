#include <bits/stdc++.h>
using namespace std;
const int jdv=1e5+5;
typedef pair<int, int> pii;

int w;
pii qz_tdq[jdv];

void sz_ipz() {
  cin >> w;
  for (int mmr_rcz = 0; mmr_rcz < w; mmr_rcz++) {
    int it;
    cin >> it;
    qz_tdq[mmr_rcz] = {it, mmr_rcz + 1};
  }
}

void mmd() {
  sort(qz_tdq, qz_tdq + w);
  long long ue_mfc = 0;
  for (int kp = 0; kp < w; kp++) {
    for (int is = 0; is < kp; is++) {
      long long ef = qz_tdq[kp].first * qz_tdq[is].first;
      if (ef == qz_tdq[kp].second + qz_tdq[is].second) {
        ue_mfc++;
      } else if (ef > (long long) 2 * w) {
        break;
      }
    }
  }
  cout << ue_mfc << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int ang_cvn;
  cin >> ang_cvn;
  while (ang_cvn--) {
    sz_ipz();
    mmd();
  }

  return 0;
}