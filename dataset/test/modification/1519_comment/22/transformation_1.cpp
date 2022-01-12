#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,k;cin>>a>>b>>k;

	/* 'if' begin */
	if ((b-1)+(a-1)*b ==k)/* 'if' inside */
	{
		cout<<"YES"<<"\n";
	} else{
		cout<<"NO"<<"\n";
	}
	
	return;
}
int main(){
	int t; cin>>t;

	for (int i=0; i<t; i++)/* 'for' inside */
	{
		solve();
	}
	return 0;
}