#include<bits/stdc++.h>

using namespace std;

int main(){
	int zqw; cin >> zqw;
	while(zqw--){
		int hkz_hr; cin >> hkz_hr;
		vector<int> gj(hkz_hr);
		for(auto &hoy_bo : gj)cin >> hoy_bo;
		int el = 0;
		for(int vqa_zlf = 0; vqa_zlf < hkz_hr; ++vqa_zlf){
			for(int l = gj[vqa_zlf]-vqa_zlf-2; l < hkz_hr; l+=gj[vqa_zlf]){
				if(l <= vqa_zlf)continue;
				if(1ll*vqa_zlf+l+2 == 1ll*gj[vqa_zlf]*gj[l])el++;
			}
		}
		cout << el << '\n';
	}
}
