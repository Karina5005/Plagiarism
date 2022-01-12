#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll sum=a+b+c;
		if(a<sum/9 || b<sum/9 || c<sum/9 || sum%9!=0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	}
	




