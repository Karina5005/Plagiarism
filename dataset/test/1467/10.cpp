#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t, n, x;
	cin >> t;
	while (t--)
	{
		cin >> n;
		string s = "989";
		if (n <= 3)
		{
			cout << s.substr(0, n) << endl;
		}
		else
		{
			cout << s;
			for (int i = 3; i < n; i++)
			{
				cout << (i - 3) % 10;
			}
			cout << endl;
		}
	}
}
