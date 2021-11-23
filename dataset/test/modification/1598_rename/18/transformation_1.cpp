#include<bits/stdc++.h>
using namespace std;
int main(){
	int csy;cin>>csy;
	while(csy--){
		int od;cin>>od;
		long long nos=0;
		vector<long long> s(od);
		for(auto& qsx:s){
			cin>>qsx;nos+=qsx;qsx*=od;
		}
		map<long long,int> qqn_wuf;
		long long no_xo=0;
		for(auto& ce_ipp:s){
			no_xo+=qqn_wuf[nos-ce_ipp];
			qqn_wuf[ce_ipp-nos]++;
		}
		cout<<no_xo<<'\n';
	}
}