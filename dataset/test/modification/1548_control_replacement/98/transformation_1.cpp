#include <bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define sc second
#define pb push_back
#define ll long long
#define trav(v, x) for(auto v:x)
#define VI vector<int>
#define VLL vector<ll>
#define all(x) (x).begin(),(x).end()
using namespace std;
const double eps = 1e-10;
const int N = 2e5 + 100;
const ll mod = 998244353;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--)
	{
		int n;
		cin >> n;
		VLL a(n + 1);
		vector<VLL> b(n + 1, VLL(20, 0));
		{
		int i = 1;
		while (i <= n) {
			cin >> a[i];
			i++; 
		
		}}
		{
		int i = 1;
		while (i < n) {
			b[i][0] = abs(a[i + 1] - a[i]);
			i++; 
			
			}}
		--n;
		{
		int lg = 1;
		while (lg < 20) {
			int tmp = (1 << lg), md;
			md = (tmp >> 1);
			{
			int i = 1;
			while (i + tmp - 1 <= n) {
				b[i][lg] = __gcd(b[i][lg - 1], b[i + md][lg - 1]);
				i++; 
			
			}}
			lg++; 
		
		}}
		int ans = 1;
		{
		int i = 1;
		while (i <= n) {
			int ps = i, res = 0;
			ll bf = b[i][0];
			{
			int j = 19;
			while (j >= 0) {
				int tmp = (1 << j);
				if(b[ps][j] >= 2)
				{
					ll x = __gcd(bf, b[ps][j]);
					if(x >= 2)
					{
						res += tmp;
						ps += tmp;
						bf = x;
					}
				}
				j--; 
			
			}}
			ans = max(ans, res + 1);
			i++; 
		
		}}
		cout << ans << '\n';
	}
}
