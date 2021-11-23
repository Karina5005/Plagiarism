#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(!(n%2==0)){
			int b[n];
			{
			int i=1;
			while (i<n-2) {
				cout<<i+1<<" "<<i<<" ";
				i=i+2; 
			
			}}
			cout<<n<<" "<<n-2<<" "<<n-1<<endl;
		}
		else{
			{
			int i=1;
			while (i<n) {
				cout<<i+1<<" "<<i<<" ";
				i=i+2; 
			
			}}
			cout<<endl;
		}
	}
}