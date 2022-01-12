#include <iomanip>
#include <iostream>
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
	
  	cin.tie(0);
	set<long long> s;
  	{
  	long long i=1;
  	for ( ; 1; ) 
{
  		if(i*i*i>1e12) break;
  		s.insert(i*i*i);
  		i++; 
  	
  	}}
  	int tt;cin>>tt;
  	
  	for ( ; tt--; ) 
{
  		long long x;cin>>x;
  		bool ok=false;
  		for(auto e:s){
  			if(!(e<x))break;
  			else {
  				if(s.count(x-e)){
  					ok=true;
  					break;
  				}
  			}
  		}
  		cout<<(ok?"YES":"NO")<<endl;
  	}
	return 0;
}