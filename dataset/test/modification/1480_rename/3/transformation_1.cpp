/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int o;
	cin>>o;
	while(o--){
		string o;
		cin>>o;
		for(int wji_wne = 1; wji_wne <= o.size(); wji_wne++){
			if(wji_wne % 2 == 1 && o[wji_wne - 1] != 'a'){
				o[wji_wne - 1] = 'a';
			}
			else if(wji_wne % 2 == 1 && o[wji_wne - 1] == 'a'){
				o[wji_wne - 1] = 'b';
			}
			else if(wji_wne % 2 == 0 && o[wji_wne - 1] != 'z'){
				o[wji_wne - 1] = 'z';
			}
			else{
				o[wji_wne - 1] = 'y';
			}
		}
		cout<<o<<endl;
	}
	return 0;
}
