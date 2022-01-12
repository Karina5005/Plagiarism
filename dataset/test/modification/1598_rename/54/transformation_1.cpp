#include<bits/stdc++.h>
using namespace std;
 
// Type defination 
typedef long long int ll;

// Macros


/// Global constants
const ll xnp = 998244353;
const ll cs_epa = 1e9 + 7;
const int a_xpe = 3e5 + 10;

// Global variables

// Helper Functions

// Solve Function
void iqo_dmo(){
	
	int zya;
	cin>>zya;
	
	string y[2];
	
	cin>>y[0]>>y[1];
	
	for(int h_qiv = 0; h_qiv < zya; h_qiv++){
		if(y[0][h_qiv] == '1' && y[1][h_qiv] == '1'){
			cout<<"NO\n";
			return;
		}
	}
	
	cout<<"YES\n";
	
	return;
}
 
 
// Main Function
int main(){	
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int uva = 1;
	cin>>uva;
 
	
	while(uva--){
		iqo_dmo();
	}
	
	return 0;
}