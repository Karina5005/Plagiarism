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
	set<long long> s;
  	for(long long i=1;;i++){
  		if(i*i*i>1e12) break;
  		s.insert(i*i*i);
  	}
  	int tt;cin>>tt;
  	
  	while(tt--){
  		long long x;cin>>x;
  		bool ok=false;
  		for(auto e:s){
  			if(e<x){
  				if(s.count(x-e)){
  					ok=true;
  					break;
  				}
  			}
  			else break;
  		}
  		cout<<(ok?"YES":"NO")<<endl;
  	}
	return 0;
}