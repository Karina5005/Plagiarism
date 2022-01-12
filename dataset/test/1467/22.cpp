#include<bits/stdc++.h>
using namespace std;
string str="989";
string s="0123456789";
int main(){
	for(int i=0;i<15;i++)s+=s;
	str+=s;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<=n;i++) printf("%c",i==n?'\n':str[i]);
	}
	return 0;
}

 	  	  				   		  	 				 			