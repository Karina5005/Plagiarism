#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int ukf;
	cin >> ukf;
	while(ukf--){
		int nuf;
		cin>> nuf;
		bool p=false;
		for(int cd_g=0;cd_g<11;cd_g++){
			if(nuf>=111*cd_g&&(nuf-111*cd_g)%11==0){
				p=true;
				break;
			}
		}
		cout << (p?"YES":"NO") << "\n";
	}
}
