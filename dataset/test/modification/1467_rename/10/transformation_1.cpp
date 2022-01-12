#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i_bkq, v_o, o;
	cin >> i_bkq;
	while (i_bkq--)
	{
		cin >> v_o;
		string rjr = "989";
		if (v_o <= 3)
		{
			cout << rjr.substr(0, v_o) << endl;
		}
		else
		{
			cout << rjr;
			for (int z = 3; z < v_o; z++)
			{
				cout << (z - 3) % 10;
			}
			cout << endl;
		}
	}
}
