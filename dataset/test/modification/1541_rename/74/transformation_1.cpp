#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ai; cin >> ai;
	while(ai--){
		int ddk; cin >> ddk;
		vector<int> j(ddk);
		for(auto &sdd_oyq : j)cin >> sdd_oyq;
		int tj_ccb = 0;
		for(int y = 0; y < ddk; ++y){
			for(int pub_be = j[y]-y-2; pub_be < ddk; pub_be+=j[y]){
				if(pub_be <= y)continue;
				if(1ll*y+pub_be+2 == 1ll*j[y]*j[pub_be])tj_ccb++;
			}
		}
		cout << tj_ccb << '\n';
	}
}
