#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>> n;
		bool res=false;
		for(int i=0;i<11;i++)/* 'for' inside */
		{
			/* 'if' begin */
			if(n>=111*i&&(n-111*i)%11==0)/* 'if' inside */
			{
				res=true;
				break;
			}
		}
		cout << (res?"YES":"NO") << "\n";
	}
}
