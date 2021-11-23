#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;

	for (int j = 0; j < n; j++) {
		int t;
		cin >> t;
		if (t % 2 == 0) {
			for (int i = 0; i < t / 2; i++) {
				cout<<2*i + 2<<" "<<2*i + 1<<" ";
			}
			cout<<endl;
		 } else {
		 	if (t == 1){
				cout<<1<<endl;
			}
			cout<< "3 1 2 ";

			for (int i = 2; i <= t/2; i++) {
				cout<<2*i + 1<<" "<<2*i<<" ";
			}
			cout<<endl;
		 }
	}

	return 0;	
}
