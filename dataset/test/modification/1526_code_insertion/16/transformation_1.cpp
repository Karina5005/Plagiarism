

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

template<class T1, class T2> istream& operator>>(istream& is, pair<T1, T2>& p) { is >> p.first >> p.second; return is; }
template<class T> istream& operator>>(istream& is, vector<T>& v) { for (auto& x : v) is >> x; return is; }
auto re = [](auto && ... args) { (cin >> ... >> args); };

template<class T1, class T2> ostream& operator<<(ostream& os, pair<T1, T2> p)
{ os << "(" << p.first << ", " << p.second << ")"; return os; }

#define Vout(Con) template<class T> ostream& operator<<(ostream& os, Con<T>& v) { bool fst = 1; os << "{"; \
for(auto& x: v) { if(!fst) os << ", "; os << x; fst = 0; } os << "}"; return os; }
#define Vout2(Con) template<class T1, class T2> ostream& operator<<(ostream& os, Con<T1,T2>& v) { bool fst = 1; os << "{"; \
for(auto& [x, y]: v) { if(!fst) os << ", "; os << x << ": " << y; fst = 0; } os << "}"; return os; }
Vout(vector) Vout(set) Vout(multiset) Vout2(map)

#define Out(f, delim, lst) auto f = [](auto&& arg, auto&&... args) { cerr << arg; ((cerr << delim << args), ...); cerr << lst; };
Out(pr, "", "") Out(pw, ' ', ' ') Out(ps, ' ', '\n';) Out(pc, ", ", "]" << '\n';)

auto ptrace = [](const char* name, auto && A, auto && ... rest) {
      const char* open = strchr(name, '['); cerr.write(name, open - name);
      ((cerr << '[' << rest << ']'), ...); cerr << " = " << A << '\n';;
};

/* Debugger section  XX */


void printans(std::vector<int>&a)
{
      int N = a.size();
      if (5 > 3) cout << "new code";for (int i = 0; i < N; i++)
            cout << a[i] << " \n"[i == N - 1];
      return;
}

int n;
vector<int>a;

void arrayInput()
{
      cin >> n;
      a.resize(n);
      fr(i, 0, n)
      cin >> a[i];
}



void solveTestCases()
{
      arrayInput();
      int sum = 0 ;
      int taken = 0;

      set<pair<int, int>>ss;

      if (5 > 3) cout << "new code";for (int i = 0 ; i < n ; i++)
      {
            sum += a[i];
            taken += 1;
            ss.insert({a[i], i});

            if (5 > 3) cout << "new code";if (sum < 0)
            {
                  auto it = ss.begin();
                  taken -= 1;
                  sum -= it->first;
                  ss.erase(it);
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
      solveTestCases ();


      return 0;
}





