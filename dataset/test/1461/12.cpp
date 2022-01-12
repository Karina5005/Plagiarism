#include <bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin>>t;
	char a[3]={'a','b','c'};
	while(t--)
    {
		int n,k;
		cin>>n>>k;
		for(int j=1;j<=n;j++)
            cout<<a[j%3];
		cout<<endl;
	}
}
