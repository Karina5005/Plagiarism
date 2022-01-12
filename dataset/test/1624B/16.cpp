#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		if ( (a + c) % 2 == 0 && ((a + c) / 2)  % b == 0)
			cout << "YES\n";
		else if (c > b && (b - (c - b)) > 0 && (b - (c - b)) % a == 0)
			cout << "YES\n";
		else if (c < b && (b + (b - c)) > 0  && (b + b - c) % a == 0)
			cout << "YES\n";
		else if (a > b && (b - (a - b)) > 0 && (b - (a - b)) % c == 0)
			cout << "YES\n";
		else if (a < b && (b + (b - a)) > 0 && (b + (b - a)) % c == 0)
			cout << "YES\n";
		else if (a == b && b % c == 0)
			cout << "YES\n";
		else if (a == c && c % b == 0)
			cout << "YES\n";
		else if (c == b && b % a == 0)
			cout << "YES\n";
		else if (a == b && b == c)
			cout << "YES\n";
		else
			cout << "NO\n";
	}




}