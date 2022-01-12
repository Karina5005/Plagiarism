#include <bits/stdc++.h>
using namespace std;

int main(){
	int y;
	cin >> y;
	while(y--){
		int p; string dw, r;
		cin >> p >> dw >> r;

		bool vep_y = true;

		for(int v_n = 0; v_n < dw.size(); ++v_n){
			if(dw[v_n] == '1' && r[v_n] == '1'){
				vep_y = false;
			}
		}

		vep_y ? cout << "YES\n" : cout << "NO\n";
	}
}