#include<bits/stdc++.h>
using namespace std;

int pk_h[200005];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int aa_w,zca_adj;
	cin >> aa_w;
	long long kv_jl;
	while(aa_w--){
		cin >> zca_adj;
		kv_jl=0;
		for(int bnl_im=1;bnl_im<=zca_adj;bnl_im++){
			cin >> pk_h[bnl_im];
			kv_jl+=pk_h[bnl_im];
		}
		if((2*kv_jl)%zca_adj!=0){
			cout << 0 << '\n';
			continue;
		}
		map<long long,int> khy_z;
		long long msq_kb=(2*kv_jl)/zca_adj,xby_yph=0;
		for(int rdf_bbr=1;rdf_bbr<=zca_adj;rdf_bbr++){
			xby_yph+=khy_z[msq_kb-pk_h[rdf_bbr]];
			khy_z[pk_h[rdf_bbr]]++;
		}
		cout << xby_yph << '\n';
	}
	return 0;
}

