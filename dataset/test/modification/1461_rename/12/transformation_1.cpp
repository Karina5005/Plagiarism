#include <bits/stdc++.h>

using namespace std;
int main() {
	int ai;
	cin>>ai;
	char ddk[3]={'a','b','c'};
	while(ai--)
    {
		int j,sdd_oyq;
		cin>>j>>sdd_oyq;
		for(int tj_ccb=1;tj_ccb<=j;tj_ccb++)
            cout<<ddk[tj_ccb%3];
		cout<<endl;
	}
}
