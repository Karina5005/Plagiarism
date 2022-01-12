#include<iostream>
using namespace std;
int main() {
	string s;
	int n;
	bool ch = true;
	cin >> n;
	while (n--) {
		cin >> s;
		ch = true;
		if (s.length() % 2 == 0) {
			for (int i = 0; i < s.length()/2; i++) {
				if (s[i] != s[s.length() / 2 +i])
					ch = false;
			}
		}
		else {
			ch = false;
		}
		cout << (ch ? "YES" : "NO") << endl;
	}

}