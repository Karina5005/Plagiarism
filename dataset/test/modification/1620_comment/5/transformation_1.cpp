#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
signed main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (char c : s) {
			/* 'if' begin */
			if (c == 'N') /* 'if' inside */
			cnt++;
		}
		cout << (cnt == 1 ? "No" : "Yes") << endl;
	}
} 