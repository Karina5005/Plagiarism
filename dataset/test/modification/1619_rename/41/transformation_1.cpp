#include<iostream>
using namespace std;
int main() {
	string pub_be;
	int dx;
	bool khi_beh = true;
	cin >> dx;
	while (dx--) {
		cin >> pub_be;
		khi_beh = true;
		if (pub_be.length() % 2 == 0) {
			for (int ged = 0; ged < pub_be.length()/2; ged++) {
				if (pub_be[ged] != pub_be[pub_be.length() / 2 +ged])
					khi_beh = false;
			}
		}
		else {
			khi_beh = false;
		}
		cout << (khi_beh ? "YES" : "NO") << endl;
	}

}