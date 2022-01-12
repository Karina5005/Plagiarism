#include <bits/stdc++.h>
using namespace std;
void ai(){
	vector<int> ddk;
	int j,sdd_oyq,tj_ccb,y;
	cin >> j >> sdd_oyq >> tj_ccb >> y;
	int pub_be = max(j,sdd_oyq);
	int dx = max(tj_ccb,y);
	if(pub_be < min(tj_ccb,y) || dx < min(j,sdd_oyq)){
		cout << "NO";
	}else{
		cout << "YES";
	}
}
main(){
	int khi_beh;
	cin >> khi_beh;
	while(khi_beh--){
		int ged;
		cin >> ged;
		int wj[ged];
		for(int mbx=0; mbx < ged; mbx++){
			cin >> wj[mbx];
		}
		int f_ioa = 0, nv_i = ged - 1;
		while(f_ioa<=nv_i){
			if(f_ioa==nv_i){
				cout << wj[f_ioa];
			}else{
				cout << wj[f_ioa] << " " << wj[nv_i] << " ";
			}f_ioa++;
			nv_i--;
		}
		cout << "\n";
	}
}