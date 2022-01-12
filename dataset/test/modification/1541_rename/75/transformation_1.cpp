#include<bits/stdc++.h>

using namespace std;

int main(){
	int e; cin >> e;
	while(e--){
		int t_rf; cin >> t_rf;
		vector<int> dor_tkw(t_rf);
		for(auto &z_w : dor_tkw)cin >> z_w;
		int wwk_ras = 0;
		for(int du_v = 0; du_v < t_rf; ++du_v){
			for(int s = dor_tkw[du_v]-du_v-2; s < t_rf; s+=dor_tkw[du_v]){
				if(s <= du_v)continue;
				if(1ll*du_v+s+2 == 1ll*dor_tkw[du_v]*dor_tkw[s])wwk_ras++;
			}
		}
		cout << wwk_ras << '\n';
	}
}
