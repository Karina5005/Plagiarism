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
			for (int i = 1; i < n + 1; ++i)
			{
				if (i % 2 == 1) cout << i + 1 << " ";
				else cout << i - 1 << " ";
			}
			cout << '\n';
		}
		else
		{
			for (int i = 1; i < n + 1; ++i)
			{
				if (i % 2 == 1 && i!=n) cout << i + 1 << " ";
				else
				{
					if (i != n - 1 && i!=n) cout << i - 1 << " ";
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