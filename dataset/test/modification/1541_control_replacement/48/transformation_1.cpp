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
			{
			int i = 1;
			while (i < n + 1) {
				if (i % 2 == 1) cout << i + 1 << " ";
				else cout << i - 1 << " ";
				++i; 
			
			}}
			cout << '\n';
		}
		else
		{
			{
			int i = 1;
			while (i < n + 1) {
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
				++i; 
			
			}}
			cout << '\n';
		}
	}
}