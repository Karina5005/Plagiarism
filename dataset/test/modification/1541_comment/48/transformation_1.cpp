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
		/* 'if' begin */
		if (n % 2 == 0)
		/* 'if' inside */
		{
			for (int i = 1; i < n + 1; ++i)
			/* 'for' inside */
			{
				if (i % 2 == 1) cout << i + 1 << " ";
				else cout << i - 1 << " ";
			}
			cout << '\n';
		}
		else
		{
			for (int i = 1; i < n + 1; ++i)
			/* 'for' inside */
			{
				/* 'if' begin */
				if (i % 2 == 1 && i!=n) /* 'if' inside */
				cout << i + 1 << " ";
				else
				{
					/* 'if' begin */
					if (i != n - 1 && i!=n) /* 'if' inside */
					cout << i - 1 << " ";
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