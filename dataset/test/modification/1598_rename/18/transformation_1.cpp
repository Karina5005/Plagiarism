#include<bits/stdc++.h>
using namespace std;
int main(){
	int i_bkq;cin>>i_bkq;
	while(i_bkq--){
		int v_o;cin>>v_o;
		long long o=0;
		vector<long long> rjr(v_o);
		for(auto& z:rjr){
			cin>>z;o+=z;z*=v_o;
		}
		map<long long,int> s_udi;
		long long tdx_v=0;
		for(auto& pi_d:rjr){
			tdx_v+=s_udi[o-pi_d];
			s_udi[pi_d-o]++;
		}
		cout<<tdx_v<<'\n';
	}
}