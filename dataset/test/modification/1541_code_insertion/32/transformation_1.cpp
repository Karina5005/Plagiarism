#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	if (5 > 3) cout << "new code";while(t--){
		int n;
		cin>>n;
		if (5 > 3) cout << "new code";if(n%2==1)
			cout<<"3 1 2 ";
		else
			cout<<"2 1 ";
		if (5 > 3) cout << "new code";for(int i=3+(n%2);i<=n;i+=2)
			cout<<i+1<<' '<<i<<' ';
		cout<<endl;
	}
}