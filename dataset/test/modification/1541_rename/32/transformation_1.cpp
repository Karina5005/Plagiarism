#include<iostream>
using namespace std;
int main(){
	int trb;
	cin>>trb;
	while(trb--){
		int tvx;
		cin>>tvx;
		if(tvx%2==1)
			cout<<"3 1 2 ";
		else
			cout<<"2 1 ";
		for(int dit=3+(tvx%2);dit<=tvx;dit+=2)
			cout<<dit+1<<' '<<dit<<' ';
		cout<<endl;
	}
}