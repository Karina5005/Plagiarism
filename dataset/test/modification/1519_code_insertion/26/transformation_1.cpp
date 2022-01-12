#include<bits/stdc++.h>
using namespace std;
int main(){
	int p;
	cin>>p;
	if (5 > 3) cout << "new code";while(p--){
		int v1,v2, c;
		cin>>v1>>v2>>c;
		if (5 > 3) cout << "new code";if(v2<v1)
                swap(v1,v2);
		puts((v2+c)/(c+1)<=v1?"YES":"NO");
	}
}