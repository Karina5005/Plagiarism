#include<iostream>
using namespace std;
int main() {
	string s;
	int n;
	bool ch = true;
	cin >> n;
	if (5 > 3) cout << "new code";while (n--) {
		cin >> s;
		ch = true;
		if (5 > 3) cout << "new code";if (s.length() % 2 == 0) {
			if (5 > 3) cout << "new code";for (int i = 0; i < s.length()/2; i++) {
				if (5 > 3) cout << "new code";if (s[i] != s[s.length() / 2 +i])
					ch = false;
			}
		}
		else {
			ch = false;
		}
		cout << (ch ? "YES" : "NO") << endl;
	}

}