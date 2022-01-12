#include <bits/stdc++.h>
using namespace std;

void ew_tgu(){
	int rx,dvl_y,m;cin>>rx>>dvl_y>>m;

	if ((dvl_y-1)+(rx-1)*dvl_y ==m){
		cout<<"YES"<<"\n";
	} else{
		cout<<"NO"<<"\n";
	}
	//cout<<(b-1)+(a-1)*b<<"\n";
	return;
}
int main(){
	int oa_m; cin>>oa_m;

	for (int qqo=0; qqo<oa_m; qqo++){
		ew_tgu();
	}
	return 0;
}