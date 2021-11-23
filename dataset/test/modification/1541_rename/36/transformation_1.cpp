#include <bits/stdc++.h>
using namespace std;

int main () {
	int fve;
	cin >> fve;

	for (int cd_v = 0; cd_v < fve; cd_v++) {
		int exe_mj;
		cin >> exe_mj;
		if (exe_mj % 2 == 0) {
			for (int cp = 0; cp < exe_mj / 2; cp++) {
				cout<<2*cp + 2<<" "<<2*cp + 1<<" ";
			}
			cout<<endl;
		 } else {
		 	if (exe_mj == 1){
				cout<<1<<endl;
			}
			cout<< "3 1 2 ";

			for (int z_yg = 2; z_yg <= exe_mj/2; z_yg++) {
				cout<<2*z_yg + 1<<" "<<2*z_yg<<" ";
			}
			cout<<endl;
		 }
	}

	return 0;	
}
