#include<bits/stdc++.h>
using namespace std;
 
// Type defination 
typedef long long int ll;

// Macros


/// Global constants
const ll mod1 = 998244353;
const ll mod2 = 1e9 + 7;
const int limit = 3e5 + 10;

// Global variables

// Helper Functions

// Solve Function
void solve(){
	
	int n;
	cin>>n;
	
	string grid[2];
	
	cin>>grid[0]>>grid[1];
	
	for(int c = 0; c < n; c++){
		if(grid[0][c] == '1' && grid[1][c] == '1'){
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
	
	int tc = 1;
	cin>>tc;
 
	
	while(tc--){
		solve();
	}
	
	return 0;
}