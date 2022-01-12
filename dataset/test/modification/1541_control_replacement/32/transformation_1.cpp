#include <iomanip>
#include <iostream>
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for ( ; t--; ) 
{
		int n;
		cin>>n;
		if(!(n%2==1))
			cout<<"2 1 ";
		else
			cout<<"3 1 2 ";
		{
		int i=3+(n%2);
		for ( ; i<=n; ) 
{
			cout<<i+1<<' '<<i<<' ';
			i+=2; 
			
			}}
		cout<<endl;
	}
}