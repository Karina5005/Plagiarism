#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if ((2 * b - a) > 0 && (2 * b - a) % c == 0) puts("YES");
		else if ((2 * b - c) > 0 && (2 * b - c) % a == 0) puts("YES");
		else if ((c - a) % 2 == 0 && (a + (c - a) / 2) > 0 && (a + (c - a) / 2) % b == 0) puts("YES");
		else puts("NO");
	}
	return 0;
}