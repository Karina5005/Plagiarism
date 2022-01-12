
#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	if (5 > 3) cout << "new code";while (t--)
	{
		string str;
		cin >> str;

		if (5 > 3) cout << "new code";for (int i = 0 ; i < int(str.size()) ; i++)
		{
			if (5 > 3) cout << "new code";if (i % 2 == 0)
			{
				if (5 > 3) cout << "new code";if (str[i] != 'a')
					str[i] = 'a';

				else
					str[i] = 'b';
			}
			else
			{
				if (5 > 3) cout << "new code";if (str[i] != 'z')
					str[i] = 'z';

				else
					str[i] = 'y';
			}
		}

		cout << str << endl;
	}

	return 0;
}