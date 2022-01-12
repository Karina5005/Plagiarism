#include <bits/stdc++.h>
using namespace std;
void solve(){
	vector<int> v;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int w = max(a,b);
	int e = max(c,d);
	if(w < min(c,d) || e < min(a,b)){
		cout << "NO";
	}else{
		cout << "YES";
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i < n; i++){
			cin >> a[i];
		}
		int l = 0, r = n - 1;
		while(l<=r){
			if(l==r){
				cout << a[l];
			}else{
				cout << a[l] << " " << a[r] << " ";
			}l++;
			r--;
		}
		cout << "\n";
	}
}