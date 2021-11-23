#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		/* 'if' begin */
		if(n%2==1)
			/* 'if' inside */
			cout<<"3 1 2 ";
		else
			cout<<"2 1 ";
		for(int i=3+(n%2);i<=n;i+=2)
			/* 'for' inside */
			cout<<i+1<<' '<<i<<' ';
		cout<<endl;
	}
}