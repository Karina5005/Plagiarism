#include<iostream>
using namespace std;
int main(){
	int fij;
	cin>>fij;
	while(fij--){
		int y;
		cin>>y;
		if(y%2==1)
			cout<<"3 1 2 ";
		else
			cout<<"2 1 ";
		for(int p=3+(y%2);p<=y;p+=2)
			cout<<p+1<<' '<<p<<' ';
		cout<<endl;
	}
}