#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for ( ; t--; ) 
{
		int n;
		cin>> n;
		bool res=false;
		{
		int i=0;
		for ( ; i<11; ) 
{
			if(n>=111*i&&(n-111*i)%11==0){
				res=true;
				break;
			}
			i++; 
		
		}}
		cout << (res?"YES":"NO") << "\n";
	}
}
