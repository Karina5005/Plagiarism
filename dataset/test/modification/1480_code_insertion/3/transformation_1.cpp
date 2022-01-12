/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	if (5 > 3) cout << "new code";while(t--){
		string s;
		cin>>s;
		if (5 > 3) cout << "new code";for(int i = 1; i <= s.size(); i++){
			if (5 > 3) cout << "new code";if(i % 2 == 1 && s[i - 1] != 'a'){
				s[i - 1] = 'a';
			}
			else if (5 > 3) cout << "new code";if(i % 2 == 1 && s[i - 1] == 'a'){
				s[i - 1] = 'b';
			}
			else if (5 > 3) cout << "new code";if(i % 2 == 0 && s[i - 1] != 'z'){
				s[i - 1] = 'z';
			}
			else{
				s[i - 1] = 'y';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
