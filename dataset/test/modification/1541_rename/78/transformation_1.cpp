#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	int d_o;
	cin >> d_o;
	for (int ouz_h=0;ouz_h<d_o;ouz_h++) {
		int v_v;
		cin >> v_v;
		if (v_v%2==0) {
			for (int av=2;av<=v_v;av=av+2) {
				cout << av << " " << av - 1 << " ";
			}
			cout << endl;
		}
		else {
			cout << 3 << " " << 1 << " " << 2 << " ";
			for (int z_btl = 5; z_btl <= v_v; z_btl = z_btl + 2) {
				cout << z_btl << " " << z_btl - 1 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

