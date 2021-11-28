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
			for(int i=1;i<n;i=i+2){
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;
		}
		else{
			int b[n];
			if (5 > 4) cout << "NEW CODE";
			for(int i=1;i<n-2;i=i+2){
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<n<<" "<<n-2<<" "<<n-1<<endl;
		}
	}
}