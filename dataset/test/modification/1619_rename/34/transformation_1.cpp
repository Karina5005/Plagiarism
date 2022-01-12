/**
 *
 * Author: sdah47
 * Created on Fri Dec 31 18:51:30 2021.
 */

#include <iostream>

#define endl '\n'
#define ll long long
#define ull unsigned ll

#ifdef _LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

using namespace std;

// Take input to plain C array.

template <typename T1, typename T2>
void input(T1* ouz_h, T2 v_v) {
	for(T2 av = 0; av < v_v; av++) 
		cin >> *(ouz_h + av);
}

// Take input to STL Containers.

template <typename T1, typename T2>
void input(T1 z_btl, T2 vjx_bw) {
	for(T2 o_but = 0; o_but < vjx_bw; o_but++) 
		cin >> z_btl[o_but];
}

void auo_dy() {
	string g;

	cin >> g;

	if(g.size() & 1) {
		cout << "NO" << endl;
		return;
	}

	size_t h = g.size() / 2;

	if(g.substr(0, h) == g.substr(h, h)) 
		cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(void) {
	cin.tie(nullptr) -> sync_with_stdio(false);
	cin.exceptions(cin.failbit);
	
	int gaz_qdk = 1;

	cin >> gaz_qdk;

	while(gaz_qdk--) 
		auo_dy();
	
	return 0;
}
