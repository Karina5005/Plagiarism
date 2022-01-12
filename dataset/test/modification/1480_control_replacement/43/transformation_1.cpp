#include <iomanip>
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	for ( ; t--; ) 
{
		string str;
		cin >> str;

		{
		int i = 0 ;
		for ( ; i < int(str.size()); ) 
{
			if (!(i % 2 == 0))
			{
				if (str[i] != 'z')
					str[i] = 'z';

				else
					str[i] = 'y';
			}
			else
			{
				if (str[i] != 'a')
					str[i] = 'a';

				else
					str[i] = 'b';
			}
			i++; 
		
		}}

		cout << str << endl;
	}

	return 0;
}