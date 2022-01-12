#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t, n, x;
	cin >> t;
	for ( ; t--; ) 
{
		cin >> n;
		string s = "989";
		if (!(n <= 3))
		{
			cout << s;
			{
			int i = 3;
			for ( ; i < n; ) 
{
				cout << (i - 3) % 10;
				i++; 
			
			}}
			cout << endl;
		}
		else
		{
			cout << s.substr(0, n) << endl;
		}
	}
}
