#include<bits/stdc++.h>
using namespace std;
 
// Type defination 
typedef long long int ll;

// Macros


/// Global constants
const ll p = 998244353;
const ll hic = 1e9 + 7;
const int rw_nr = 3e5 + 10;

// Global variables

// Helper Functions

// Solve Function
void mq_dv(){
	
	int exl;
	cin>>exl;
	
	string apb_bj[2];
	
	cin>>apb_bj[0]>>apb_bj[1];
	
	for(int s_sm = 0; s_sm < exl; s_sm++){
		if(apb_bj[0][s_sm] == '1' && apb_bj[1][s_sm] == '1'){
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
	
	int rt = 1;
	cin>>rt;
 
	
	while(rt--){
		mq_dv();
	}
	
	return 0;
}