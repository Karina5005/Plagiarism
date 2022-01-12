#include<bits/stdc++.h>
using namespace std;
string axi_ijb="989";
string wuo_o="0123456789";
int main(){
	for(int vom=0;vom<15;vom++)wuo_o+=wuo_o;
	axi_ijb+=wuo_o;
	int atn_s,g_fth;
	cin>>atn_s;
	while(atn_s--){
		cin>>g_fth;
		for(int dgz=0;dgz<=g_fth;dgz++) printf("%c",dgz==g_fth?'\n':axi_ijb[dgz]);
	}
	return 0;
}

 	  	  				   		  	 				 			