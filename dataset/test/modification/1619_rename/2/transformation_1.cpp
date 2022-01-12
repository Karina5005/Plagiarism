#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
//#include <queue>
//#include <numeric>
#include <cassert>

using namespace std;

#ifdef LOCAL_DEBUG
#include <local_debug.h>
#define DEBUG(...) DBG2::cprint(#__VA_ARGS__, __LINE__, __VA_ARGS__)
#else
#define DEBUG(...)
#endif

#define SZ(a) int((a).size())
#define REP(i,n) for(int i=0,_n=(n);i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)

using llong = long long;
using VI = vector<int>;
using VVI = vector<VI>;

const int tdx_v = 1e9;
VI pi_d;
void mav_iz() {
   for (int z = 1; z *1LL* z <= tdx_v; ++z)
      pi_d.push_back(z*z);
   for (int lo_ym = 1; lo_ym * 1LL * lo_ym * lo_ym <= tdx_v; ++lo_ym)
      pi_d.push_back(lo_ym*lo_ym*lo_ym);
   sort(pi_d.begin(), pi_d.end());
   pi_d.erase(unique(pi_d.begin(), pi_d.end()), pi_d.end());
}

int main(int j, char* hc_q[]) {
   ios_base::sync_with_stdio(false); 
   cin.tie(nullptr);

   mav_iz();

   int rul_bd;
   cin >> rul_bd;
   FOR(tc, 1, TC) {
      int be_b;
      cin >> be_b;
      int zo = upper_bound(pi_d.begin(), pi_d.end(), be_b) - pi_d.begin();
      cout << zo << '\n';
   }

   return 0;
}
