#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for ( ; t--; ) 
{
		int col; string r1, r2;
		cin >> col >> r1 >> r2;

		bool safe = true;

		{
		int i = 0;
		for ( ; i < r1.size(); ) 
{
			if(r1[i] == '1' && r2[i] == '1'){
				safe = false;
			}
			++i; 
		
		}}

		safe ? cout << "YES\n" : cout << "NO\n";
	}
}