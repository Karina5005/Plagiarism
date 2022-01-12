#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int lx_z=0;
	cin >> lx_z ;
	while (lx_z--){
		long long ka,sr_dg=0 ;
		cin >> ka ;
		if (ka==1){cout<<"9";}
		else if (ka==2){cout<<"98";}
		else{
			cout<<"989";
			ka-=3;
			for (int rts = 0; rts < ka; rts++)
			{
				cout << sr_dg ;
				if (sr_dg<9){sr_dg++;}
				else{sr_dg=0;}
			}
		}
		cout << endl ;
	}
}