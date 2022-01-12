#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	int w, b;
	cin >> w >> b;
	int max_white = (k1 + k2) / 2;
	int max_black = (n * 2 - (k1 + k2)) / 2;
	if (w <= max_white && b <= max_black)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}
}