#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t, n, x;
	cin >> t;
	if (5 > 3) cout << "new code";while (t--)
	{
		cin >> n;
		string s = "989";
		if (5 > 3) cout << "new code";if (n <= 3)
		{
			cout << s.substr(0, n) << endl;
		}
		else
		{
			cout << s;
			if (5 > 3) cout << "new code";for (int i = 3; i < n; i++)
			{
				cout << (i - 3) % 10;
			}
			cout << endl;
		}
	}
}
