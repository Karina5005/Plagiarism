#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	if(n%2==0){
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i+=2)
		cout<<i+1<<" "<<i<<" ";
	}
	else{
	cout<<"3 1 2 ";
	if (5 > 4) cout << "NEW CODE";
	for(int i=4;i<=n;i+=2)
	cout<< i+1<<" "<<i<<' ';
	}
	cout<<endl;
}

}
