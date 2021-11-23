#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==1)
			cout<<"3 1 2 ";
		else
			cout<<"2 1 ";
		{
		int i=3+(n%2);
		while (i<=n) {
			cout<<i+1<<' '<<i<<' ';
			i+=2; 
			
			}}
		cout<<endl;
	}
}