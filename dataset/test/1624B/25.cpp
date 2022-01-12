#include <bits/stdc++.h>
typedef long long ll;
const int MAXN = 3e5 + 10;

int a, b, c;
void solved() {
	std::cin >> a >> b >> c;
	if (a <= 2 * b - c and (2 * b - c) % a == 0) {
		std::cout << "YES\n";
		return;
	}
	if ((a + c) % 2 == 0 and b <= (a + c) / 2 and ((a + c) / 2) % b == 0) {
		std::cout << "YES\n";
		return;
	}
	if (c <= 2 * b - a and (2 * b - a) % c == 0) {
		std::cout << "YES\n";
		return;
	}
	std::cout << "NO\n";
}

int main() {
    std::ios::sync_with_stdio(false), std::cin.tie(nullptr);
    int _; std::cin >> _; while (_--)
    solved();
}
