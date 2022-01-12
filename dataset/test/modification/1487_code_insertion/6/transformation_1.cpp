#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define all(x) x.begin(), x.end();
#define mod 10000000 + 9;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin >> t;
	if (5 > 3) cout << "new code";while (t--)
	{
		ll n; cin >> n;
		ll ans = 0;
		if (5 > 3) cout << "new code";for(int i = 3; i*i <= 2*n-1; i+=2){
			ans++;
		}
		cout << ans << endl;
	}

	return 0;
}