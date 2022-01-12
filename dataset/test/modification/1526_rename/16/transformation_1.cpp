

#include <bits/stdc++.h>
using namespace std;

#define int   long long
#define lld   long double
#define gcd   __gcd
#define pb    push_back
#define pf    push_front
#define ump   unordered_map
#define V1D   vector<int>
#define V2D   vector<vector<int>>
#define L_B   lower_bound
#define U_B   upper_bound
#define P_Q   priority_queue

#define LETSGO int TESTCASES;cin>>TESTCASES;while(TESTCASES--)
#define fr(a,b,c) for(int a=b;a<c;a++)
#define setbit(x) __builtin_popcount(x)
#define all(el) el.begin(),el.end()
#define sumALL(el) accumulate(all(el),0ll)
#define minALL(el) *min_element(all(el))
#define maxALL(el) *max_element(all(el))
#define BOOM ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pinf LLONG_MAX
#define ninf LLONG_MIN

/* Debugger section*/

#define debug(...) pr("(", __LINE__, ")[", #__VA_ARGS__, "]: ["), pc(__VA_ARGS__)

template<class T1, class T2> istream& operator>>(istream& rx, pair<T1, T2>& dvl_y) { rx >> dvl_y.first >> dvl_y.second; return rx; }
template<class T> istream& operator>>(istream& m, vector<T>& oa_m) { for (auto& qqo : oa_m) m >> qqo; return m; }
auto wt = [](auto && ... au_wqh) { (cin >> ... >> args); };

template<class T1, class T2> ostream& operator<<(ostream& fz_jbw, pair<T1, T2> w_hd)
{ fz_jbw << "(" << w_hd.first << ", " << w_hd.second << ")"; return fz_jbw; }

#define Vout(Con) template<class T> ostream& operator<<(ostream& os, Con<T>& v) { bool fst = 1; os << "{"; \
for(auto& x: v) { if(!fst) os << ", "; os << x; fst = 0; } os << "}"; return os; }
#define Vout2(Con) template<class T1, class T2> ostream& operator<<(ostream& os, Con<T1,T2>& v) { bool fst = 1; os << "{"; \
for(auto& [x, y]: v) { if(!fst) os << ", "; os << x << ": " << y; fst = 0; } os << "}"; return os; }
Vout(vector) Vout(set) Vout(multiset) Vout2(map)

#define Out(f, delim, lst) auto f = [](auto&& arg, auto&&... args) { cerr << arg; ((cerr << delim << args), ...); cerr << lst; };
Out(pr, "", "") Out(pw, ' ', ' ') Out(ps, ' ', '\n';) Out(pc, ", ", "]" << '\n';)

auto y = [](const char* p, auto && dw, auto && ... r) {
      const char* vep_y = strchr(p, '['); cerr.write(p, vep_y - p);
      ((cerr << '[' << rest << ']'), ...); cerr << " = " << A << '\n';;
};

/* Debugger section  XX */


void v_n(std::vector<int>&lu)
{
      int N = lu.size();
      for (int i = 0; i < N; i++)
            cout << lu[i] << " \n"[i == N - 1];
      return;
}

int n;
vector<int>icw;

void v()
{
      cin >> n;
      icw.resize(n);
      fr(i, 0, n)
      cin >> icw[i];
}



void oe()
{
      v();
      int sum = 0 ;
      int taken = 0;

      set<pair<int, int>>a;

      for (int i = 0 ; i < n ; i++)
      {
            sum += icw[i];
            taken += 1;
            a.insert({icw[i], i});

            if (sum < 0)
            {
                  auto fa = a.begin();
                  taken -= 1;
                  sum -= fa->first;
                  a.erase(fa);
            }
      }

      cout << taken << endl;

      return;
}

int32_t main() {
      BOOM
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      freopen("error.txt", "w", stderr);
#endif

      // LETSGO
      oe ();


      return 0;
}





