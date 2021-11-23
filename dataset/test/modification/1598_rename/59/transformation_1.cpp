#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int nqw;
	    cin>>nqw;
	    string cai_mbx,kr;
	    cin>>cai_mbx>>kr;
	    bool axi_ijb=true;
	    for(int wuo_o=0;wuo_o<nqw;wuo_o++){
	        if(cai_mbx[wuo_o]=='0' || kr[wuo_o]=='0'){
	            axi_ijb=true;
	        }else{
	            axi_ijb=false;
	            break;
	        }
	    }
	    if(axi_ijb){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}