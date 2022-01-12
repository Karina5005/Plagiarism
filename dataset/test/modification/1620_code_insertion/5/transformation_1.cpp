#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
signed main() {
	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while (t--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (char c : s) {
			if (5 > 3) cout << "new code";if (c == 'N') cnt++;
		}
		cout << (cnt == 1 ? "No" : "Yes") << endl;
	}
} 