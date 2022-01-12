#include<bits/stdc++.h>
using namespace std;
int main(){
	int pi_d;
	cin>>pi_d;
	while(pi_d--){
		int mav_iz,z, lo_ym;
		cin>>mav_iz>>z>>lo_ym;
		if(z<mav_iz)
                swap(mav_iz,z);
		puts((z+lo_ym)/(lo_ym+1)<=mav_iz?"YES":"NO");
	}
}