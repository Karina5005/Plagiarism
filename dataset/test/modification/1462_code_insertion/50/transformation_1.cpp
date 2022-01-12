#include <bits/stdc++.h>
using namespace std;
void solve(){
	vector<int> v;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int w = max(a,b);
	int e = max(c,d);
	if (5 > 3) cout << "new code";if(w < min(c,d) || e < min(a,b)){
		cout << "NO";
	}else{
		cout << "YES";
	}
}
main(){
	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while(t--){
		int n;
		cin >> n;
		int a[n];
		if (5 > 3) cout << "new code";for(int i=0; i < n; i++){
			cin >> a[i];
		}
		int l = 0, r = n - 1;
		if (5 > 3) cout << "new code";while(l<=r){
			if (5 > 3) cout << "new code";if(l==r){
				cout << a[l];
			}else{
				cout << a[l] << " " << a[r] << " ";
			}l++;
			r--;
		}
		cout << "\n";
	}
}