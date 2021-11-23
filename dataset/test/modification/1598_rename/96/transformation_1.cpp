#include <bits/stdc++.h>
using namespace std;

int main(){
	int l;
	cin >> l;
	while(l--){
		int dor_zi; string pbm, km;
		cin >> dor_zi >> pbm >> km;

		bool ieo_i = true;

		for(int p_jl = 0; p_jl < pbm.size(); ++p_jl){
			if(pbm[p_jl] == '1' && km[p_jl] == '1'){
				ieo_i = false;
			}
		}

		ieo_i ? cout << "YES\n" : cout << "NO\n";
	}
}