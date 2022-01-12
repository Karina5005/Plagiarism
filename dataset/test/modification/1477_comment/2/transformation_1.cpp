#include <bits/stdc++.h>

using namespace std;

void setI(string name)
{
    freopen((name + ".in").c_str(), "r", stdin);
}

void setO(string name)
{
    freopen((name + ".out").c_str(), "w", stdout);
}

#define IOS ios::sync_with_stdio(false), cin.tie(NULL)

#define ff first
#define ss second
#define ef emplace_front
#define eb emplace_back
#define pf pop_front
#define pb pop_back
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define FI(idx, start, end) for (ll idx{(start)}; idx <= (end); ++idx)
#define FD(idx, start, end) for (ll idx{(start)}; idx >= (end); --idx)

typedef long long ll;
typedef long double ld;

const ld EPS = 1e-9;
const ld PIE = asin(1) * 2;
const ll MAX = 100'000 + 1;
const ll MOD = 1'000'000'007;


template <typename NUMERICAL_TYPE>
NUMERICAL_TYPE GCD(NUMERICAL_TYPE X, NUMERICAL_TYPE Y)
{
    if (X == 0)
    {
        return Y;
    }
    return GCD(Y % X, X);
}
 
template <typename NUMERICAL_TYPE>
NUMERICAL_TYPE LCM(NUMERICAL_TYPE X, NUMERICAL_TYPE Y)
{
    return (1LL * X * Y) / GCD(X, Y);
}


void solve_test_case()
{
	  ll n, k;
	  cin >> n >> k;
	  
	  vector<ll> a(n);
	  for (ll &ai : a)
	  {
	  	cin >> ai;
	  }
	  sort(all(a));
	  
	  ll common_divisor = 0;
	  for (ll ai : a)
	  {
	  	common_divisor = GCD(common_divisor, ai - a.front());
	  }
	  
	  cout << ((k - a.front()) % common_divisor == 0 ? "YES" : "NO") << "\n";
    return;
}


int main()
{
	  IOS;

    

    int number_of_test_cases = 1;
    cin >> number_of_test_cases;

    

    for (int test_case_number = 1; test_case_number <= number_of_test_cases; ++test_case_number)
    {
        
        solve_test_case();
    }

    return 0;
}
