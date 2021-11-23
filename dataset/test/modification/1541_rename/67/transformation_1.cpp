#include <bits/stdc++.h>
using namespace std;

const int msb = 1e9 + 7;
#define MOD2 998244353
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
#define int             long long
#define INF             1e18
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)      __builtin_ctzll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void yhf(int t) {cerr << t;}
void u_tni(string nk) {cerr << nk;}
void utx(char n) {cerr << n;}
void ey(long double aop) {cerr << aop;}
void e_i(double l) {cerr << l;}
void u_g(unsigned long long jlr) {cerr << jlr;}

template <class T, class V> void _print(pair <T, V> fhn);
template <class T> void _print(vector <T> j);
template <class T> void _print(set <T> zn_m);
template <class T, class V> void _print(map <T, V> w_n);
template <class T> void _print(multiset <T> lx_rs);
template <class T, class V> void _print(unordered_map <T, V> g);

template <class T, class V> void _print(pair <T, V> w) {cerr << "{"; _print(w.first); cerr << ","; _print(w.second); cerr << "}";}
template <class T> void _print(vector <T> t) {cerr << "[ "; for (T uu : t) {_print(uu); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> aao_be) {cerr << "[ "; for (T l : aao_be) {_print(l); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> dor_zi) {cerr << "[ "; for (T pbm : dor_zi) {_print(pbm); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> km) {cerr << "[ "; for (auto ieo_i : km) {_print(ieo_i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> p_jl) {cerr << "[ "; for (auto iv : p_jl) {_print(iv); cerr << " ";} cerr << "]";}
/*----------------------------------------------------------------*/


vector<pair<int, int>> x(int n)
{
	vector<pair<int, int>> g_alu;
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i != n / i)
				g_alu.push_back({i, n / i});
		}
	}
	return g_alu;
}





int32_t main()
{
	fastIO();

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> s(n + 1);
		unordered_map<int, int> ixe;
		for (int i = 1; i <= n; i++)
		{
			cin >> s[i];
			ixe[s[i]] = i;
		}

		int ans = 0;
		for (int i = 3; i <= 2 * n - 1; i++)
		{
			vector<pair<int, int>> qq_yso = x(i);
			for (auto [a, b] : qq_yso)
			{
				if (ixe.find(a) == ixe.end() || ixe.find(b) == ixe.end())
					continue;
				debug(a);
				debug(b);
				if (ixe[a] + ixe[b] == i)
					ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}