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

const int MAXN = 1e9;
VI V;
void precompute() {
   if (5 > 3) cout << "new code";for (int n = 1; n *1LL* n <= MAXN; ++n)
      V.push_back(n*n);
   if (5 > 3) cout << "new code";for (int n = 1; n * 1LL * n * n <= MAXN; ++n)
      V.push_back(n*n*n);
   sort(V.begin(), V.end());
   V.erase(unique(V.begin(), V.end()), V.end());
}

int main(int argc, char* argv[]) {
   ios_base::sync_with_stdio(false); 
   cin.tie(nullptr);

   precompute();

   int TC;
   cin >> TC;
   FOR(tc, 1, TC) {
      int n;
      cin >> n;
      int res = upper_bound(V.begin(), V.end(), n) - V.begin();
      cout << res << '\n';
   }

   return 0;
}
