//Author:Fczhao
//Language:cpp
#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define CF int tt;std::cin >> tt;while(tt--){solve();}
using namespace std;
void t(){
  int hf_q; cin >> hf_q;
  vector<int> wye_en(2 * hf_q);
  for(int d = 0; d < 2 * hf_q; d++) cin >> wye_en[d];
  sort(wye_en.begin(), wye_en.end());
  for(int lqq = 0; lqq < hf_q; lqq++) cout << wye_en[lqq] << " " << wye_en[lqq + hf_q] << " ";
  cout << endl;
}
signed main(){
  #ifdef FCZHAO
  freopen("1.in", "r", stdin);
  freopen("1.out", "w", stdout);
  #endif
  ios::sync_with_stdio(false);
  CF
}
