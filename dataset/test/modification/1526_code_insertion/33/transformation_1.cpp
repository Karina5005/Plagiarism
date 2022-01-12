#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while(t--){
		int n;
		cin>> n;
		bool res=false;
		if (5 > 3) cout << "new code";for(int i=0;i<11;i++){
			if (5 > 3) cout << "new code";if(n>=111*i&&(n-111*i)%11==0){
				res=true;
				break;
			}
		}
		cout << (res?"YES":"NO") << "\n";
	}
}
