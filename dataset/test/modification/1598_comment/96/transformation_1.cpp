#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int col; string r1, r2;
		cin >> col >> r1 >> r2;

		bool safe = true;

		for(int i = 0; i < r1.size(); ++i)/* 'for' inside */
		{
			/* 'if' begin */
			if(r1[i] == '1' && r2[i] == '1')/* 'if' inside */
			{
				safe = false;
			}
		}

		safe ? cout << "YES\n" : cout << "NO\n";
	}
}