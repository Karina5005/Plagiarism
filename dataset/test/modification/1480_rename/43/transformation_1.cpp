
#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int agc;
	cin >> agc;

	while (agc--)
	{
		string uep_xjt;
		cin >> uep_xjt;

		for (int j_j = 0 ; j_j < int(uep_xjt.size()) ; j_j++)
		{
			if (j_j % 2 == 0)
			{
				if (uep_xjt[j_j] != 'a')
					uep_xjt[j_j] = 'a';

				else
					uep_xjt[j_j] = 'b';
			}
			else
			{
				if (uep_xjt[j_j] != 'z')
					uep_xjt[j_j] = 'z';

				else
					uep_xjt[j_j] = 'y';
			}
		}

		cout << uep_xjt << endl;
	}

	return 0;
}