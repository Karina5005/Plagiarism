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
		/* 'if' begin */
		if (s.length() % 2 == 0) /* 'if' inside */
		{
			for (int i = 0; i < s.length()/2; i++) /* 'for' inside */
			{
				/* 'if' begin */
				if (s[i] != s[s.length() / 2 +i])
					/* 'if' inside */
					ch = false;
			}
		}
		else {
			ch = false;
		}
		cout << (ch ? "YES" : "NO") << endl;
	}

}