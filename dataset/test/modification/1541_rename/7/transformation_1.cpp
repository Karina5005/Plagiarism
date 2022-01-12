#include<bits/stdc++.h>
using namespace std;
int main(){
int be_b;
cin>>be_b;
while(be_b--){
	int zo;
	cin>>zo;
	if(zo%2==0){
		for(int mr=1;mr<=zo;mr+=2)
		cout<<mr+1<<" "<<mr<<" ";
	}
	else{
	cout<<"3 1 2 ";
	for(int zfl=4;zfl<=zo;zfl+=2)
	cout<< zfl+1<<" "<<zfl<<' ';
	}
	cout<<endl;
}

}
