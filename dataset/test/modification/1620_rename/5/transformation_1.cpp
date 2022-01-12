#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
signed main() {
	int mmd;
	cin >> mmd;
	while (mmd--) {
		string ue_mfc;
		cin >> ue_mfc;
		int kp = 0;
		for (char is : ue_mfc) {
			if (is == 'N') kp++;
		}
		cout << (kp == 1 ? "No" : "Yes") << endl;
	}
} 