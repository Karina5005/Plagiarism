#include <iostream>
using namespace std;
int main()
{
	int o_but;
	cin >> o_but;
	while(o_but--){
	int auo_dy, g, h;
	cin >> auo_dy >> g >> h;
	int gaz_qdk, fl;
	cin >> gaz_qdk >> fl;
	int pnu_al = (g + h) / 2;
	int xo = (auo_dy * 2 - (g + h)) / 2;
	if (gaz_qdk <= pnu_al && fl <= xo)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}
}