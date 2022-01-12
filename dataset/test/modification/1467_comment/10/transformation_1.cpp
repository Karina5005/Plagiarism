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
		/* 'if' begin */
		if (n <= 3)
		/* 'if' inside */
		{
			cout << s.substr(0, n) << endl;
		}
		else
		{
			cout << s;
			for (int i = 3; i < n; i++)
			/* 'for' inside */
			{
				cout << (i - 3) % 10;
			}
			cout << endl;
		}
	}
}
