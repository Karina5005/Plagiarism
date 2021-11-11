#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define MOD2 998244353

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

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(unordered_map <T, V> v);

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



vector<pair<int, int>> getF(int n)
{
	vector<pair<int, int>> factors;
	for (int i = 1; i * i <= n; i++)
	/* 'for' inside */
	{
		/* 'if' begin */
		if (n % i == 0)
		/* 'if' inside */
		{
			/* 'if' begin */
			if (i != n / i)
				/* 'if' inside */
				factors.push_back({i, n / i});
		}
	}
	return factors;
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
		vector<int> nums(n + 1);
		unordered_map<int, int> index;
		for (int i = 1; i <= n; i++)
		/* 'for' inside */
		{
			cin >> nums[i];
			index[nums[i]] = i;
		}

		int ans = 0;
		for (int i = 3; i <= 2 * n - 1; i++)
		/* 'for' inside */
		{
			vector<pair<int, int>> factors = getF(i);
			for (auto [a, b] : factors)
			{
				/* 'if' begin */
				if (index.find(a) == index.end() || index.find(b) == index.end())
					/* 'if' inside */
					continue;
				debug(a);
				debug(b);
				/* 'if' begin */
				if (index[a] + index[b] == i)
					/* 'if' inside */
					ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}