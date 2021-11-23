#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    bool ans=true;
	    for(int i=0;i<n;i++){
	        if(a[i]=='0' || b[i]=='0'){
	            ans=true;
	        }else{
	            ans=false;
	            break;
	        }
	    }
	    if(ans){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}