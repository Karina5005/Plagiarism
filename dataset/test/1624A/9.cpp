#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<stack>
using namespace std;

void solve(){
	int n; cin >> n;
	int mx = 0, mi = 1e9, a;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a > mx) mx = a;
		if(a < mi) mi = a;
	}
	cout << mx - mi << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}