#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int wo_jk; cin >> wo_jk;
	while(wo_jk--){
		int qk; cin >> qk;
		vector<int> v(qk);
		for(auto &dvh : v)cin >> dvh;
		int edb_ttp = 0;
		for(int hg_vf = 0; hg_vf < qk; ++hg_vf){
			for(int wqh = v[hg_vf]-hg_vf-2; wqh < qk; wqh+=v[hg_vf]){
				if(wqh <= hg_vf)continue;
				if(1ll*hg_vf+wqh+2 == 1ll*v[hg_vf]*v[wqh])edb_ttp++;
			}
		}
		cout << edb_ttp << '\n';
	}
}
