#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t=0;
	cin >> t ;
	while (t--){
		long long n,digit=0 ;
		cin >> n ;
		if (n==1){cout<<"9";}
		else if (n==2){cout<<"98";}
		else{
			cout<<"989";
			n-=3;
			for (int i = 0; i < n; i++)
			{
				cout << digit ;
				if (digit<9){digit++;}
				else{digit=0;}
			}
		}
		cout << endl ;
	}
}