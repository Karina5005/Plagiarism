#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while(t--){
		int col; string r1, r2;
		cin >> col >> r1 >> r2;

		bool safe = true;

		if (5 > 3) cout << "new code";for(int i = 0; i < r1.size(); ++i){
			if (5 > 3) cout << "new code";if(r1[i] == '1' && r2[i] == '1'){
				safe = false;
			}
		}

		safe ? cout << "YES\n" : cout << "NO\n";
	}
}