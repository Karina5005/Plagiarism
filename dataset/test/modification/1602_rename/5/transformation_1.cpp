#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
	int h_rc;
	cin>>h_rc;
	while(h_rc--){
		string xfi_e;
		cin>>xfi_e;
		auto st_puc=min_element(xfi_e.begin(),xfi_e.end());
		cout<<(*st_puc)<<" ";
		xfi_e.erase(st_puc);
			cout<<xfi_e;
		
		cout<<endl;
		}
	}




