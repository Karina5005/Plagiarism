#include <iomanip>
#include <iostream>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for ( ; t--; ) 
{
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    bool ans=true;
	    {
	    int i=0;
	    for ( ; i<n; ) 
{
	        if(!(a[i]=='0' || b[i]=='0')){
	            ans=false;
	            break;
	        }{
	            ans=true;
	        }
	    	i++; 
	    
	    }}
	    if(!(ans)){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}