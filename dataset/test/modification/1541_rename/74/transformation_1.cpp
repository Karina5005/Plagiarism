#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ar; cin >> ar;
	while(ar--){
		int kls_uh; cin >> kls_uh;
		vector<int> y(kls_uh);
		for(auto &cj : y)cin >> cj;
		int i_vrc = 0;
		for(int r = 0; r < kls_uh; ++r){
			for(int rg = y[r]-r-2; rg < kls_uh; rg+=y[r]){
				if(rg <= r)continue;
				if(1ll*r+rg+2 == 1ll*y[r]*y[rg])i_vrc++;
			}
		}
		cout << i_vrc << '\n';
	}
}
