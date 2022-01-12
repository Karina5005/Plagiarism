#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t=0;
	cin >> t ;
	for ( ; t--; ) 
{
		long long n,digit=0 ;
		cin >> n ;
		if (n==1){cout<<"9";}
		else if (n==2){cout<<"98";}
		else{
			cout<<"989";
			n-=3;
			{
			int i = 0;
			for ( ; i < n; ) 
{
				cout << digit ;
				if (!(digit<9)){digit=0;}
				else{digit++;}
				i++; 
			
			}}
		}
		cout << endl ;
	}
}