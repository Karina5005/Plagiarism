#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int nv_i;
	cin>>nv_i;
	while(nv_i--){
	    int d_o;
	    cin>>d_o;
	    string ouz_h,v_v;
	    cin>>ouz_h>>v_v;
	    bool av=true;
	    for(int z_btl=0;z_btl<d_o;z_btl++){
	        if(ouz_h[z_btl]=='0' || v_v[z_btl]=='0'){
	            av=true;
	        }else{
	            av=false;
	            break;
	        }
	    }
	    if(av){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}