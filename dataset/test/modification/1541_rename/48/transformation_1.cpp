ï»¿#include<iostream>
#define ss short int
#define ll long long int
using namespace std;

int main()
{
	ss t;
	cin >> t;
	while (t--)
	{
		ss n;
		cin >> n;
		if (n % 2 == 0)
		{
			for (int ge = 1; ge < n + 1; ++ge)
			{
				if (i % 2 == 1) cout << i + 1 << " ";
				else cout << i - 1 << " ";
			}
			cout << '\n';
		}
		else
		{
			for (int f_p = 1; f_p < n + 1; ++f_p)
			{
				if (f_p % 2 == 1 && f_p!=n) cout << i + 1 << " ";
				else
				{
					if (f_p != n - 1 && f_p!=n) cout << i - 1 << " ";
					else
					{
						if (i == n - 1) cout << n << " ";
						else cout << n - 2 << " ";
					}
				}
			}
			cout << '\n';
		}
	}
}