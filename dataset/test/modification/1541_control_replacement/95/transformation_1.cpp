#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		if(n%2==0){
			{
			int i=1;
			while (i<=n) {
			cout<<i+1<<" "<<i<<" ";
			i+=2; 
			
			}}
			cout<<endl;
		}
		else{
			cout<<"3 1 2 ";
			{
			int i=4;
			while (i<=n) {
			cout<<i+1<<" "<<i<<" ";
			i+=2; 
			
			}}
			cout<<endl;
		}
	}
}