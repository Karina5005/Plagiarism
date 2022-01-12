#include <bits/stdc++.h>
using namespace std;
int main(){
	int s;
	cin >> s;
	while(s--){
		int t_eb;
		cin>> t_eb;
		bool zz_xna=false;
		for(int n_xi=0;n_xi<11;n_xi++){
			if(t_eb>=111*n_xi&&(t_eb-111*n_xi)%11==0){
				zz_xna=true;
				break;
			}
		}
		cout << (zz_xna?"YES":"NO") << "\n";
	}
}
