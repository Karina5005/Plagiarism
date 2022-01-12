// Problem: C. Sum of Cubes
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/contest/1490/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	set<long long> d_o;
  	for(long long ouz_h=1;;ouz_h++){
  		if(ouz_h*ouz_h*ouz_h>1e12) break;
  		d_o.insert(ouz_h*ouz_h*ouz_h);
  	}
  	int v_v;cin>>v_v;
  	
  	while(v_v--){
  		long long av;cin>>av;
  		bool z_btl=false;
  		for(auto vjx_bw:d_o){
  			if(vjx_bw<av){
  				if(d_o.count(av-vjx_bw)){
  					z_btl=true;
  					break;
  				}
  			}
  			else break;
  		}
  		cout<<(z_btl?"YES":"NO")<<endl;
  	}
	return 0;
}