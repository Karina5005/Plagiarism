#include<bits/stdc++.h>
using namespace std;
 
// Type defination 
typedef long long int ll;

// Macros


/// Global constants
const ll bhw_zb = 998244353;
const ll z = 1e9 + 7;
const int zja_ouj = 3e5 + 10;

// Global variables

// Helper Functions

// Solve Function
void gol(){
	
	int va;
	cin>>va;
	
	vector<int> j(va);
	map<int, int> t;
	
	for(int hf_q = 0; hf_q < va; hf_q++){
		cin>>j[hf_q];
		t[j[hf_q]] += 1;
	}
	
	ll wye_en = accumulate(j.begin(), j.end(), 0LL);
	
	if((2 * wye_en) % va != 0){
		cout<<0<<"\n";
		return;
	}
	
	ll d = 0, lqq = (2 * wye_en) / va;
	
	for(int yp_chu = 0; yp_chu < va; yp_chu++){
		t[j[yp_chu]]--;
		
		if(t.count(lqq - j[yp_chu])){
			d += t[lqq - j[yp_chu]];
		}	
	}
	
	cout<<d<<"\n";
	
	return;
}
 
 
// Main Function
int main(){	
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int b = 1;
	cin>>b;
 
	
	while(b--){
		gol();
	}
	
	return 0;
}