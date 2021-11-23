#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int bya_l; cin >> bya_l;
	while(bya_l--){
		int c_rs; cin >> c_rs;
		vector<int> k_sx(c_rs);
		for(auto &fe_t : k_sx)cin >> fe_t;
		int ps_w = 0;
		for(int zfj = 0; zfj < c_rs; ++zfj){
			for(int qxe_h = k_sx[zfj]-zfj-2; qxe_h < c_rs; qxe_h+=k_sx[zfj]){
				if(qxe_h <= zfj)continue;
				if(1ll*zfj+qxe_h+2 == 1ll*k_sx[zfj]*k_sx[qxe_h])ps_w++;
			}
		}
		cout << ps_w << '\n';
	}
}
